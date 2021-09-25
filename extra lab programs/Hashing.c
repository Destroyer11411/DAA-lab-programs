#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
int z=0;



struct node {
    int data;
    struct node *next;
};

struct node *head[SIZE] = {NULL},*c;

void insert()
{
    int i,key;
    printf("\n Enter the value to be entered into the hash table\n");
    scanf("%d",&key);

    i=key%SIZE;

    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next = NULL;

    if(head[i] == NULL)
    {
        head[i] = newnode;
    }

    else{
        c=head[i];
        while(c->next!=NULL)
        {
            c=c->next;
        }
        c->next=newnode;
    }

}


void search()
{
    int key,index=0;
    printf("\n Enter the element to be search ed in the hash table\n");
    scanf("%d",&key);
    index=key%SIZE;

    if(head[index] == NULL)
    {
        printf("The element was not found at the location\n");
        z++;
        
    }
    else
    {
        for(c=head[index];c!=NULL;c=c->next)
        {
            z++;
            if(c->data == key)
            {
                printf("The element was found at the location\n");
               
                break;
            }

        }
    // if(c==NULL)
    // {
    //     printf("Element not found\n");
    // }
    
    }
 printf("The number of comparisions are %d\n",z);
    
}

void display()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("\n Entries at the index:%d\n",i);
        if(head[i] == NULL)
        {
            printf("NO HASH ENTRY\n");
        }

        else{
            for(c=head[i];c!=NULL;c=c->next)
            {
                printf("%d->\t",c->data);
            }
        }
    }
}

int main()
{
    int opt,key,i;

    while(1)
    {
        printf("\nChoose your function\n");
        printf("1.Insert\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
            {
                insert();
                break;
            }

            case 2:
            {
                display();
                break;
            }

            case 3:
            {
                search();
                break;
            }

            case 4:
            {
                exit(1);
                break;
            }

            default :
            {
                printf("Choose an correct option\n");
                break;
            }
        }
        
    }
}