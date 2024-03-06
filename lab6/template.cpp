#include<iostream>
#include<utility>
using namespace std;
template <class T>
class Mypair{
    private:
        T value1[2];
    public:
        Mypair(T first, T second){
            value1[0] = first;
            value1[1] = second;
        }
        T getMax();
};

template <class T>
T Mypair<T>::getMax(){
    return (value1[0] > value1[1] ? value1[0] : value1[1]);
}
int main(){
    Mypair <int> myObj (115, 36);
    Mypair <float> myObj2(3.3, 2.18);
    cout << endl;
    cout << myObj.getMax();
    cout << endl;
    cout << myObj2.getMax()<<endl;
    return 0;
}