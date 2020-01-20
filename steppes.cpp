#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int x=0, y=0, N=0;

int up (int arr[][49],int step){
    for(int i = 0 ; i < step ; i++){
        if(x >= N || y >= N || x < 0 || y - i <0){
            break;
        }
        cout << arr[x][y - i];

    }
    y = y - step;
}

int left (int arr[][49],int step){
    for(int i = 0 ; i < step ; i++){
        if(x >= N || y >= N || x - i < 0 || y <0){
            break;
        }
        cout << arr[x - i][y];
    }
    x = x - step;
}

int right (int arr[][49],int step){
    for(int i = 0 ; i < step ; i++){
        if(x + i >= N || y >= N || x < 0 || y <0){
            break;
        }
        cout << arr[x + i][y];
    }
    x = x + step;
}

int down (int arr[][49],int step){
    for(int i = 0 ; i < step ; i++){
        if(x >= N || y + i >= N || x < 0 || y <0){
        break;
        }
        cout << arr[x][y + i];
    }
    y = y + step;
}

int main(){
    int step = 0;
    int arr[49][49] = {0},D;
    while (cin >> N >> D){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cin >> arr[j][i];
            }
        }

        x = N / 2;
        y = N / 2;
        step = 1;
        if (D == 0){
            while(true){
                left(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                up(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
                right(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                down(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
                }
        }
                if (D == 1){
            while(true){
                up(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                right(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
                down(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                left(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
            }
        }
                if (D == 2){
            while(true){
                right(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                down(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
                left(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                up(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
                }
        }
                if (D == 3){
            while(true){
                down(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                left(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
                up(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                right(arr, step);
                if(x >= N || y >= N || x < 0 || y <0){
                    break;
                }
                step+=1;
                }
        }
    }
    return 0;
}
