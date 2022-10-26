#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
double b;
int x;
const int N=1000;
int mas[1000];
int sort(int array [1000],int N){
    for(int i=0;i<1000;++i){
        int smallest=i;
        for(int j=i+1;j<1000;++j){
            if(array[j]<array[smallest]) smallest = j;
        }
        swap(array[i],array[smallest]);
    }
    for(int i=0;i<1000-1;++i){
        if(mas[i]!=mas[i+1]){
            cout<<mas[i]<<" ";
            if(i==1000-2) cout<<mas[1000-1];
        }
    }
    return 0;
}
int main(){
    for(int i=0;i<1000;++i){
        mas[i]=rand();
    }
    sort(mas,N);
    cout<<'\n';
    return 0;
}
