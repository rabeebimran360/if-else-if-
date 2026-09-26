     #include <iostream>
using namespace std;

int main()
{
    float price, discount;

    cin >> price;

    if (price >= 10000)
        discount = price * 20 / 100;
    else if (price >= 5000)
        discount = price * 10 / 100;
    else if (price >= 2000)
        discount = price * 5 / 100;
    else
        discount = 0;

    cout << "Discount = " << discount;

    return 0;
}