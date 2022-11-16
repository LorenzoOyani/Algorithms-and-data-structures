#include <stdio.h>
#include <stdlib.h>

struct User 
{
    char *name;
    char *email;
    int age;
};

struct User *new_user(char *name, char *email, int age)
{
    struct User *user;
//do something...

user = malloc(sizeof(struct User));
if(user == NULL)
    return (NULL);
user ->name = name;
user ->email = email;
user ->age = age;    


return user;

}

int main(void)
{
    struct User *user;
    user = new_user("Foo", "jerumehlawrence@gmail.com", 27);
    if( user == NULL)
        return (1);

    printf("User %s created !\n", user->name);
    printf("His email is %s\n", user->email);
    printf("and he is %d years old\n", user->age);
    return (0);    
}