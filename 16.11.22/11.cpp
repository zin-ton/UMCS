#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a,b;
//string s;
int mas[10];
int k;
bool check(int m[10], int n){
    int j=n-1;
        for(int i=0;i<n/2;++i){
            if(mas[i]!=mas[j-i]) return 0;
        }
    return 1;
}
int main(){
    cin>>a;
    for(int i=0;i<a;++i){
        cin>>mas[i];
    }
    cout<<check(mas,a);
    cout<<'\n';
    return 0;
}