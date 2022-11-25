#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;
struct Node* head;

void print();
void insert(int x);


void insert( int x)
{
  struct Node* temp = (Node*)malloc(sizeof(Node));
    temp -> data = x;
    temp -> next = head;
    head = temp;

}

void print()
{
    struct Node *temp = head;
    print("List is: \n");
    while(temp !=NULL)
    {
        print("%d\n", temp ->data);
        temp = temp -> next;
    }
}


int main(void)
{
    head = NULL;
    int i, x, n;
    printf("Howm many numbers?\n");
    scanf ("%d\n", &n);
    for ( i =0; i< n; i++)
    printf("Enter the number:\n");
    scanf("%d\n", &x);
    insert(x);
    print();
}
