#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
char arr1[100];
int func(char arr[100], char arr1[100]){
    int i=0;
    while(arr[i]!=NULL){
        arr1[i]=arr[i];
        i++;
    } 
    return 0;
}
int func1(char arr[100]){
    int i=0;
    while(arr[i]!=NULL){
        //arr1[i]=arr[i];
        i++;
    } 
    return i;
}
int main(){
    char arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=n;i<100;++i) arr[i]=NULL;
    func(arr, arr1);
    n=func1(arr);
}