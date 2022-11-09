#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int kek(int a){
    return a*a;
}
int m;
int main(){
    cin>>m;
    cout<<kvadrat(m)<<'\n';
    return 0;
}