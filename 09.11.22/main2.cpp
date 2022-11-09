#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
ll a,b,c,d;
string s;
int main(){
    cin>>s;
    for(int i=0;i<3;++i){
        switch(s[i]){
        case '0': cout<<"---"; break;
        case '1': cout<<"--x"; break;
        case '2': cout<<"-w-"; break;
        case '3': cout<<"-wx"; break;
        case '4': cout<<"r--"; break;
        case '5': cout<<"r-x"; break;
        case '6': cout<<"rw-"; break;
        case '7': cout<<"rwx"; break;
        }
    }
    cout<<endl;
return 0;
}