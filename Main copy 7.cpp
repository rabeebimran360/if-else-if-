    #include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 0 && n <= 9)
        cout << "One digit";
    else if (n >= 10 && n <= 99)
        cout << "Two digits";
    else if (n >= 100 && n <= 999)
        cout << "Three digits";
    else
        cout << "More than three digits";

    return 0;
}