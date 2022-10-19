#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
double a,b,c,d,ans,ans1;;
int main(){
    cin>>a>>b>>c>>d;
    if((min(a,b)>min(c,d) && min(a,b)<max(c,d)) || (max(a,b)>min(c,d) && max(a,b)<max(c,d)) || (max(c,d)>min(a,b) && max(c,d)<max(a,b)) || (min(c,d)>min(a,b) && min(c,d)<max(a,b))){
        cout<<"intersection"<<'\n';
    }
    else cout<<"no intersection"<<'\n';
    return 0;
}