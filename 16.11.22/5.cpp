#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
float m;
int x=1;
//string s;
int main(){
    cin>>m;
    while(true){
        if(x==m) return cout<<"1 \n",0;
        else if(x>m) return cout<<"0 \n",0;
        x*=2;
    }
    
    return 0;
}