#include "lab2.hh"
#include<math.h>
#include<algorithm>
#include <iostream>

using namespace std;

void read(int *A, int n){
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
}

void print(int *A, int n){
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int max(int *A, int n){
    int maximum = *A;
   for(int i = 1; i < n; i++){
        if(maximum < *(A + i)){
            maximum = *(A + i);
        }    
   }
   return maximum;
}
/*
int gcd(int *A, int n){
    int min = *A, gcd;
     for(int i = 0; i < n; i++){
        if(min > *(A + i)){
            min = *(A + i);
        }
    } 
    for(int j = 1; j <= min; j++){
        int count = 0;
        for(int i = 0; i < n; i++){
            if(*(A + i) % j != 0){
                count++;
            }
        }
        if(count == 0){
            gcd = j;
        }
    }
    return gcd;
}
*/
/*int gcd2(int a, int b) {
    if (b == 0)
        return a;
    return gcd2(b, a % b);
}
*/
int gcd(int *A, int n) {
    int d = *A;
    
    for (int i = 1; i < n; i++) {
        d = __gcd(abs(d), abs(*(A + i)));
    }

    return d;
}
int * concat(int *A, int n, int *B, int m){
    int j;
    int * C = new int[n + m];
    for(j = 0; j < n; j++){
        *(C + j) = *(A + j);
    }
    for(int i = 0; i < m; i++){
        *(C + j) = *(B + i);
        j++;
    }
    return C;
}

int * subarray(int *A, int n, int start, int len){
    int * D = new int[len];
    int k = 0;
    for(int i = start; i < start + len; i++){
        *(D + k) = *(A + i);
        k++;
    }
    return D;
}

int * add(int * A, int n, int p, int e){
    int * G = new int[n + 1];
    for(int i = 0; i < n; i++){
        *(G + i) = *(A + i);
    }
    for(int i = n - 1; i >= p; i--){
        *(G + i + 1) = *(G + i);
    }
    *(G + p) = e;
    return G;
}

int * del(int *A, int n, int p){
    
    for(int i = p; i < n; i++){
        *(A + i) = *(A + i + 1);
    } 
    return A;
}
/*
int * del(int *A, int n, int p){
int * F = new int[n - 1];

    for(int i = 0; i < n; i++){
        if(i == p){
            break;
        }
        else{
            *(F + i) = *(A + i);
        }
    }
    for(int j = p; j < n - 1; p++){
        *(F + j) = *(A + j + 1);
    }
    return F;
}*/