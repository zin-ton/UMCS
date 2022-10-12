#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double a=double(1)/double(10);
double b=double(1)-(double(9)/double(10));
int main(){
    if(abs(a-b) < 0.00000001f) return cout<<"a=b",0;
    if(a>b) return cout<<"a>b",0;
    if(a<b) return cout<<"a>b",0;
    return 0;
}
