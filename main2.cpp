#include <iostream>
#include <cmath>
using namespace std;
long long a,ans;
int main(){
    cin>>a;
    ans=(3*sqrt(3)*a*a)/2;
    if(ans%6==0) cout<<"a%6=0"<<'\n';
    if(ans%3==0) cout<<"a%3=0"<<'\n';
    if(ans%2==0) cout<<"a%2=0"<<'\n';
    if(ans%6!=0 && ans%2!=0 && ans%3!=0) cout<<"nic nie dzieli"<<'\n';
    cout<<ans;
    return 0;
}