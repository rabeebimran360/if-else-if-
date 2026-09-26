    #include <iostream>
using namespace std;

int main()
{
    int units, bill;
    cin >> units;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = units * 15;
    else
        bill = units * 20;

    cout << "Bill = Rs. " << bill;

    return 0;
}