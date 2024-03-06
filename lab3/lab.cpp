#include"lab3.hh"

Fifo::Fifo(int n){
    s = new char[n];
    size = n;
    front = 0;
    rear = 0;
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