#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    cout << "Hello Gaurav" << endl;
    cout << "Learn CPP" << endl;

    int a, b;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter c" << endl;
    cin >> b;
    cout << "function add " << add(a, b) << endl;

    return 0;
}