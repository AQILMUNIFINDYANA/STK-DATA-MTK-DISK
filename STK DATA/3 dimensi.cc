#include <iostream>
using namespace std;

int main()
{
    int x[3][2][4] = {
        {{1,2,3,4}, {5,6,7,8}},
        {{9,10,11,12}, {13,14,15,16}},
        {{17,18,19,20}, {21,22,23,24}}
    };

    int r; // row
    int c; // column
    int d; // depth

    //penjumlahan
    //x[2][1][2] = x[1][1][1] + x[0][1][2];

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 2; c++)
        {
            for (d = 0; d < 4; d++)
            {
                cout << "Element Row [" << r << "], Col [" << c << "], Depth [" << d << "] = " << x[r][c][d] << "\n";
            }
        }
    }

    return 0;
}
