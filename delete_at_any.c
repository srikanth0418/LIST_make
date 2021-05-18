#include<stdio.h>
#include"header.h"
void delete_at_any()
{
	struct node *head,*temp,*temp1;
	int location,i=1,len;
	printf("enter the location:\n");
	scanf("%d",&location);
	len=length();
	if(head=NULL)
	{
		printf("given blist is empty\n");
	}
	else if(location==0)
	{
		delete_at_begin();
	}
	else if(location<len)
	{
		temp=head;
		while(i<location)
		{
			temp1=temp;
			temp=temp->next;
			i++;
		}
		temp1->next=temp->next;
		free(temp);
	}
	else
	{
		printf("given location is invalid\n");
	}
}



