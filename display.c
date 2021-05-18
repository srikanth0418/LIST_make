#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void display()
{
    extern struct node *head;
	extern struct node *temp=head;
	if(head==NULL)
	{
		printf("given nodes are empty\n");
	}
	else
	{
		while(temp!=head)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
	printf("%d\n",temp->data);
}
