#include <stdio.h>

int main()
{
    int two_dim[3][5] = {1,2,3,4,5,610,20,30,0,540,60,70};

    int i, j;

    for ( i=0; i < 3; i++)
    {
        printf("\n");
        for (j =0; j < 5; j++)
        {
            printf("%6d", two_dim[i][j]);
        }
    }
    printf("\n");
    return 0;
                                     

}