#include<stdio.h>
#include<stdlib.h>
int x;

struct node
{
	int data;
	struct node* next;
}*head;
void display()
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	temp=head;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
		}
		printf("%d	",temp->data);
	}			
}

void insertbeg()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the element to insert\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=head;
	head=newnode;
}
void insertend()
{
	struct node*current,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the element to insert\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=NULL;
	current=head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next=newnode;
}
void insertpos()
{
	struct node*temp,*newnode;
	int pos,i=1;
	newnode=malloc(sizeof(struct node));
	printf("enter the position to insert\n");
	scanf("%d",&pos);
	printf("enter the element to insert\n");
	scanf("%d",&x);
	temp=head;
	newnode->data=x;
	newnode->next=NULL;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}	
void deletebeg()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("Empty linked list");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void deleteend()
{
	struct node*temp,*prev;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		free(temp);
		prev->next=NULL;
	}	
}
void deletepos()
{
	struct node*temp,*position;
	int i=1,pos;
	printf("enter the index");
	scanf("%d",&pos);
	if(pos<0)
	{
		printf("invalid position");
	}
	else
	{	
	position=malloc(sizeof(struct node));
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	position=temp->next;
	temp->next=position->next;
	free(position);
	}
}										
			
	
			
	
	
	
int main()
{
	head=NULL;
	int ch;
	while(1)
	{
		printf("\nLINKED LIST MENU\n");
		printf("1.Display\n2.Insert at beginning\n3.Insert at end\n4.Insert at a position\n5.Delete from beginning\n6.Delete from end\n7.Delete at a position\n8.exit");
		printf("Enter your choice(1-7)\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:display();
					break;
			case 2:insertbeg();
					break;
			case 3:insertend();
					break;
			case 4:insertpos();
					break;
			case 5:deletebeg();
					break;
			case 6:deleteend();
					break;
			case 7:deletepos();
					break;
			case 8:exit(0);		
			default :printf("wrong choice!!!");
		}
	}
}
				
															
			

		
		
		
		