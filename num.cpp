#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (a > 0)
    {
        cout << "The number is Positive";
    }
    else if (a < 0)
    {
        cout << "The number is Negative";
    }
    else
    {
        cout << "The number is Zero";
    }

    return 0;
}