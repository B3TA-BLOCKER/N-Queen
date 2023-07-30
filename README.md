N-Queens Problem Solution using Backtracking :-
This repository contains a C++ implementation of the n-queens puzzle solution using backtracking. The n-queens problem is a classic combinatorial problem where we need to place n queens on an n x n chessboard in a way that no two queens can attack each other. The challenge is to find all distinct solutions for the given value of n.

Approach :-
The solution uses a backtracking algorithm to explore all possible configurations of placing queens on the chessboard. It starts by initializing an empty n x n chessboard represented as a 2D array. The recursive function N_Queen is then used to place queens on the board row by row, trying out different combinations and backtracking when needed to find valid solutions.

The algorithm employs helper functions to check if a queen can be safely placed in a particular cell. These helper functions perform checks for the column, left diagonal, and right diagonal to ensure that no other queen can attack the current cell.

How to Use :-
To use the solution, simply compile the C++ code and run the executable. The program will prompt for the size of the chessboard (n) and then print all distinct solutions where n queens can be placed on the board without attacking each other.

Time and Space Complexity :-
The time complexity of the solution is O(N!), where N is the number of queens (and the size of the chessboard). In the worst case, the algorithm explores all possible configurations to find valid solutions.

The space complexity is O(N^2) due to the 2D array representing the chessboard and O(N) for the recursive call stack. The space required remains constant for the chessboard but linear with respect to the board size for the call stack.

Feel free to use this code as a reference for solving the n-queens problem or for educational purposes. Contributions and improvements are welcome!
