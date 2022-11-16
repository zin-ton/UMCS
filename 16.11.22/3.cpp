#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll a,b,c;
int main(){
    cin>>a>>b;
    if(b==0) {
        cout<<"NAN"<<'\n';
        if(a<0 || b<0) return cout<<"a<0 || b<0 \n",0;
        }
    else if (a<0 || b<0) return cout<<"a<0 || b<0 \n",0;
    else cout<<sqrt(float(a)/float(pow(b,5)))<<'\n';
    return 0;
}