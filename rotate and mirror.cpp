#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;
void print(int arr[][10],int R,int C);
void rotate(int arr[][10],int& R,int& C ) {
    int rot[10][10];
    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            rot[C-j-1][i] = arr[i][j];

        }

    }
    swap (R,C);
    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            arr[i][j] = rot[i][j];
        }
    }
    return;
}
void flip(int arr[][10],int R ,int C){
    for (int i = 0; i<R/2; i++){
        for (int j = 0; j<C; j++){
            swap (arr[i][j] , arr[R-1-i][j]);
        }
    }
    return;
}

void print(int arr[][10],int R,int C){
    for(int i = 0; i<R ; i++){
        for(int j = 0;j<C;j++){
                if(j != C-1){
                    cout << arr[i][j] << " ";
                }
                else {
                    cout << arr[i][j];
                }

        }
        cout << endl;
    }
}
int main(){
    int R, C, M;
    while (cin >> R >> C >> M){
        int arr[10][10] = {0};
        for (int i = 0; i < R; i++){
            for (int j = 0; j < C; j++){
                cin >> arr[i][j];
            }
        }
        int pee[10];
        for (int i = M-1; i >= 0; i--){
            cin >> pee[i];
        }
        for (int i = 0; i < M; i++){
            if (pee[i] == 0){
                rotate(arr,R,C);

            }
            else {
                flip(arr,R,C);
            }
        }
        cout << R << " " << C << endl;
        print(arr,R,C);

    }
    return 0;
}
