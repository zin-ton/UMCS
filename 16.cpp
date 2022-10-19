#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int n,k=0,n1,k1,ans;
char a,b,c;
bool sw=0;
int main(){
    scanf("%c%d%c%d%c",&a,&n,&b,&k,&c);
    n1=n;
    k1=k;
    while(n>0){
        if(n%10==5) sw=1;
        ans+=n%10;
        n/=10;
    }
    if(sw==0) cout<<ans<<" "<<n1<<'\n';
    sw=0;
    ans=0;
    while(k>0){
        if(k%10==5) sw=1;
        ans+=k%10;
        k/=10;
    }
    if(sw==0) cout<<ans<<" "<<k1<<'\n';
    return 0;
}