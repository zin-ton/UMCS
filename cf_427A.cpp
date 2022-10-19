#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n,a=0,b=0,ans,k;
bool sw=0;
int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>k;
        if(k<0 && a==0) ans++;
        else
        if(k<0 && a>0) a--;
        else
        if(k>0 && a==0) a+=k;
    }
    cout<<ans;
    return 0;
}