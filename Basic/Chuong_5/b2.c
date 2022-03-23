#include <stdio.h>

void input(int *arr, int n);
void avg(int *arr, int n);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[100];
    input(arr, n);
    avg(arr, n);
    return 0;
}

void input(int *arr, int n){
    printf("Nhap day so:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
}
void avg(int *arr, int n){
    int sum1 = 0, sum2 = 0;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            sum1 += arr[i];
            count1++;
        }
        else{
            sum2 += arr[i];
            count2++;
        }
        
    }
    printf("TCB so duong: %.2f\n", 1.0*sum1/count1);
    printf("TCB so duong: %.2f\n", 1.0*sum2/count2);
}