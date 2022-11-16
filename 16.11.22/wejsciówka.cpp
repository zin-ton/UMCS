#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a;
float b;
//string s;
float rek(int k,float x){
    if(k==0) return 1;
        else
            if(k==1) return x;
                else
                    return 2*rek(k-1,x)-rek(k-2,x); 
}
int main(){
    cin>>a>>b;
    cout<<rek(a,b)<<'\n';
    return 0;
}