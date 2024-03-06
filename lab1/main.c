#include "myinclude.h"

int main()
{
        int A[100], B[100], C[100];
        int n, m, k;
        printf("Ehnii husnegt oruul: ");
        read(A, 5);
        print(A, 5);

        printf("max: %d\n", max(A, 5));
        printf("min: %d\n", min(A, 5));

        copy(A, 5, B);
        printf("B husnegted huullaa\n");
        print(B, 5);

        printf("%d-iin bairlal: %d\n", 3, find(A, 5, 3));
        m = make_set(A, 5, B);
        printf("B olonlog: ");
        print(B, m);

        printf("2dahi husnegt oruul: ");
        read(A, 5);
        m = union_set(A, m, B, 5);
        printf("union xiisen olonlog: ");
        print(A, m);

        k = make_set(A, 5, C);
        printf("C olonlog: ");
        print(C, k);
        n = intersection_set(C, k, B, m, A);
        printf("ogtloltsol: ");
        print(A, n);
        return 0;
}
