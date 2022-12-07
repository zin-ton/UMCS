#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
//string s;
int main(){
    int *arr;
    arr = new int[10];
    for(int i=0;i<10;++i) cin>>arr[i];
    cout<<&arr[3]<<'\n';
    delete[] arr;
    return 0;
}