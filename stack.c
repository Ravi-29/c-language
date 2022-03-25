#include<stdio.h>
int stack[100],ch,n,top,x,i;
void push(void);
void pop(void);
void display(void);

void pop()
{if(top<=-1)
{printf("\n\t Stack is under flow");
}
else
{printf("\n\t The popped elements is %d",stack[top]);
top--;
}
}

void push()
{
    if(top>=n-1)
{printf("\n\tstack is over flow");
}
else
{printf(" Enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}


void display()
{if(top>=0)
{printf("\n the elements in stack \n");
for(i=top; i>=0; i--)
{printf("\n%d",stack[i]);
printf("\n press next choice");
}}
else
{printf("\n the stack is empty");
}
}

int main()
{top=-1;
printf("\n Enter the size of stack:");
scanf("%d",&n);
do
{
    printf("\n Enter the Choice:");
scanf("%d",&ch);
switch(ch)
{case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
default:
printf ("\n\t  enter a valid choice");
}} while(ch!=3);
return 0; 
}