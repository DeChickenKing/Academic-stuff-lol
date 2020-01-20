#include <iostream>

using namespace std;

int main()
{
    int a, b ,c;
    while (cin >> a >> b >> c) {
        if (a>0) {a=1;}
        if (b>0) {b=1;}
        bool found = false;
        if ((a&b)==c) {
            cout << "AND\n";
            found = true;
        }
        if ((a|b)==c) {
            cout << "OR\n";
            found = true;

        }
        if ((a^b)==c) {
            cout << "XOR\n";
            found = true;
        }
        if (found == false)
        cout << "IMPOSSIBLE";
    }

    return 0;
}
