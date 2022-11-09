#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int m,x;
int randx(int n,int b,int c){
    if(b<=n){
    c*=b;
    b++;
    randx(n,b,c);
    }
    else return c;
    
}
int main(){
    cin>>m;
    x=randx(m,1,1);
    int a,b;
    a=1;
    for(int i=1;i<=m;++i){
        a*=i;
    }
    if(x==a) cout<<"dobrze"<<'\n';
    else cout<<"zle"<<'\n';
    cout<<x<<'\n';
    return 0;
}