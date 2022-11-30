#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
//string s;
float *func(float mas[5],int n, float a, float b, int *p){
    float *v;
    int c;
    c=abs(a-b);
    v = new float[c];
    for(int i=0;i<abs(a-b);++i){
        v[i]=mas[c+i];
    }
    p=&c;
    return v;
    delete v;
}
int main(){
    float mas[5],a,b;
    int n, *p;
    float *mas1;
    cin>>a>>b>>n;
    for(int i=0;i<n;++i) cin>>mas[i];
    int c = abs(a-b);
    mas1=new float[c];
    mas1=func(mas,n,a,b,p);
    for(int i=0;i<abs(a-b);++i) cout<<mas1[i]<<'\n';
    delete mas1;
    return 0;
}