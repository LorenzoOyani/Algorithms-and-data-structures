#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name, "Lorenzo");

    description = malloc(200 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error- memory is empty\n");
    }
    else
    {
        strcpy(description, "Lorenzo is a civil engineering student");
    }
    printf("name = %s", name);
    printf("Description: %s", description);
}