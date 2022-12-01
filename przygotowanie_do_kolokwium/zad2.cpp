#include <iostream>
#include <math.h>
typedef long long ll;
using namespace std;
#define files ifstream cin("input.txt");ofstream cout("output.txt")
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
void func1(float arr[5],int n, int arr2[5], int m){
    for(int i=0;i<m;++i){
        if(arr2[i]<n) cout<<arr[arr2[i]]<<'\n';
        else cout<<"NAN \n";
    }
}
int main(){
    float arr[5];
    int arr2[5];
    int a=5,b=5;
    for(int i=0;i<a;++i) cin>>arr[i];
    for(int i=0;i<b;++i) cin>>arr2[i];
    func1(arr,a,arr2,b);
    return 0;
}
