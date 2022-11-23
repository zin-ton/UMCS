#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a,b;
//string s;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int* COUT(int arr1[10],int n, int b){
    for(int i=0;i<n;++i){
        if(arr1[i]==b){
            return &arr1[i];
        }
    }
    int x=NULL;
    int *p;
    p = &x;
    return p;
}
int main(){
    cout<<COUT(arr, 10, 11)<<'\n';
}