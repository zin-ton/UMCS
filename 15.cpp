#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n,k=0;
int main(){
    while(true){
        cin>>n;
        if(n==0) return cout<<k<<'\n',0;
        else k+=n;
    }
    return 0;
}