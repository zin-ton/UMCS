#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int func(int *p, int *q, int *r){
    *r = *p + *q;
    return 0;
}

int main(){
    int a,b,c;
    cin>>a>>b;
    int *t,*y,*u;
    t = &a;
    y = &b;
    u = &c;
    func(t,y,u);
    cout<<*u;
}