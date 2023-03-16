#include<stdio.h>
#include<stdlib.h>
int *doubler(int a[], int size);
int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int *b;
    b = doubler(a, 5);
    int i;
    printf("array a: \n");
    for (i=0; i < 5; i++) 
        printf("%d", a[i]); printf("\n");
    printf("Array b:\n"); 
    for (i=0; i < 5; i++) 
        printf("%d", b[i]);
    printf("\n");
    free(b);
    return(0);
}
int *doubler(int a[], int size)
{
    int *temp;
    temp = (int *)malloc(size *sizeof(int)); 
    int i;
    for (i=0; i< size; i++) 
        temp[i] = 2*a[i];
    return temp;
}