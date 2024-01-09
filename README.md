# N-Queens Solver 🧑‍💻👑

## Overview

The N-Queens Solver is a C++ program that tackles the classic N-Queens problem, leveraging recursion and backtracking. This problem involves placing N queens on an N x N chessboard in such a way that no two queens threaten each other. The solution employs dynamic memory allocation for a 2D array representing the chessboard.

## Code Features 🚀

- **Recursion and Backtracking:** The heart of the solution lies in the recursive `N_Queen` function, exploring safe queen placements and backtracking when needed.

- **Dynamic Memory Allocation:** The program dynamically allocates a 2D array (`arr`) to simulate the chessboard, ensuring efficient memory usage.

- **Array Manipulation:** The `Is_Safe` function carefully examines rows, columns, and diagonals in the chessboard array (`arr`) to determine safe queen placements.

- **Input/Output Handling:** Users are prompted to input the size of the chessboard (`n`), and the program outputs the resulting configuration when a solution is found.

- **Pointer and Memory Management:** Pointers are used for dynamic memory allocation, and memory is deallocated at the end to prevent memory leaks.

## Tech Stack 💻

- **Language:** C++
- **Concepts:** Recursion, Backtracking, Dynamic Memory Allocation

## Usage 🧩

1. **Compile:** Use a C++ compiler to build the executable from the provided source code.

    ```bash
    g++ N-Queen_Problem.cpp -o N-Queen_Problem.cpp
    ```

2. **Run:** Execute the compiled program.

    ```bash
    ./N-Queen_Problem
    ```

3. **Input:** Enter the desired size of the chessboard when prompted.

4. **Output:** View the resulting N-Queens configuration if a solution is found.

## Example Output 🎲

Enter the size of the chessboard: 4

0 1 0 0

0 0 0 1

1 0 0 0

0 0 1 0


## Contributing 🤝

Feel free to contribute to this project by opening issues or submitting pull requests. Your feedback and improvements are highly appreciated.

