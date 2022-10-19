#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll n;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
bool tower(double xt , double yt , double zt, double r, double xr, double yr, double zr){
    double x_y=sqrt((abs(xt-xr)*abs(xt-xr))+(abs(yt-yr)*abs(yt-yr)));
    double x_y_z=sqrt((x_y*x_y)+abs((zt-zr)*(zt-zr)));
    if (x_y_z<r) return 1;
    else return 0;
}
int main(){
    cout<<"type the number of towers"<<'\n';
    cin>>n;
    double x_t[n];
    double y_t[n];
    double z_t[n];
    double x_r;
    double y_r;
    double z_r;
    double rr;
    cout<<"type coordinates and radius of reciever"<<'\n';
    cin>>x_r>>y_r>>z_r>>rr;
    cout<<"type coordinates of "<<n<<" towers"<<'\n';
    for(int i=0;i<n;++i){
        cin>>x_t[i]>>y_t[i]>>z_t[i];
    }
    for(int i=0;i<n;++i){
        if(tower(x_t[i],y_t[i],z_t[i],rr,x_r,y_r,z_r)==1) return cout<<"the number of tower reciever connected to is "<<i+1<<'\n',0;
    }
}

