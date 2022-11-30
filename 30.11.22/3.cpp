#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
//string s;

int main(){
    int n,j;
    cin>>n;
    float *mas;
    mas = new float[n];
    srand(time(NULL));
    for(int i=0;i<n;++i){
        mas[i]=0;
    }
    for(int i=0;i<n;++i){
        cout<<mas[i]<<" "<<'\n';
    }
    delete[] mas;
    mas = new float[10];
    for(int i=0;i<10;++i){
        mas[i]=1;
    }
    /*for(int i=0;i<10;++i){
        cout<<mas[i];
    }*/
    delete[] mas;
    return 0;
}