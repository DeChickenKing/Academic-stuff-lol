#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    for(int i = 0; i<3;i++){
        cin >> a[i];
        }
    sort(a,a+3);
    cout << a[0] << " " << a[1] << " " << a[2] << endl;

    if (a[0] + a[1] <= a[2]) {
        cout << "No" << endl;
    }
    else if (a[0]*a[0]+a[1]*a[1] < a[2]*a[2]) {
        cout << "Obtuse" << endl;
    }
    else if (a[0]*a[0]+a[1]*a[1] == a[2]*a[2]) {
        cout << "Right" << endl;
    }
    else {
    cout << "Right" << endl;
        }


}
