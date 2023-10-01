#include <SFML/Network.hpp>
#include <iostream>
#include <string>

int main() {
    sf::TcpListener listener;
    listener.listen(53000); // Server port

    sf::TcpSocket clientX, clientO;
    sf::SocketSelector selector;
    selector.add(listener);

    char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
    bool isXTurn = true;

    while (true) {
        if (selector.wait()) {
            if (selector.isReady(listener)) {
                sf::TcpSocket* newClient = new sf::TcpSocket;
                if (listener.accept(*newClient) == sf::Socket::Done) {
                    if (clientX.getRemoteAddress() == sf::IpAddress::None) {
                        clientX = *newClient;
                        selector.add(clientX);
                    } else if (clientO.getRemoteAddress() == sf::IpAddress::None) {
                        clientO = *newClient;
                        selector.add(clientO);
                    }
                } else {
                    delete newClient;
                }
            } else {
                sf::TcpSocket& currentPlayer = (isXTurn) ? clientX : clientO;
                sf::TcpSocket& otherPlayer = (isXTurn) ? clientO : clientX;

                char buffer[256];
                std::size_t received;

                if (currentPlayer.receive(buffer, sizeof(buffer), received) == sf::Socket::Done) {
                    if (received > 0) {
                        int x, y;
                        sscanf(buffer, "%d %d", &x, &y);

                        if (x >= 0 && x < 3 && y >= 0 && y < 3 && board[x][y] == ' ') {
                            board[x][y] = (isXTurn) ? 'X' : 'O';
                            isXTurn = !isXTurn;

                            std::string boardString;
                            for (int i = 0; i < 3; ++i) {
                                for (int j = 0; j < 3; ++j) {
                                    boardString += board[i][j];
                                }
                            }

                            otherPlayer.send(boardString.c_str(), boardString.length() + 1);
                        }
                    }
                }
            }
        }
    }

    return 0;
}