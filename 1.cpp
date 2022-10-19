#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
double a,b,c;
int main(){
    cin>>a>>b>>c;
    if(double(a+b)>c && double(a+c)>b && double(c+b)>a) return cout<<"trójkąt istnieje"<<'\n',0;
    cout<<"trójkąt nie istnieje"<<'\n';
    return 0;
}