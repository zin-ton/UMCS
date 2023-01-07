#include <bits/stdc++.h>
using namespace std;
int main() {
    double  s,p;
    double ans;
    cin>>p>>s;
    ans = 1/((1-p)+(p/s));
    cout<<"answer = "<<ans<<" "<<p<<" "<<s<<endl;
    return 0;
}
