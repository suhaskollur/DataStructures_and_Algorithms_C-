#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int max (int arr[], int y) {

    int max = INT_MIN;

    for (int  i = 0; i < y; i++)
    {   
        if ( arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min (int arr[], int y) {

    int min = INT_MAX;

    for (int  i = 0; i < y; i++)
    {   
        if ( arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main () {

    int size;
    cin >> size;

    int a[100];
    for (int j = 0; j < size; j++)
    {
       cin >> a[j];
    }

    cout << max(a, size) << endl;
    cout << min(a, size) << endl;
    return 0;
}