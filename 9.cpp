#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
float p(int n){
    float x,y;
    int counter = 0;
    for(int f=0;f<n;++f){
        x=rand()/(1.f * RAND_MAX);
        x= float(rand())/RAND_MAX;
        if(((x-0.5f) * (x - 0.5f) * (y-0.5f) * (y-0.5f)) <= 0.5f*0.5f){
            ++counter;
        }
    return 4.f*counter / n;
    }
}
int main(){
    srand(1);
    cout<<p(1000000)<<'\n';
    return 0;
}
