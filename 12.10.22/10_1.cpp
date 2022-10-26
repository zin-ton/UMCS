#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
string s;
bool a,b;
int n;
int main(){
    cin>>s;
    if(s[0]=='1') a=1;
        else a=0;
    if(s[2]=='1') b=1;
        else b=0;
    if(s[1]=='>'){
        if(a==b && a==1) return cout<<"TRUE",0;
        if(a==1 && b==0) return cout<<"FALSE",0;
        if(a==0 && b==1) return cout<<"TRUE",0;
        if(a==b && a==0) return cout<<"TRUE",0;
    }
    if(s[1]=='-'){
        if(a==b && a==1) return cout<<"TRUE",0;
        if(a==b && a==0) return cout<<"FALSE",0;
        else return cout<<"FALSE",0;
    }
    if(s[1]=='^'){
        if(a==b && a==1) return cout<<"TRUE",0;
        else return cout<<"FALSE",0;
    }
    if(s[1]=='+'){
        if(a==b && a==0) return cout<<"FALSE",0;
        else return cout<<"TRUE",0;
    }
    return 0;
}
