#include <stdio.h>
#include <stdlib.h>

int top = -1 ;
char stack[100] ;

void Insert(char ch)
{
    stack[top] = ch ;
}

void Delete()
{
    if(top==-1)
    {
        printf("Expression is invalid\n") ;
        exit(0);
    }
    else
    {
       top--;
    }
}

void Top()
{
    if(top==-1)
    {
        printf("Expression is valid\n");
    }
    else
    {
        printf("Expression is Invalid\n");
    }
}
//2+3*(-)+4
void main()
{
        char character[100] ;
        printf("Enter select the expression: \n") ;
        scanf("%s", &character);
        for(int i=0;character[i]!='\0';i++)
        {
            if(character[i]=='(')
            {
                Insert(character[i]) ;

            }
            else if(character[i]==')')
            {
               Delete();

            }
        }
        Top();



}

