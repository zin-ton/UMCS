#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
double b;
int x;
int arr[10];
int r(){
    int x;
    while(true){
    x=rand();
    if(x<=100)
    return x;
    }
}
int sort(int array [10]){
    for(int i=0;i<10;++i){
        int smallest=i;
        for(int j=i+1;j<10;++j){
            if(array[j]<array[smallest]) smallest = j;
        }
        swap(array[i],array[smallest]);
    }
    for(int i=0;i<10;++i)
    cout<<array[i]<<" ";
    return 0;
}
int main(){
    for(int i=0;i<10;++i){
        arr[i]=r();
    }
    sort(arr);
    /*for(int i=0;i<10;++i){
        cout<<arr[i]<<" ";
    }*/
    //arr=sort(arr);
    cout<<'\n';
    return 0;
}
