#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n,j2;
int main(){
    cin>>n;
    for(int i=0;i<=n;++i){
        for(int j2=0;j2<=n;++j2){
            if(i>=j2)
            cout<<i*j2<<" ";
        }
        j2++;
        cout<<'\n';
    }
    return 0;
}