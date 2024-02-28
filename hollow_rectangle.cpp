#include <iostream>
using namespace std;

int main()
{

    // for (int i = 0; i < 5; i++)
    // {
    //     if ((i == 0) || (i == 5))
    //     {
    //         for (int j = 0; j < 4; j++)
    //         {
    //             cout << '*' << ' ';
    //         }
    //     }
    //     else
    //     {
    //         for (int k = 0; k < 4; k++)
    //         {
    //             if((k==0) || (k==4)) {
    //                 cout << '*';
    //             }
    //             else {
    //                 cout << ' ';
    //             }
    //         }
    //     }

    //     cout << endl;
    // }

    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 || i==row || j==1 || j==col)
            {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}