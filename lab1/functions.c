#include "myinclude.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{     
        int h_ih = A[0];
        for(int i = 0; i < n; i++){
                if(A[i] > h_ih)
                        h_ih = A[i];
        }
        return h_ih;
}

int min(int A[], int n)
{
       int baga = A[0];
        for(int i = 0; i < n; i++){
                if(A[i] < baga)
                        baga = A[i];
        }
        return baga;
}

void copy(int A[], int n, int B[])
{
        for(int i = 0; i < n; i++){
                B[i] = A[i];
        }
}

int find(int A[], int n, int x)
{
       for(int i = 0; i < n; i++){
                if(A[i] == x){
                        return i;
                }
       }
       return -1;
}
int make_set(int A[], int n, int B[]) {
    int t = 0;
    for(int i = 0; i < n; i++) {
        int gants = 1;
        for(int j = 0; j < i; j++) {
            if(A[i] == B[j]) {
                gants = 0; 
                break;
            }
        }
        if(gants){
            B[t] = A[i];
            t++;
        }
    }
    return t; 
}
int union_set(int A[], int n, int B[], int m)
{
        int k, s = n;
        for(int i = 0; i < m; i++){
                k = 0;
                for(int j = 0; j < s; j++){
                        if(B[i] == A[j]){
                                k = 1;
                                break;
                        }
                }
                if(k == 0){
                        A[s] = B[i];
                        s++;
                }
                          
        }
       return s;
}
int intersection_set(int A[], int n, int B[], int m, int C[])
{
        int t = 0, x = 0;
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                        if(A[i] == B[j]){
                                t = 0;
                                for(int k = 0; k < x; k++){
                                        if(C[k] == A[i]){
                                                t = 1;
                                                break;
                                        }
                                }
                                if(t == 0){
                                        C[x] = A[i];
                                        x++;
                                }
                        }
                }
        }
        return x;  
}
