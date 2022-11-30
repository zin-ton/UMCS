#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
//string s;
int func(int *p,int *q){
    if(*p<=*q) return *p;
    else return *q;
}
int main(){
    int a,b,*q,*p,*r;
    cin>>a>>b;
    q=&a;
    p=&b;
    *r=func(p,q);
    cout<<*r<<'\n'; 
    return 0;
}