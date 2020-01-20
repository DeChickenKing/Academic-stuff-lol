#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main (){
    int N,M,arr[20][20] ={0};
    while (cin >> N >> M){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                cin >> arr[i][j];
            }
        }
        int big[20] ={0};
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                if (arr[i][j] > big[i]){
                    big[i] = arr[i][j];
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < N; i++){
            sum = sum + big[i];
        }
        cout << sum << endl;
        bool first = true;
        for (int i = 0; i < N; i++){
            if((sum % big[i]) == 0){
                if(first){
                    cout << big[i];
                    first = false;
                }
                else{
                    cout << " " << big[i];
                }
            }
        }
        if  (first == false) {
            cout << endl;
        }
        if (first == true) {
            cout << -1 << endl;
        }
    }
    return 0;
}
