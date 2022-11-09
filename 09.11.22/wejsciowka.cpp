#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll m,x;
int kek(int a){
srand(time(0));
return rand()%(a+1);
}
int main(){
    cin>>m;
    x=kek(m);
    cout<<x<<'\n';
    if(x<=m && x>=0) cout<<"Poprawne"<<'\n';
    else cout<<"Nie Poprawne"<<'\n';
    return 0;
}