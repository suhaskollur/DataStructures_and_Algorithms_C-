#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int getSum ( int arr[], int n) {

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    return sum;    
}

int main () {

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << getSum(arr, size) << endl;
    
}