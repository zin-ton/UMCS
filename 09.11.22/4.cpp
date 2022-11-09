#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int m,x;
int randx(int n){
    if(n>0){
        cout<<m-n+1<<" ";
        n--;
        randx(n);
        return 0;
    }
    else return 0;
}
int main(){
    cin>>m;
    randx(m);
    return 0;
}