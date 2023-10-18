#include <iostream>
using namespace std;

int main()
{

    // int a;
    // cout << "Welcome Back" << endl;
    // cout << "Enter Your Faverate Number" << endl;
    // cin >> a;

    // cout << "Your Fav No: " << a << endl;

    // cout << "hello gaurav" << endl;
    // cout << "how are you" << endl;
    // char c = 'a';
    // cout << c << endl;

    // ----------------------------------------------

    // int a, b;
    // cout << "Enter A " << endl;
    // cin >> a;
    // cout << "Enter B " << endl;
    // cin >> b;

    // if (a > b)
    // {
    //     cout << "A is greater" << endl;
    // }
    // else
    // {
    //     cout << "B is is greater" << endl;
    // }

    // if (a > b)
    // {
    //     cout << "A is greater" << endl;
    // }
    // else if (a < b)
    // {
    //     cout << "B is greater " << endl;
    // }
    // else
    // {
    //     cout << "both are equal" << endl;
    // }

    // ------------------------------
    // int n;
    // cout << "Enter Your Number" << endl;
    // cin >> n;
    // int a = 1;
    // while (a <= n)
    // {
    //     cout << a << endl;
    //     a++;
    // }

    // int sum = 0;
    // while (a <= n)
    // {
    //     sum = a + sum;
    //     a++;
    // }

    // cout << "The Sum is:" << sum << endl;

    // -----------------------------------------------

    // int a = 1;
    // int n;
    // int sum = 0;
    // cout << "Enter The Number" << endl;
    // cin >> n;

    // while (a <= n)
    // {
    //     if (a % 2 == 0)
    //     {
    //         sum = a + sum;
    //     }
    //     a++;
    // }

    // cout << "The sum of even Number is :" << sum << endl;

    // ----------------------------------------------------------

    // int n;
    // int a = 1;

    // cout << "Enter Your Number: " << endl;
    // cin >> n;

    // while (a <= n)
    // {
    //     int b = 1;
    //     while (b <= n)
    //     {
    //         cout << "*";
    //         b = b + 1;
    //     }
    //     cout << endl;
    //     a = a + 1;
    // }

    // -------------------------------------

    // int n;
    // int i = 1;
    // cout << "Enter Your Number: " << endl;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // -------------------------------------

    int n;
    int i = 1;
    cout << "Enter Your Number: " << endl;
    cin >> n;
    while (i <= n)
    {

        int j = i;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;

        i++;
        }

    return 0;
}