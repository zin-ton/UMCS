#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans,a;
int main(){
    cin>>a;
    ans=(3*sqrt(3)*pow(a,2))/2;
    cout<<ans<<'\n';
    return 0;
}
