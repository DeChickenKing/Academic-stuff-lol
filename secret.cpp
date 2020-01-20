#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int char_to_int(char a){
    if ( 'a' <= a <= 'z'){
        a = 0;
    }
    else a = 1;
}


int main(){
    string in;
    cin >> in;
    for(int i = 0; i< in.length(); i++){
        char_to_int(in[i]);
        }
         cout << in << endl;
    return 0;
    }
