#include <iostream>
#include <stdio.h>
using namespace std;

int binarySearch ( int arr[], int size, int key) {

    int start = 0;
    int end  = size -1;

    // int mid = ( start + end ) / 2;

    // write this in the other format, so that we can avoid getting an error if the value of the indexes goes above (2^31 - 1), which is the limit of the INT data type
    // hence we can write it in another form 
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }

        if ( key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = (start + end)/2; 
    }
    return -1;
}

int main () {

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = binarySearch(even, 6, 12);
    cout << index;

}