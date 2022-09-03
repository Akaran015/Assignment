// Define a function to print Pascal Triangle up to N lines.

#include <iostream>
using namespace std;

void print_pascal(int row_num)
{

    for (int n = 1; n <= row_num; n++)
    {

        for (int r = 1; r < row_num - n + 1; r++)
            cout << "  ";

        int val = 1;
        for (int r = 1; r <= n; r++)
        {
            cout << val << "   ";

            val = val * (n - r) / r;
        }
        cout << endl;
    }
}

int main()
{

    int row_num;
    cout << "Enter The Row Number: ";
    cin >> row_num;
    print_pascal(row_num);

    return 1;
}