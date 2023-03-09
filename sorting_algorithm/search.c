#include <stdio.h>

int main()
{
    int list[] = {2, 3, 4, 5, 6, 7};
    int item = 5, n = 5;
    int i = 0, j = 0;

    for (; i < n; i++)
    {
        printf("list[%d] = %d\n", i, list[i]);
    }

    while (j < n)
    {
        if (item == list[j])
        {
            break;
        }
        j = j + 1;
    }

    printf("found element %d at positive %d\n", item, j + 1);
}