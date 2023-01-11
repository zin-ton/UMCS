//11. Zaprojektuj klasę Point, która posiada dwa pola typu zmiennoprzecinkowego x, y. 
//Następnie napisz funkcję w języku C++, która przyjmuje tablicę obiektów typu Point i jej rozmiar. 
//Funkcja w argumencie będącym wskaźnikiem na obiekt klasy Point powinna zwrócić współrzędne punkty, 
//który jest położony najbliżej punktu (0,0).
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include "Point.h"
#define files ifstream cin("input.txt");ofstream cout("output.txt")
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;
int main(){
    int n = 5;
    Point *point;
    point = new Point[5];
    for(int i=0;i<5;++i){
        cin>>point[i].x>>point[i].y;
    }
    point[0].get_answer(&point, n);
    delete[] point;
    return 0;
}