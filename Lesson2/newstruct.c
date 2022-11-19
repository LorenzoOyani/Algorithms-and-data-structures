#include <stdio.h>
#include <stdlib.h>


#ifndef DOG_H
#define DOG_H


typedef struct dog
{
    char* name;
     int  age;
     char * owner;

} dog_t;
void init_dog(struct dog *d, char * name, float age, char* owner);
void print_dog(struct dog *d);
dog_t *new_dog(char * name, float age, char * owner);
void free_dog(dog_t *d);

#endif

void print_dog(struct dog *d)
{
    if ( d ==NULL)
        return NULL;
    (d -> name = NULL) ? printf("(nil)\n")
    : printf("%s\n", d ->name);    

    printf("%d\n", d -> age);
    
    (d -> owner == NULL)? printf("(nil)\n")
    : printf("%s\n", d ->owner);

}


dog_t *new_dog(char *name, float age, char * owner)
{
    dog_t *ptr_dog;
    int  i, lname, lowner;

    if(!name || !owner || ptr_dog == NULL)
    {
        free(ptr_dog);
        return NULL;
    }

    ptr_dog =  malloc(sizeof(* ptr_dog));

    for (lname = 0; name[lname]; lname++)
        ;
    for (lowner = 0; owner[lowner]; lowner++)
        ;

    ptr_dog->name = malloc(sizeof(lname + 1));
    ptr_dog ->owner = malloc(sizeof(lowner + 1));

    if(ptr_dog -> name == NULL || ptr_dog ->owner == NULL)
    {
        free(ptr_dog -> name);
        free( ptr_dog -> owner);
        free(ptr_dog);
        return NULL;

    }
    ptr_dog -> age;

    for ( i =0; i < name[lname] != '\0'; i++)
    {
        ptr_dog -> name[i] = name[lname];
        ptr_dog ->name[i] = '\0';
    }

    for ( i = 0; i < owner[lowner] != '\0'; i++)
    {
        ptr_dog -> owner[i] = owner[lowner];
        ptr_dog -> owner[i] = '\0';
    }

    return ptr_dog;


}
