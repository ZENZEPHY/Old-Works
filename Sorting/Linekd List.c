#include<stdio.h>
#include<stdlib.h>
int i,j,count,pos,item;



struct node
 {
    int data;
    struct node *next;
 };


struct node *temp,*ptr;
struct node *head = NULL;




struct node *create_node()
{
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nMemory allocation Failed");
    }
    else
    {
        printf("\nEnter the data to be entered:");
        scanf("%d",&item);
        temp->next = NULL;
        temp->data = item;
        return temp;
    }
}




void InsertAtHead()
{
    temp = create_node();
    if(head==NULL)
        head=temp;
    else
    {
        temp->next=head;
        head=temp;
    }    
}

void InsertAtTail()
{
  temp = create_node();
    if(head==NULL)
    head=temp;
    else
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr = ptr -> next;
    }
    ptr->next=temp;
}

void InsertAtPosition()
{   
    int pos,i=1;
    printf("\nEnter the position of Data to entered:");
    scanf("%d",&pos);
    {
        if(head==NULL)
        {
        temp = create_node();
        head=temp;
        }
        else if(pos==1)
        {
            InsertAtHead();
        }
        else
        {
        temp = create_node();
        ptr=head;
        while(i<pos&&ptr!=NULL)
        {
            ptr = ptr -> next;
            i++;
        }
        temp -> next = ptr -> next;
        ptr -> next = temp;
    }
}
}

void display()
{
    if(head==NULL)
        printf("\nNo Memebers in the list");
    else 
    {
    ptr = head;
    while(ptr!=NULL)
    {
        printf("\t< %d >",ptr->data);
        ptr=ptr->next;
    }
    }
}




void main()
{
    int ch;
    do
    {
      printf("\nEnter the Options \n1)Head Insert \n2)Tail Insert \n3)Head Delete \n4)Tail Delete \n7)Exit\n");
      scanf("\n%d",&ch);
      switch(ch)
      {
        case 1:
        InsertAtHead();
        display();
        break;

        case 2:
        InsertAtTail();
        break;

        case 3:
        display();
        break;

        case 4:
        //deleteAtTail();
        break;

        case 5:
        InsertAtPosition();
        break;

        case 6:
        //DeleteAtPosition();
        break;

        case 7:
        printf("");
        break;

        default:
        printf("default");
      }
    }
    while(ch!=7);
}