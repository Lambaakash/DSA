#include <iostream>

using namespace std;

void printDiamond (int, int, int);

int main()
{
    int r, c, s;
    cout << "Enter rows: ";
    cin >> r;
    cout << "Enter Columns: ";
    cin >> c;
    cout << "Enter size: ";
    cin >> s;

    // for (r = 1; r <= s; r++)
    // {
    //     cout << "*";
    // }

    printDiamond(r, c, s);

    return 0;
}

// r = 4, c = 1, s = 2
void printDiamond (int r, int c, int s)
{
    for (r = 1; r <= s; r++)
    {
        cout << "*";
    }

    // for (int i = 1; i <= r; i++)
    // {
    //     cout << "*";
    // }
}



