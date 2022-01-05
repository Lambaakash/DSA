// Program for Prime number

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int i = 2;
    int flag = 0;
    while (i < num)
    {
        // num = 5; 2, 3, 4
        if (num % i == 0)
        {
            // cout << "No prime\n";
            flag = 0;
            // flag = 1;
            // break;
            // not prime
        }
        else
        {
            flag = 1;
        }
        i++;
    }

    // prime or not
    if (flag == 1)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Prime\n";
    }
}