#include <iostream>
#include <iomanip>

using namespace std;

int linearSearch ( int arr[], int size, int key) {

    for (int i = 0; i < size; i++)
    {
        if ( arr[i] == key) {
            return i;
        }
    }
    return 0;
}

int main () {

    int size;
    cin >> size;

    int arr[size], key;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cin >> key;

    cout << linearSearch( arr, size, key);
    cout << endl;
    return 0;
    

}