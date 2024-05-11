#include<stdlib.h>
#include<stdio.h>
#define MAX 5
int stack_arr[MAX];
int first =-1;
int isfull()
     { if(first==MAX-1)
       return 1;
       else return 0;}

 int isempty()
     { if(first==MAX-1)
       return 1;
       else return 0;}

 int peek()
    { if(isempty())
    {  printf("stack under flow");
    exit(1);
    }
    return stack_arr[0];
    }

void push(int data)
   {  if(isfull())
        {printf("stack over flow:");
           exit(1);}
    int i;
    first =first+1;
    for(i=first;i>0;i--)
    {stack_arr[i]=stack_arr[i-1];}
     stack_arr[0]=data;} 

 void print()
  { int i;
 if(first==-1)
 {printf("stack under flow:");
    exit(1);}
    for(i=0;i<=first;i++)
    { printf("%d\t",stack_arr[i]);}
    printf("\n");} 

int main() 
{ int choice,data,i;
    while(1)
    { printf("\n");
     printf("1. push \n");
     printf("2. pop\n");
     printf("3. print the top element\n");
     printf("4.print all the element of stack\n");
     printf("5.quit\n");

     printf(" please enter your choice :\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
       printf("enter the element to bre push:");
       scanf("%d",&data);
       push(data);
       break;
       case 2:
       data=pop();
       printf("deleted element is %d\n",data);
       break;
       case 3:
       printf("the topest element is %d\n",peek());
       break;
       case 4:
       print();
       break;
       case 5:
       exit(1);
       default:
       printf("wrong choice:");}}

}








    