#include<stdio.h>
#include<stdlib.h>
#include"header.h"
struct node
{
    int data;
    int *next;
}*head;
void main()
{
          int num1,num2;
	  while(1)
	  {
	  printf("1:add_at_begin:\n2:add_at_end:\n3:display:\n4:delete_at_begin:\n5:delete_att_end:\n6:delete_at_any:\n7:length:\n8:add_at_any:\n");
	  printf("enter the choice:");
	  scanf("%d",&num1);
	  switch(num1)
	  {
		  case 1:
			  add_at_begin();
			  break;
		  case 2:
			  add_at_end();
			  break;
	          case 3:
			  display();
			  break;
	          case 4:
			  delete_at_begin();
			  break;
	          case 5:
			  delete_at_end();
			  break;
		  case 6:
			  delete_at_any();
			  break;
	          case 7:
              num2=length();
			  printf("\nlengthis:%d\n",num2);
			  break;
		  case 8:
			  add_at_any();
			  break;
		  default:
			  printf("entered choice is invalid please enter the valid choice");
	  }
	  }

}

