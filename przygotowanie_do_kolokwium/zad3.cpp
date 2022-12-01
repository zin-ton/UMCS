#include <iostream>
#include <math.h>
typedef long long ll;
using namespace std;
#define files ifstream cin("input.txt");ofstream cout("output.txt")
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int func1(char arr[5]){
    int ans=0;
    for(int i=4;i>=0;--i){
        if(arr[i]!='a'){
            ans+=int(arr[i])-48;
            ans*=10;
        }
    }
    return ans/=10;   
}
int main(){
    char arr[5];
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<5;++i){
        arr[i]='a';
    }
    while(n>0){
        arr[x]=char((n%10)+48);
        x++;
        n/=10;
    }
    n=0;
    n=func1(arr);
    cout<<n<<'\n';
    return 0;
}
