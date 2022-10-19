#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n,m;
bool sw=0;
int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(i%2==0) cout<<"#";
            if(((i+1)/2)%2==1){
                if(i%2==1 && j!=m-1) cout<<".";
                if(i%2==1 && j==m-1 ) {
                    cout<<"#";
                }
            }
            else{
                if(i%2==1 && j!=0) cout<<".";
                if(i%2==1 && j==0 ) cout<<"#";
            }
            
        }
        cout<<'\n';
    }
    return 0;
}