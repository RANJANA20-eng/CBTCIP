#include <SFML/Network.hpp>
#include <iostream>
#include <string>

int main() {
    sf::TcpSocket socket;
    if (socket.connect("127.0.0.1", 53000) == sf::Socket::Done) { // Server IP and port
        std::cout << "Connected to the server!" << std::endl;
        
        while (true) {
            char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
            bool isMyTurn = true;

            while (true) {
                // Display the board
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        std::cout << board[i][j] << ' ';
                    }
                    std::cout << std::endl;
                }

                if (isMyTurn) {
                    int x, y;
                    std::cout << "Enter row and column (0-2): ";
                    std::cin >> x >> y;

                    if (x >= 0 && x < 3 && y >= 0 && y < 3 && board[x][y] == ' ') {
                        board[x][y] = 'X';
                        std::string move = std::to_string(x) + " " + std::to_string(y);
                        socket.send(move.c_str(), move.length() + 1);
                        isMyTurn = false;
                    } else {
                        std::cout << "Invalid move. Try again." << std::endl;
                    }
                } else {
                    char buffer[256];
                    std::size_t received;

                    if (socket.receive(buffer, sizeof(buffer), received) == sf::Socket::Done) {
                        if (received > 0) {
                            std::string boardString(buffer);
                            int k = 0;
                            for (int i = 0; i < 3; ++i) {
                                for (int j = 0; j < 3; ++j) {
                                    board[i][j] = boardString[k++];
                                }
                            }
                            isMyTurn = true;
                        }
                    }
                }
            }
        }
    } else {
        std::cout << "Failed to connect to the server." << std::endl;
    }

    return 0;
}
