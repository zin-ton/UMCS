#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
int a,b;
char c,d,e;
int main(){
    scanf("<%i;%i)",&a ,&b);
    for(int i=min(a,b);i<max(a,b);++i){
        if(i%3!=0 && i%5!=0) cout<<i<<" ";
    }
    cout<<'\n';
}
