#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
//string s;
int func(int mas[10],int n, int *q){
    for(int i=0;i<n;++i){
        if(*q<=mas[i]) q=&mas[i];
    }
    return *q;
}
int main(){
    int mas[10],n,max=0,max1=0;
    int *p;
    p=&max;
    cin>>n;
    for(int i=0;i<n;++i) cin>>mas[i];
    for(int i=0;i<n;++i){
        if(max1<=mas[i]) max1=mas[i];
    }
    *p=func(mas,n,p);
    if(*p==max1) cout<<"OK "<<*p<<'\n';
    else cout<<"NOT OK "<<*p<<'\n'; 
    return 0;
}