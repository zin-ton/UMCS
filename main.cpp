#include <iostream>
using namespace std;
long long n=2250,year;
int main(){
    cin>>year;
    if(year>=1977) return cout<<">10000"<<'\n',0;
    cout<<"<10000"<<'\n';
    return 0;
}