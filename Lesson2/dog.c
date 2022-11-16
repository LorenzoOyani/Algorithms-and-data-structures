#include <stdio.h>
#include <stdlib.h>

#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 *  struct dog - struct that stores some information of a dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Description: struct called "dog"  that stores its name, its age
 * and the name of it's owner
*/

struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif



void print_dog(struct dog *d)
{
    if(d)
    {
        if(!(d -> name))
            printf("Name: (nil)\n");

        else    
                printf("Name: %s\n", d -> name);

        printf("Age: %f\n", d ->age);

        if(!(d -> owner))

            printf("Name: (nil)\n");

        else    
            printf("Owner: %s\n", d ->owner);                
    }
}


dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p_dog;
    int i , lname, lowner;

    p_dog = malloc(sizeof(*p_dog));
    if(p_dog == NULL || !(name) ||  !(owner))
    {
        free(p_dog);
        return NULL;
    }

    for (lname = 0; name[lname]; lname++)
        ;

    for (lowner = 0; owner[lowner]; lowner++)
        ;

    p_dog ->name = malloc(lname + 1);
    p_dog ->owner = malloc(lowner + 1);

    if(!(p_dog ->name) || !(p_dog ->owner))
    {
        free(p_dog ->name);
        free(p_dog -> owner);
        free(p_dog);
        return  NULL;
    }        

    for ( i =0; i < lname; i++)
    {
        p_dog ->name[i] = name[i];
        p_dog -> name[i] = '\0';
    }
    p_dog -> age;

    for (i =0; i < lowner; i++)
    {
        p_dog -> owner[i] = owner[i];
        p_dog -> owner[i] = '\0';
    }

    return (p_dog);
}