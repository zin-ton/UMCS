#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a,b;
//string s;
int main(){
    int x=0;
    int *p;
    p = &x;
    *p=*p+10;
    cout<<*p<<'\n';
}