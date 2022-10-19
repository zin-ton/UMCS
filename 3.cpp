#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n,xz,xz2,x=1;
int main(){
    cin>>n;
    xz=((n-1)*2);
    xz2=(xz/2)+1;
    for(int i=0;i<n;++i){
        for(int j=1;j<xz2;++j){
            cout<<" ";
        }
        for(int j=0;j<i+x;++j){
            cout<<"*";
        }
        x++;
        xz2-=1;
        cout<<'\n';
    }
    return 0;
}