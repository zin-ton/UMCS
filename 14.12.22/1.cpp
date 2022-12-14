#include <iostream>
#include <math.h>
using namespace std;
int check(int r, int m, double s, double *x, double *y, int n){
    int ans=0;
    double now=(double(r)/double(m));
    if(now<s) return n;
    for(int i=0;i<n;++i){
        double now1=sqrt(x[i]*x[i] + y[i]*y[i]);
        double now2=0;
        while(now1<now2) now2+=m;
        if((now2-now1<=s && now2<=r)|| (abs((now2-m)-now1)<=s && now2>=0)) ans++;
        if((x[i]==y[i])) ans++;

    }
    return ans;
}
int main(){
    double *arr,*arr1;
    int r,m,n;
    double s;
    cin>>r>>m>>s>>n;
    arr=new double[n];
    arr1=new double[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<n;++i) cin>>arr1[i];
    cout<<check(r,m,s,arr,arr1,n)<<'\n';
    delete[] arr;
    delete[] arr1;
    return 0;
}