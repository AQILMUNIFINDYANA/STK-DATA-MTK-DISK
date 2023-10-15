#include <iostream>

const int ROWS = 4;
const int COLS = 3;

int main()
{
    int A[ROWS][COLS] = {
        {7, 8, 9},
        {1, 2, 3},
        {4, 5, 6},
        {10, 11, 12}
    };

    // Access and print elements of the 2D array
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << "A[" << i << "][" << j << "] = " << A[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}
