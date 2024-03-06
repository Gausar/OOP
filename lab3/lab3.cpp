#include"lab3.hh"
    Fifo::Fifo(int n){
        s = new char[n];
        size = n;
        front = 0;
        rear = -1;
        count = 0;
    }
    Fifo::~Fifo(){
        delete[] s;
    }

    void Fifo::write(char c){
        if(count < size){
            rear = (rear + 1) % size;
            s[rear] = c;
            count++;
        }  
    }

    char Fifo::read(){
        char t = '\0';
        if(count > 0){
            t = s[front];
            front = (front + 1) % size;
            count--;
        }
        return t;
    }

    int Fifo::nitems(){
        return count;
    }
