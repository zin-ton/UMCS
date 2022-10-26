#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double x,y,x2,y2;
double ans;
int main(){
    cin>>x>>y>>x2>>y2;
    ans=sqrt(pow(abs(x-x2),2)+pow(abs(y-y2),2));
    cout<<ans<<'\n';
    return 0;
}
