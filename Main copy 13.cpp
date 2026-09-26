     #include <iostream>
using namespace std;

int main()
{
    int speed;
    cin >> speed;

    if (speed <= 40)
        cout << "Slow";
    else if (speed <= 80)
        cout << "Normal";
    else if (speed <= 120)
        cout << "Fast";
    else
        cout << "Over Speed";

    return 0;
}