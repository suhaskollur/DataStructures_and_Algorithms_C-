#include <iostream>
#include <iomanip>

using namespace std;

void arrayIntersect(int a[], int b[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int ele = a[i];
        for (int j = 0; j < size; j++)
        {
            if (ele == b[i])
            {
                cout << ele << ' ';
            }
        }
    }
}

int main()
{

    int size;
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int b[size];
    for (int j = 0; j < size; j++)
    {
        cin >> b[j];
    }

    arrayIntersect(a, b, size);
    return 0;
}

// havne't completed the code yet, couldnt get the right output