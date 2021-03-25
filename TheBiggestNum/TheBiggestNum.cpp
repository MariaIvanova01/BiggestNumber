#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;

    if (a >= b && a >= c )
    {
        cout << " The biggest number is " << a << endl;
    }
    else if (b >= c && b >= a)
    {
        cout << " The biggest number is " << b << endl;
    }
    else if (c >= a && c >= b)
    {
        cout << "The biggest number is " << c << endl;
    }

    system("PAUSE");
    return 0;
}

