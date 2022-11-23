#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int func(const int *e, int *r){
    return *r = *e;
}
int main(){
    const int N=123;
    int n=321;
    const int *p;
    int *q;
    p = &N;
    q = &n;
    func(p, q);
    if(N==*q) cout<<*q<<" OK"<<'\n';
    else cout<<":( \n";
}