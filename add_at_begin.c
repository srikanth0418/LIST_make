#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void add_at_begin()
{
	int num1;
	extern struct node *head,*temp,*temp1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&num1);
	temp->data=num1;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
		temp1=head;
		while(temp->next!=head)
		{
			temp1=temp1->next;
		}
		temp->next=head;
		temp1->next=temp;
		head=temp;
	}
}
