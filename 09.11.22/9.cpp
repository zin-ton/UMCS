#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int m,x;
int fibonaci(int a[],int n){
    int ans=0;
    for(int i=0;i<n;++i){
        ans+=a[i];
    }
    ans/=n;
    int kek=100000000;
    int now;
    for(int i=0;i<n;++i){
        if(abs(a[i]-ans)<kek){
            kek=abs(a[i]-ans);
            now=a[i];
        }
    }
    return now;
}
int mas[10];
int main(){
    cin>>m;
    for(int i=0;i<m;++i){
        cin>>mas[i];
    }
    cout<<fibonaci(mas,m);
    return 0;
}