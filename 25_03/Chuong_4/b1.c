#include <stdio.h>

#define MAX 100

int main(int argc, char const *argv[])
{
    int arr[MAX][MAX];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
