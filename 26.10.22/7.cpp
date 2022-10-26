#include <iostream>
#include <cmath>
//#include <utility>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
double ans=0;
ll c;
pair <ll,char> from;
pair <ll,char> to;
ll chess(ll a){
    if(a==1){
        if((abs(from.first-to.first)==1 && from.second-to.second==0) || (abs(from.first-to.first)==1 && abs(from.second-to.second)==1)){
            return 1;
        }
        else return 0;
    }
    if(a==2){
        if(from.first-to.first==0 || from.second-to.second==0 || (abs(from.first-to.first)==abs(from.second-to.second))) return 1;
        else return 0;
    }
    if(a==3){
        if((abs(from.first-to.first)==abs(from.second-to.second))) return 1;
        else return 0;
    }
    if(a==4){
        if(((abs(from.first-to.first))==2 && abs(from.second-to.second)==1) || ((abs(from.first-to.first))==1 && abs(from.second-to.second)==2)) return 1;
        else return 0;
    }
    if(a==5){
        if(from.first-to.first==0 || from.second-to.first==0) return 1;
        else return 0;
    }
    if(a==6){
        if(to.first-from.first==1 && from.second-to.second==0) return 1;
        else return 0;
    }
    return cout<<"Niepoprawna figura",0;
}

int main(){
    cin>>c>>from.first>>from.second>>to.first>>to.second; //1 - king, 2 - queen, 3 - bishop, 4 - knight, 5 - rook, 6 - pawn
    cout<<chess(c)<<'\n';
    return 0;
}
