#include<stdio.h>
#include"header.h"
#include<stdlib.h>
int length()
{
	extern struct node *head,*temp=head;
	int count;
	if(head==NULL)
	{
		printf("given nodes are empty\n");
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
			count++;
		}
	}
	return count;
}

