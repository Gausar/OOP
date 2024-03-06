#include<iostream>
using namespace std;

class Time{
    private:
        int tsag;
        int minute;
        int second;
    public:
        void utga(){
            cin>>tsag>>minute>>second;
        }
        Time oloh(Time a, Time b){
            Time t;
            int tsag1 = a.tsag * 3600 + a.minute * 60 + a.second;
            int tsag2 = b.tsag * 3600 + b.minute * 60 + b.second;
            int difference = tsag2 - tsag1;

            t.tsag = difference / 3600;
            t.minute = (difference - t.tsag * 3600)/60;
            t.second = difference - t.tsag * 3600 - t.minute * 60;
            return t;
        }
        void hewleh(){
            cout<<tsag<<":"<<minute<<":"<<second<<endl;
        }
};

int main(){
    Time x, y, z;
    x.utga();
    y.utga();
    x.hewleh();
    y.hewleh();
    z = z.oloh(x, y);
    z.hewleh();
    return 0;
}