#include <iostream>

using namespace std;

// function to say hi
void sayHi(int num)
{
    cout << "Hi! " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << "Hi!" << endl;
    // }
}

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    // call the function
    sayHi(num);
    return 0;
}