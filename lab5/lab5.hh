#ifndef LAB5_HH
#define LAB5_HH
#include<iostream>

using namespace std;

template <typename TYPE>
class Fifo{
    private:
        int size;
        int count;
        TYPE *s;
    public:
        Fifo(int n);
        ~Fifo();
        void write(TYPE t);
        //TYPE write(char c);
        TYPE read();
        //int read();
        int nitems();
        Fifo(Fifo& fifo);
};

#endif