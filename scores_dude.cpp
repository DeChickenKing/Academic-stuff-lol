#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int student_num;
    int* score;
    while(cin >> student_num){
        score = new int[student_num];
        for(int i = 0;i< student_num;i++){
            cin >> score[i];
        }
        sort(score,score+student_num);
        for(int i = 0;i<student_num -1 ;i++){
            cout << score[i] << " ";
        }
        cout << score[student_num - 1];
        cout << endl;
        for (int i = 0; i<student_num; i++){
            if (score[i] >= 60){
                if (i == 0){
                    cout << "best case" <<endl;
                    cout << score[i] << endl;
                    }
                else{
                    cout << score[i-1] << endl;
                 }
                 break;
            }

        }
        for (int i = student_num - 1; i>=0; i--) {
            if (score[i] < 60) {
                if (i == student_num - 1){
                    cout << score[i] << endl;
                    cout << "worst case" <<endl;
                    }
                else{
                    cout << score[i+1] << endl;
                }
                break;
            }

        }
        delete[] score;
    }



}
