#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll m=0,x;
string s;
int main(){
    cin>>s;
    for(int i=0;i<s.size();++i){
        if(s[i]>='a' && s[i]<='z') s[i]=char(int(s[i])-32);
    }
    cout<<s<<'\n';
    return 0;
}