#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int n,k=0,n1,k1,ans;
char a,b,c;
bool sw=0;
int main(){
    cin>>n;
    k=n;
    n1=k%10;
    k/=10;
    k1=k%10;
    if((n%4==0 && n1!=0 && k1!=0) || (n1==0 && k1==0 && n%400==0)) cout<<"leap year"<<'\n';
    else cout<<"common year"<<'\n';
    return 0;
}