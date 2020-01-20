#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;
void print(int** arr,int R,int C);
int** rotate(int** arr,int& R,int& C ) {
    //if arr is RxC
    //then rot should be CxR
    int** rot = new int*[C];
    for(int i = 0;i<C;i++){
        //() makes the initialized memory to be 0
        rot[i] = new int[R]();
    }
    for (int i = 0; i<R; i++){
        for (int j = 0; j<C; j++){
            //a[0][0] becomes rot[0][R-1] a[0][1] becomes rot[1][R-1] etc
                rot[C-1-j][i] = arr[i][j];
        }
    }
    swap(R,C);
    for(int i = 0;i<C;i++){
        //release memory
        delete[] arr[i];
    }
    delete[] arr;
    return rot;
}
void flip(int** arr,int R,int C){
    //R and C doesn't change
    for(int i = 0;i<R/2;i++){
        for(int j = 0;j<C;j++){
            //swap each row;
           swap(arr[i][j],arr[R-i-1][j]); 
        }
    }
}
void print(int** arr,int R,int C){
    for(int i = 0;i<R;i++){
        for(int j = 0;j<C;j++){
            cout << arr[i][j];
            if(j != C-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main(){
    int R, C, M;
    while (cin >> R >> C >> M){
        //here we declare an array of R pointers
        int** arr = new int*[R];
        for(int i = 0;i<R;i++){
            //for each pointer in array we point it to an array of C elements
            arr[i] = new int[C]();
        }
        for (int i = 0; i < R; i++){
            for (int j = 0; j < C; j++){
                cin >> arr[i][j];
            }
        }
        int* pee = new int[M]();
        for (int i = 0; i < M; i++){
            cin >> pee[i];
        }
        //reverse order to get the original array
        for (int i = M-1; i >= 0; i--){
            if (pee[i] == 0){
                //points the arr pointer to the new block of memory(new array)
                //returned by function rotate
                arr = rotate(arr,R,C);
            }
            else {
                //no need for an new array
                flip(arr,R,C);
            }
        }
        cout << R << " " << C << endl;
        print(arr,R,C);
        for(int i = 0;i<R;i++){
            //release the memory of each pointer points to in arrr
            delete[] arr[i];
        }
        //release the memory of pointers
        delete[] arr;
        delete[] pee;
    }
    return 0;
}
