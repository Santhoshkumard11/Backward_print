/*Program to print the string in reverse order */
#include <iostream>
#include <string.h>
int main()
{
	char str[100]="santhosh",srev[100];	
	std :: cin>>str;            //Input for the string  
	int l=strlen(str),c;        //Calculate the string length
	for(c=0;c<l,l!=0;c++,l--)
	{
		srev[l]=str[c];         //swap the string
	}
	l=strlen(str);              //calculate the string length
	for(int i=1;i<=l;i++)
	{
	    std::cout<<srev[i];     //print the reversed string 
	}
	return(0);
}
