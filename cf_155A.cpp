#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n,m=-1,mi=10000000,k,ans;
bool sw=0;
int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>k;
        if(k<mi){
            ans++;
            mi=k;
        }
        if(k>m){
            ans++;
            m=k;
        }
    }
    cout<<ans-2;
    return 0;
}