#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **, int);
void search(struct node *, int);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
    int key, num,t;
 
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    printf("\nDisplaying the list\n");
    generate(&head, num);
    printf("\nEnter key to search: ");
    scanf("%d", &key);
    t=search(head, key);
    delete(&head);
    printf("%d",t);
 
    return 0;
}
 
void generate(struct node **head, int num)
{
    int i;
    struct node *temp;
 
    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = rand() % num;
        if (*head == NULL)
        {
            *head = temp;
            temp->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
        printf("%d  ", temp->a);
    }
}
 
void search(struct node *head, int key)
{
    int count;
    while (head != NULL)
    {
        if (head->a == key)
        {
            printf("key found\n");
            return;
        }
        head = head->next;
        count++;
    }
    printf("Key not found\n");
    return count;
}
 
void delete(struct node **head)
{
    struct node *temp;
 
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
