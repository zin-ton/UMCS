#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
//string s;
float *f1(float *p,int n){
    srand(time(NULL));
    for(int i=0;i<n;++i) p[i]=rand()%1000;
    return p;
}
float f2(float *p, int n){
    if(n==0) return 0;
    else return f2(p,n-1)+(-1*n*p[n-1]);
}
int main(){
    int n;
    cin>>n;
    float *mas;
    mas = new float[n];
    f1(mas,n);
    for(int i=1;i<n;++i) cout<<f2(mas,i)<<'\n';
    delete[] mas;
    return 0;
}