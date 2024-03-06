#include<iostream>
#include<math.h>
using namespace std;

class Point{
        private:
            float x, y;
        public:
            void utga(){
                cout<<"tseg : ";
                cin>>x>>y;
            }
            float distancexy(Point a, Point b){
                float dis = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
                return dis;
            }
    };

int main(){
    Point a, b;
    a.utga();
    b.utga();
    float zai = a.distancexy(a, b);
    cout<<"Hoyr tsegiin hoorondoh zai : "<<zai<<endl;
    return 0;
}