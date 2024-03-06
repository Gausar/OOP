#ifndef LAB3_HH
#define LAB3_HH

class Fifo{
    private:
        int size;
        int count;
        char * s;
    public:
        Fifo(int);
        ~Fifo();
        Fifo(Fifo& fifo);
        void write(char c);
        char read();
        int nitems();
};
#endif
