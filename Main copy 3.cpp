    #include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
        cout << "Smallest = " << a;
    else if (b <= a && b <= c)
        cout << "Smallest = " << b;
    else
        cout << "Smallest = " << c;

    return 0;
}