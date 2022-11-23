#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
//string s;
int main(){
    double a,b;
    double c,d;
    cin>>a>>b;
    c=a;
    d=b;
    swap(a,b);
    if(c==b && d==a)
    cout<<a<<" "<<b<<" wszystko ok \n";
    else cout<<"blęd \n";
    return 0;
}