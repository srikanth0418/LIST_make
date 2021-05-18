#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void add_at_end()
{
	int num1;
	extern struct node *head;
	extern struct node *temp,*temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&num1);
	temp1->data=num1;
	if(head==NULL)
	{
		head=temp1;
		temp1->next=head;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=temp1;
		temp1->next=head;
	}
}

