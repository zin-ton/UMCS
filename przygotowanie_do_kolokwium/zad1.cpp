#include <iostream>
#include <math.h>
typedef long long ll;
using namespace std;
#define files ifstream cin("input.txt");ofstream cout("output.txt")
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main(){
    ll r,h;
    cin>>r>>h;
    if(r<=0 || h<=0) cout<<"Bledne dane \n";
    else{
        cout<<(M_PI*r*r*h)/3<<'\n';
    }
    return 0;
}
