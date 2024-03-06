#include"lab3.hh"

    Fifo::Fifo(int n){
        s = new char[n];
        size = n;
        count = 0;
    }
    Fifo::~Fifo(){
        delete[] s;
    }
    void Fifo::write(char c){
        count++;
        if(count <= size){
            s[count - 1] = c;
        }
        else count--;
    }

    char Fifo::read(){
        int i;
        char x=s[0];
        if(count==1) s[0]='\0';
        if(count > 1){
            for(i = 1; i < count; i++){
                s[i - 1] = s[i];
            }
        }
        if(count>0) {
            count--;
        }
        return x;
    }
    int Fifo::nitems(){
        return count;
    }
    
    Fifo::Fifo(Fifo& fifo){
       fifo.size = size;
       fifo.count = count;
       s = new char[fifo.size];
       for(int i = 0; i < size; i++){
            fifo.s[i] = s[i];
       }
    }