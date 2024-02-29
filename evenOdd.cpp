#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int evnOdd ( int a ) {

    if (a % 2 == 0)
    {
        cout << " Even " << endl;
    } else {
        cout << " Odd " << endl;
    }
    return 0;
    
}

int main () {

    int x;
    cin >> x;

    evnOdd(x);
}