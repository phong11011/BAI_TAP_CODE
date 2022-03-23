#include <stdio.h>

#define MAX 200

void input(int *arr, int n);
void ans(int *a, int *b, int *c, int *d, int n);
int max(int a, int b, int c, int d);

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n phan tu: ");
    scanf("%d", &n);
    int a[MAX], b[MAX], c[MAX], d[MAX];
    printf("Nhap day a:\n");
    input(a, n);
    printf("Nhap day b:\n");
    input(b, n);
    printf("Nhap day c:\n");
    input(c, n);
    printf("Nhap day d:\n");
    input(d, n);
    ans(a, b, c, d, n);
    return 0;
}

void input(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void ans(int *a, int *b, int *c, int *d, int n){
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d | b[%d] = %d | c[%d] = %d | d[%d] = %d\n", i, a[i], i, b[i], i, c[i], i, d[i]);
        printf("Max(%d, %d, %d, %d) = %d\n", a[i], b[i], c[i], d[i], max(a[i], b[i], c[i], d[i]));
        printf("\n");
    }
    
}

int max(int a, int b, int c, int d){
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (max < d) max = d;
    return max;
}