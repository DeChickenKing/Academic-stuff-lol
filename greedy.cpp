#include <iostream>
#include <algorithm>

using namespace std;

typedef struct _box{
  int w;
  int f;
} Box;
bool cmp(Box a,Box b){
  return a.w*b.f < b.w*a.f;
}
Box b[100001];
int main()
{
  int n;
  long long int result,sum;
  while (cin >> n){
    result = 0;
    sum = 0;
    for(int i=0;i<n;i++){
      cin >> b[i].w;
    }
    for(int i=0;i<n;i++){
      cin >> b[i].f;
    }
    sort(b,b+n,cmp);
    for(int i=0;i<n-1;i++){
      sum += b[i].w;
      result += sum*b[i+1].f;
    }
    cout << result << endl;
  }
}
