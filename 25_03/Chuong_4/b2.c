#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 11, y = 6;
    int 
    mid = (x - 1)/2;
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            // printf("i = %d | y = %d \n", i, y);
            if (i == y - 1)
            {
                printf("*");
                continue;
            }
            if (j <= (mid - i) || j >= (mid + i))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}