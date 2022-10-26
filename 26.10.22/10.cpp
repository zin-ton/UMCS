#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
double b;
int x;
int arr[10];
int r(){
    int x;
    while(true){
    x=rand();
    if(x<=100)
    return x;
    }
}
int main(){
    for(int i=0;i<10;++i){
        arr[i]=r();
    }
    for(int i=0;i<10;++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0;
}
