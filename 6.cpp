#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
ll c,d;
ll gcd(ll a,ll b){
    if(a<b){
        swap(a,b);
    }
    while(b){
        a%=b;
        swap(a,b);
        //t = b;
        //b = a % b;
        //a = t
    }
    return a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}
int main(){
    cin>>c>>d;
    cout<<gcd(c,d)<<" "<<lcm(c,d)<<'\n';
    return 0;
}
