#include "lab2.hh"
#include <iostream>
#include<algorithm>

using namespace std;


int main()
{
        int n, m;
        cin>> n;
        int * A = new int[n];
        read(A, n);

        cin>> m;
        int * B = new int[m];
        read(B, m);

        print(A, n);
        print(B, m);
        cout << "max = ";
        cout<<max(A, n);
        cout << endl << "Hamgiin ih yronhii huwaagch : ";
        cout<<gcd(A, n);
        //cout<<__gcd(-3, 6)<<endl;
        cout << endl << "husnegt zalgasan ni : " << endl;
        int * C = concat(A, n , B, m);
        print(C, n + m);
        cout << "Ded massiv ni : "<<endl;
        int * D = subarray(C, n + m, 1, 3);
        print(D, 3);

        cout << "shine element nemsen ni : " << endl;
        int *E = add(A, n, 1, 13);
        print(E, n + 1);

        cout << "element hassan ni : " <<endl;
        int *F = del(A, n, 0);
        print(F, n - 1);
        delete[] A;
        delete[] B;
        delete[] C;
        delete[] D;
        delete[] E;
        return 0;
}
