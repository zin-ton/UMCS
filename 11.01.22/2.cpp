//2. Napisz program w języku C++, 
//który wczyta od użytkownika liczbę całkowitą. 
//Następnie program powinien wyświetlić:
//- Left, gdy użytkownik wprowadził 0;
//- Right, gdy użytkownik wprowadził 1;
//- Up, gdy użytkownik wprowadził 2;
//- Down, gdy użytkownik wprowadził 3;
//- Anywhere dla każdej innej wartości wprowadzonej przez użytkownika.
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
    int n;
    cin >> n;
    switch (n){
        case 0:
            cout << "Left \n";
            break;
        case 1:
            cout << "Right \n";
            break;
        case 2:
            cout << "Up \n";
            break;
        case 3:
            cout << "Down \n";
            break;
        default:
            cout << "Anywhere \n";
            break;
    }
    return 0;
}
