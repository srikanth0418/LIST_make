#include<stdio.h>
#include"header.h"
void delete_at_end()
{
	extern struct node *head,*temp,*temp1;
	if(head==NULL)
	{
		printf("given node is empty\n");
	}
	else if(head->next!=head)
	{
		temp=head;
		while(temp->next!=head)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=temp->next;
		free(temp);

	}
}

