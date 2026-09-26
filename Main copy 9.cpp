    #include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch == 'a' || ch == 'A')
        cout << "Vowel";
    else if (ch == 'e' || ch == 'E')
        cout << "Vowel";
    else if (ch == 'i' || ch == 'I')
        cout << "Vowel";
    else if (ch == 'o' || ch == 'O')
        cout << "Vowel";
    else if (ch == 'u' || ch == 'U')
        cout << "Vowel";
    else
        cout << "Consonant";

    return 0;
}