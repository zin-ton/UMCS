#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a,b;
//string s;
int main(){
    scanf("A=%i B=%i", &a, &b);
    printf("%i \n%i \n", a<<b, a>>b);
    return 0;
}