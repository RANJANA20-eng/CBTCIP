# CBTCIP
# Introduction :
A simple calculator is a device used to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. It makes arithmetic calculations easier and faster. This program takes an arithmetic operator (+, -, *, /) and two operands from a user and performs the operation on those two operands depending upon the operator entered by the user.

A face detection program uses the OpenCV library to detect faces in a live stream from webcam or in a video file stored in the local machine. This program detects faces in real time and tracks it. It uses pre-trained XML classifiers for the same. The classifiers used in this program have facial features trained in them. Different classifiers can be used to detect different objects

Student Record Management is based on the concept of recording student details. Here, the user can perform all the tasks like adding, viewing, modifying, and deleting student records. There’s no login system for this project. This is a student record management system project, which enables you to create, read, modify, and delete student Records. It utilizes file handling and shows the class and object of the programming language.

Tic Tac Toe is an integral part of our childhood memories. It is a fun game consisting of two players who battle each other using Xs and Os. Tic-tac-toe is a game where two players X and O fill the hash (#) shaped box (consist of two vertical lines crossing two horizontal lines) with their alternate turns. The player who first fills the box with 3Xs or 3Os in a horizontal, vertical, or diagonal manner will win the game. In some cases, when none of the players succeeds in filling the boxes horizontally, vertically, or diagonally with 3Xs or 3Os, then the game will be considered to be a draw.
# Implementation :
# Algorithm to Make a Digital Calculator
1. Initialize two float variables num1 and num2 to take two operands as input.
2. Initialize a char variable op to take the operator as input.
3. Start the switch statement with op as the expression of the switch statement.
4. Now, create cases for different arithmetic operations.
       A. ‘+’ for addition
       B.‘-‘ for subtraction
       C. ‘*’ for multiplication
       D. ‘/’ for division
       E. Default case for the case when the entered operator is not one of the above operators.
5. The operation will be performed based on the operator entered as the input.
# Requirements for running the Face detection program : 
1. OpenCV must be installed on the local machine.
2. Paths to the classifier XML files must be given before the execution of the program. These XML files can be found in the OpenCV directory “opencv/data/haarcascades”.
3. Use 0 in capture.open(0) to play webcam feed.
4. For detection in a local video provide the path to the video.(capture.open(“path_to_video”)).
# Requirements for running Student record management program :
This code stores the following information:
  1. Name and registration number
  2. Grades
  3. Proctor ID
# Rules of the Tic Tac Toe Game :
   1. The game must be played by two players (in this program between HUMAN and COMPUTER).
   2. Both players mark their cells with the letters "O" and "X".
   3. The game ends when one of the players fills an entire row, column or diagonal with either the character ('O' or 'X') of that player.
   4. If no one wins, the match is considered a draw.
# Output :
For Digital Calculator :
![image](https://github.com/RANJANA20-eng/CBTCIP/assets/133365717/914d1184-2b54-4a8f-a3cd-6bcd5e7dea79)
For face detection :
![image](https://github.com/RANJANA20-eng/CBTCIP/assets/133365717/4c403aec-814c-49fe-8bca-0ffc7f690caa)
For Student record Management System :
![image](https://github.com/RANJANA20-eng/CBTCIP/assets/133365717/78a79e70-b8f1-4636-8c0c-2eea9acedd64)
![image](https://github.com/RANJANA20-eng/CBTCIP/assets/133365717/5e5eca51-e926-4a54-a4e5-7d81a64eafb6)
For Tic Tac Toe Game :
![image](https://github.com/RANJANA20-eng/CBTCIP/assets/133365717/5c4b067b-0808-415d-b5b8-8d3437a92cb9)
