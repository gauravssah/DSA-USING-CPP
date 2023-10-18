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

    // int n;
    // cout << "Enter You No :" << endl;
    // cin >> n;
    // int row = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ---------------------------------

    // int n;
    // cout << "Enter You No :" << endl;
    // cin >> n;
    // int row = 1;
    // int count = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << count;
    //         count++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // -------------------------------------

    // int n;
    // cout << "Enter no :" << endl;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     int value = i;
    //     while (j <= i)
    //     {
    //         cout << value;
    //         value++;
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // ------------------------------

    // int n;
    // cin >> n;
    // int i = 0;

    // while (i <= n)
    // {

    //     int j = 1;

    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }

    //     cout << endl;

    //     i++;
    // }

    // -------------------------------------

    // int n;
    // cout << "Enter your No: " << endl;
    // cin >> n;
    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char Ch = 'A' + i - 1;
    //         cout << Ch;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ----------------------------------

    int n;
    cout << "Enter Your Number:" << endl;
    cin >> n;
    int i = 1;

    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
