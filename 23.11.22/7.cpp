#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int func(int x, bool *p){
    while(x>0){
        int a = x%10;
        if(x&1==1) return *p=0;
        x/=10;
    }
    return *p=1;
}
int main(){
    int n;
    bool sw=1;
    bool *q;
    q = &sw;
    cin>>n;
    func(n,q);
    cout<<sw;
}