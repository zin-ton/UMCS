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
//int arr[10];
char str [10] = {'b','c','d','e','f','g','h','i','j','k'};
char *p;
int SIZE(int x){
    int a=x;
    p = &str[a];
    if(*p!=0) return SIZE(++a);
    else return a;
}
int main(){
    cout<<SIZE(0);
    /*char *p;
    int x = 0;
    p = &str[x];
    while(*p!=NULL){
        p = &str[x];
        x++;
        cout<<p<<'\n';
    }*/
}