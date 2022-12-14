#include <iostream>
#include <math.h>
using namespace std;
bool check(int n, int positive, int negative, int *cables, int n_cables){
    bool sw = 0;
    bool now_ = 0;
    bool now = 0;
    int now_kek=negative;
    for(int i=0;i<n_cables;++i){
        if(cables[i]==now_kek && i%2==0 && cables[i+1]>now_kek){
            now_kek = cables[i+1];    
        }
        if(now_kek==positive) return true;
    }
    return false;
}
int main(){
    int n, positive, negative, n_cables;
    cin>>n>>positive>>negative>>n_cables;
    int *cables = new int[n_cables];
    for(int i = 0; i < n_cables; ++i) cin>>cables[i];
    for(int i = 0; i < n_cables; ++i){
        if(cables[i]>cables[i+1] && i%2==0) swap(cables[i],cables[i+1]);
    }
    cout<<check(n,positive,negative, cables, n_cables)<<'\n';
    return 0;
}