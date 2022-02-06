#include <stdio.h>

int main()
{
    int i, j;
    for(i = 1; i <= 9;)
    {
        printf("%d", i);

        for(j = i+ 1; j <=9;)
        {
            printf("%d", j);
            j = j + 1;
        }
            printf("\n");
            i = i + 1;
    }
    return 0;
}
