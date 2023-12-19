#include<stdio.h>
/*
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

*/
void main()
{
    char string[100];
    int length=0, flag=1,i;

    printf("Enter any string::- ");
    gets(string);

    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-1-i] )
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("Given string is a Palindrome.");
    }
    else
    {
        printf("Given string is not Palindrome.");
    }
   
}
