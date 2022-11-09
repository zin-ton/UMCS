#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int m,x;
int fibonaci(int a){
    if(a==0) return 0;
    if(a==1) return 1;
    return fibonaci(a-1)+fibonaci(a-2);
    
}
int main(){
    cin>>m;
    int a=1,b=1;
    int ans;
    for(int i=0;i<m-2;++i){
        ans=a+b;
        b=a;
        a=ans;
    }
    cout<<ans<<'\n';
    return 0;
} 