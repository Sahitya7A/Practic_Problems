/*Balanced parenthesis
C Program to Check if Expression is correctly Parenthesized

Example:
enter expression
((a+b)/((c-d))

expression is invalid
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];
void push(char);
void pop();


void main()
{
	int i;
	char a[100];
	printf("enter expression\n");
	scanf("%s", a);
	   for(i=0;a[i]!='\0';i++)
	   {
	       if(a[i]=='(')
	       {
	           push(a[i]);
	       }
	       else if(a[i]==')')
	       {
	           pop();
	       }
	   }
	   if(top==-1)
	   {
	       printf("Valid");
	   }
	   else
	   {
	       printf("expression is invalid");
	   }

}


void push(char a)
{
stack[top++]=a;

}


void pop()
{
if(top==-1)
{
    printf("invalid");
}
else
{
    top--;
}

}
