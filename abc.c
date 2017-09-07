#include <stdio.h>

struct node
{
    int data;
    struct node* link

};

struct node* head = NULL;

void insert(int x)
{
    struct node* temp = (struct node*)malloc(size(node));
    (*temp).data = x;
    if(head != NULL) (*temp).link = head; 
    
    head = temp;
    /* This inserts a node at the beginning.Here it is like first create a link from our newlycreated node to the existing first node then you cut the link btwn head variable and the existing first node and link the head var to point to our newly created node so that the new node will be inserted at the begining. */
    
}
void print()
{
    struct node* temp = head;
    while()
    {
    
    }

}
int main()
{   
    int n,i,x;
    printf("How many numbers!!\n")
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number\n");
        scanf("%d",&x);
        insert(x);
        print(x);
    }
    struct node* temp = (struct node*)malloc(size(node)); // Yet to type cast this
    (*temp).data = 10;
    (*temp).link = NULL;
    
    head = temp;
    
    struct node* temp1 = head;
    while((*temp1).link != NULL)
    {
        temp1 = (*temp1).link;
        printf((*temp1).data);
    
    }

    return 0;
}
