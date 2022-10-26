#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
ll a,b,c;
int main(){
    cin>>a>>b>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<"istneje"<<'\n';
    }
    else cout<<"nie isneje"<<'\n';
    return 0;
}
