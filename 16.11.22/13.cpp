#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a,b;
//string s;
vector <int> v;
int main(){
    cout<<"Ilość Elementów \n";
    cin>>a;
    srand(time(NULL));
    v.resize(a);
    for(int i=0;i<a;++i) v[i]=rand();
    cout<<"Ilość Zapytań \n";
    cin>>b;
    for(int i=0;i<b;++i){
        cin>>a;
        if(a>v.size()-1 || a<0) cout<<"Nie Indeks \n";
        else cout<<v[a]<<'\n';
    }
    cout<<time;
    return 0;
}