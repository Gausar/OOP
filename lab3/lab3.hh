#ifndef LAB3_HH
#define LAB3_HH

class Fifo{
    private:
        int size;
        int count;
        int rear;
        int front;
        char * s;
    public:
        Fifo(int);
        ~Fifo();
        void write(char c);
        char read();
        int nitems();
};
#endif
