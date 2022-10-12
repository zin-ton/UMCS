#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
ll a,b;
int main(){
    cin>>a>>b;
    a++;
    b++;
    cout<<(a*b)-1<<'\n';
    return 0;
}
