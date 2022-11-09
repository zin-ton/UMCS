#include <iostream>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
ll a,b,c,d;
int main(){
    cin>>a;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a%10;
    switch(d){
        case 0: cout<<"---"; break;
        case 1: cout<<"--x"; break;
        case 2: cout<<"-w-"; break;
        case 3: cout<<"-wx"; break;
        case 4: cout<<"r--"; break;
        case 5: cout<<"r-x"; break;
        case 6: cout<<"rw-"; break;
        case 7: cout<<"rwx"; break;
        }
        switch(c){
        case 0: cout<<"---"; break;
        case 1: cout<<"--x"; break;
        case 2: cout<<"-w-"; break;
        case 3: cout<<"-wx"; break;
        case 4: cout<<"r--"; break;
        case 5: cout<<"r-x"; break;
        case 6: cout<<"rw-"; break;
        case 7: cout<<"rwx"; break;
        }
    switch(b){
        case 0: cout<<"---"; break;
        case 1: cout<<"--x"; break;
        case 2: cout<<"-w-"; break;
        case 3: cout<<"-wx"; break;
        case 4: cout<<"r--"; break;
        case 5: cout<<"r-x"; break;
        case 6: cout<<"rw-"; break;
        case 7: cout<<"rwx"; break;
        }
    cout<<endl;
return 0;
}