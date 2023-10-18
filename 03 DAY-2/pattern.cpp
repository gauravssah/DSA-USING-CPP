#include <iostream>
using namespace std;

int main()
{
    // int n;
    // int i = 1;
    // cout << "Enter Your Number: " << endl;
    // cin >> n;

    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // -------------------------------------------

    // int n;
    // int i = 1;
    // cout << "Enter Your Number: " << endl;
    // cin >> n;

    // cout << "Your Pattern is:-" << endl;
    // while (i <= n)
    // {

    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // --------------------------------

    // int n;
    // int i = 1;
    // cout << "Enter Your Number: " << endl;
    // cin >> n;

    // int count = 1;
    // cout << "Your Pattern is:-" << endl;
    // while (i <= n)
    // {

    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ---------------------------------------------

    // int n;
    // cout << "Enter You No :" << endl;
    // cin >> n;
    // int row = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ------------------------------------

    int n;
    cout << "Enter You No :" << endl;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
