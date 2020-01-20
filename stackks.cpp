#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;
struct item{
    int w;
    int f;
};
bool cmp(item a, item b){
    return (a.w*b.f < a.f * b.w);
}
int main(){
    int N = 0;
    while(cin >> N){
        item arr[100000] = {0};
        for (int i = 0;i<N;i++){
            cin >> arr[i].w;
        }
        for(int i = 0;i< N;i++){
            cin >> arr[i].f;
        }
        sort(arr,arr+N,cmp);
        int energy = 0;
        int accumulated_weight = 0;
        for(int i = 0;i< N;i++){
            energy += accumulated_weight * arr[i].f;
            accumulated_weight += arr[i].w;
        }
        cout << energy << endl;
    }
}
