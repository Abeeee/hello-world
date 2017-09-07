#include <stdio.h>
#include <stdlib.h> 

struct node
{   
    int data;
    struct node* link;
};

struct node* head = NULL;
void insert(int a)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    (*temp).data = a;
    if(head != NULL)  (*temp).link = NULL;
    
    head = temp; 
}
void print()
{
    struct node* temp = head;
    while((*temp).link != NULL)
    {
        printf("%d\n",(*temp).data);
        temp = (*temp).link;
        
    }
}

int main()
{   
    int n,i,x;
    printf("Give me the number of inputs bruh!!\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Give me the number to be inserted!!!\n");
        scanf("%d",&x);
        insert(x);
        print();
    
    }

    return 0;
}
