#include <iostream>
using namespace std;
class Point{
    public:
        float x;
        float y;
    Point kek(Point *point[], int n){
    int ans = 0;
    float now = sqrt(point[0]->x*point[0]->x+point[0]->y+point[0]->y);
    for(int i=0;i<n;++i){
        if(now > sqrt(point[i]->x*point[i]->x+point[i]->y+point[i]->y)){
            ans=i;
            now = sqrt(point[i]->x*point[i]->x+point[i]->y+point[i]->y);
        }
        
    }
    return *point[ans];
}
    void get_answer(Point *point[], int n){
        Point answer = point[0].kek(&point ,n);
        cout << answer.x << " " << answer.y << '\n';
    }
};
