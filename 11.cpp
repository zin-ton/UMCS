#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
ll n;
int main(){
    cin>>n;
    switch(n){
        case 0: cout<<"Monday"<<'\n'; break;
        case 1: cout<<"Tuesday"<<'\n'; break;
        case 2: cout<<"Wednesday"<<'\n'; break;
        case 3: cout<<"Thursday"<<'\n'; break;
        default: cout<<"Party"<<'\n'; break;
    }

    return 0;
}