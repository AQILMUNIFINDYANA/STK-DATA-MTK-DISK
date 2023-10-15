#include <iostream>

int main()
{
    int A[] = {8, 10, 15, 17, 3, 7, 11, 14, 20, 25};
    int n;

    // operator aritmatika
    // penjumlahan
    A[2] = A[5] + A[8];

    // pengurangan
    A[3] = A[8] - A[5];

    // pembagian
    A[4] = A[2]/A[4];

    // perkalian
    A[6] = A[7] * A[1];
    for (n = 0; n < 10; n++)
    {
        std::cout << "Element ke- " << n << " = " << A[n] << "\n";
    }

    return 0;
}
