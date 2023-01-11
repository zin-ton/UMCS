//3. Napisz program w języku C++, 
//który będzie symulował nadawanie praw dostępu plików tj.
// R – readable,
// W – writable, 
//X – executable.
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

#define files ifstream cin("input.txt");ofstream cout("output.txt")
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;
enum Priviliges {R = 4, W = 2, X = 1};
int main(){
    int mod = R + X;
    cout << mod << '\n';
    if (mod & R) cout << "Readable\n";
    if (mod & W) cout << "Writable\n";
    if (mod & X) cout << "Executable\n";
    return 0;
}
