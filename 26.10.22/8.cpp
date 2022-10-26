#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
double b;
double f(double a){
    return a-int(a);
}
int main(){
    cin>>b;
    cout<<f(b);
    return 0;
}
