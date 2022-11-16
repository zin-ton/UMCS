#include <iostream>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
int a,b;
//string s;
bool mas[1000000];
bool c=0;
int k;
int main(){
    cin>>a>>b;
    mas[0]=1;
    mas[1]=1;
    for(int i=2;i<=b;++i){
        if(mas[i]!=1){
            for(int j=i+1;j<=b;++j){
                if(j%i==0) mas[j]=1; //alghorithm resheto erathosfena: snaczala isczem pervoe prostoe chislo i vyczerkivaem vse chto kratno emu, zatem naxodim sledusczee nevyczerknutoe czislo(ono v lubom sluczae prostoe) i vyczerkivaem vse czto kratno emu. Povtoraem do pobednogo  
            }
            }
        }
    for(int i=a;i<=b;++i){
        if(mas[i]==0) cout<<i<<" ";
    }
    cout<<'\n';
    return 0;
}