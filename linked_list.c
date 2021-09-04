#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void INSERT(int x)
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    if(head != NULL)temp->next = head;
    head = temp;
}
void Print()
{
    struct Node* temp = head;
    printf("List is:");
    while(temp !=NULL)
    {
        printf(" %d",temp->data);
    }
    printf("\n");
}
int main()
{
    Node* head = NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        printf("Enter the number \n");
        scanf("%d",&x);
        INSERT(x);
        Print();
    }
}