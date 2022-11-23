#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a,b;
//string s;
int arr[10];
int COUT(int *p, int *q){
    for(int i = *p; i < *q;++i){
        cout<<arr[i]<<'\n';
    }
    return 0;
}
int main(){
    int start = 0;
    int end = 10;
    int *p;
    int *q;
    p = &start;
    q = &end;
    for(int i=0;i<10;++i) cin>>arr[i];
    COUT(p,q);
}