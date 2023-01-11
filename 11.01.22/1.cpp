//1. Napisz program w języku C++, 
//który: dodaje, odejmuje, mnoży, dzieli dwie liczby zespolone oraz oblicza sprzężenie zespolone. 
//Następnie program powinien wyświetlić wyniki tych operacji.
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

#define files ifstream cin("input.txt");ofstream cout("output.txt")
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;
int main(){
    int a,b,c,d,ans,ans1,ans2,ans3,ans4;
    double kek,kek1;
    scanf("%i%ii", &a,  &b);
    scanf("%i%ii", &c,  &d);
    ans = a + c;
    ans1 = b + d;
    if(ans1 >= 0) cout<<"suma = "<<ans<<"+"<<ans1<<"i\n";
    else cout<<"suma = "<<ans<<ans1<<"i\n";
    ans = a - c;
    ans1 = b - d;
    if(ans1 >= 0) cout<<"roznica = "<<ans<<"+"<<ans1<<"i\n";
    else cout<<"roznica = "<<ans<<ans1<<"i\n";
    ans = a * c;
    ans1 = b*c+a*d;
    ans2 = b * d;
    ans+=ans2;
    if(ans1 >= 0) cout<<"iloczyn = "<<ans<<"+"<<ans1<<"i\n";
    else cout<<"iloczyn = "<<ans<<ans1<<"i\n";
    ans = a * c;
    ans1 = b * c + a * -1 * d;
    ans2 = b * -1 * d;
    ans+=ans2;
    ans3 = pow(c,2) - pow(d,2);
    kek=ans;
    kek1=ans1;
    kek/=double(ans3);
    kek1/=double(ans3);
    if(kek1 >= 0) cout<<"iloczyn = "<<kek<<"+"<<kek1<<"i\n";
    else cout<<"iloczyn = "<<kek<<kek1<<"i\n";
    ans=a;
    ans1=b;
    ans1*=-1;
    if(ans1 >= 0) cout<<"odwrotne = "<<ans<<"+"<<ans1<<"i\n";
    else cout<<"odwrotne = "<<ans<<ans1<<"i\n";
    ans=c;
    ans1=d;
    ans1*=-1;
    if(ans1 >= 0) cout<<"odwrotne = "<<ans<<"+"<<ans1<<"i\n";
    else cout<<"odwrotne = "<<ans<<ans1<<"i\n";
    return 0;
}
