#include <iostream>
using namespace std;

int main()
{
    int a, b, rohit;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    rohit= a;
    a = b;
    b = rohit;

    cout << "After swapping:" << endl;
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;

    return 0;
}