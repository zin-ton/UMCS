#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int m,x;
int fibonaci(int x[10][10],int n){
    int ans=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            ans=max(ans,x[i][j]);
        }
    }
    return ans;
}
int matr[10][10];
int main(){
    cin>>m;
    for(int i=0;i<m;++i){
        for(int j=0;j<m;++j){
            cin>>matr[i][j];
        }
    }
    cout<<fibonaci(matr,m);
    return 0;
} 