#include <iostream>
using namespace std;

int main()
{
    int x[3][2][4][2] = {
        {{{1,4},{2,5},{3,7},{4,8}}, {{5,4},{6,7},{7,3},{8,2}}},
        {{{9,22},{10,23},{11,24},{12,25}}, {{13,26},{14,27},{15,28},{16,29}}},
        {{{17,31},{18,32},{19,33},{20,34}}, {{21,35},{22,36},{23,37},{24,38}}}
    };

    int r; // row
    int c; // column
    int d; // depth
    int dd; //depindepth

    //penjumlahan
    //x[2][1][2] = x[1][1][1] + x[0][1][2];

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 2; c++)
        {
            for (d = 0; d < 4; d++)
            for (dd = 0; dd < 2; dd++)
                {
            {
                cout << "Element Row [" << r << "], Col [" << c << "], Depth [" << d << "], Depindepth [" << dd << "] = " << x[r][c][d][dd] << "\n";
            }
            }
        }
    }

    return 0;
}
