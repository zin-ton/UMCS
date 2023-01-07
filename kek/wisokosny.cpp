#include <iostream>
#include <cmath>
#include <cstdio>
#include <ctime>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a%4 == 0 && a%100 != 0) cout<<"wisokosny"<<endl;
    else if(a % 400 == 0) cout<<"wisokosny"<<endl;
    else cout<<"Nie wisokosny"<<endl;
    return 0;
}
