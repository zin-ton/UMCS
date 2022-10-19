#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n,k;
int main(){
    cin>>n>>k;
    for(int i=0;i<10;++i){
        cout<<n<<'\n';
    }
    for(int i=0;i<n;++i){
        cout<<k<<'\n';
    }
    return 0;
}