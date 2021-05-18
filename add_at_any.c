#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void add_at_any()
{
	extern struct node *head,*temp,*temp1;
	int i,location,num1;
	printf("enter the location:\n");
	scanf("%d",&location);
    if(head==NULL)
	{
		printf("list is empty\n");
	}
	else if(location==1)
	{
		add_at_begin();
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:\n");
		scanf("%d",&num1);
		temp->data=num1;
		temp1=head;
		while(i<location-1)
		{
			temp1=temp1->next;
		}
		temp->next=temp1->next;
		temp1->next=temp;
	}
}
