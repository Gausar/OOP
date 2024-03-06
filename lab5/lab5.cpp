#include"lab5.hh"
//using namespace std;

template class Fifo<int>;
template class Fifo<char>;

template<typename TYPE>
Fifo<TYPE>::Fifo(int n){
    size = n;
    count = 0;
    s = new TYPE[size];
}

template<typename TYPE>
Fifo<TYPE>::~Fifo(){
    delete[] s;
}

template<typename TYPE>
void Fifo<TYPE>::write(TYPE t){
    count++;
    if(count <= size){
        s[count - 1] = t;
    }
    else count--;
}

template<typename TYPE>
TYPE Fifo<TYPE>::read(){
    int i;
    TYPE x = s[0];
    if(count == 1) s[0] = 0;
    if(count > 1){
        for(i = 1; i < count; i++){
            s[i - 1] = s[i];
        }
    }
    if(count > 0){
        count--;
    }
    return x;
}
template<typename TYPE>
int Fifo<TYPE>::nitems(){
    return count;
}

template<typename TYPE>
Fifo<TYPE>::Fifo(Fifo& fifo){
       fifo.size = size;
       fifo.count = count;
       s = new TYPE[fifo.size];
       for(int i = 0; i < size; i++){
            fifo.s[i] = s[i];
       }
}