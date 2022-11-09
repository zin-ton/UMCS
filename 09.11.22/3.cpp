#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int m,x;
unsigned int randx(int b,unsigned int c){
    c*=4329091325788312908091;
    c+=1392819283131729871293;
    return c%b;
}
int main(){
    cin>>m;
    x=randx(m,time(NULL));
    cout<<x<<'\n';
    if(x<m && x>=0) cout<<"dobrze"<<'\n';
    else cout<<"zle"<<'\n';
    //int a=4190190482;
    return 0;
}