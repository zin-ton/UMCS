#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
ll a,b;
double c,ans;
int main(){
    cin>>a>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    ans=c+a+b;
    cout<<ans<<'\n';
    return 0;
}
