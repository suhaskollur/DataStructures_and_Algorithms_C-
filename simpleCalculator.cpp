#include <iostream>
#include <iomanip>
#include <math.h>
// #include <string>

using namespace std;

int main()
{

    int a, b;
    char ch;

    cout << " Enter the value of a" << endl;
    cin >> a;

    cout << " Enter the value of b" << endl;
    cin >> b;

    cout << " Enter the operation " << endl;
    cin >> ch;

    switch (ch) {

        case 'a': 
        cout << a+b << endl;
        break;

        case 's': 
        cout << a-b << endl;
        break;

        case 'm': 
        cout << a*b << endl;
        break;

        case 'd': 
        cout << a/b << endl;
        break;

        default:
        cout << "Invalid Operation" << endl;
    }
    return 0;
}