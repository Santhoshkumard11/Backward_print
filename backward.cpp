#include <iostream>
#include <string.h>
int main()
{
	char str[100]="santhosh";char srev[100];	
	std :: cin>>str;
	int l=strlen(str),c;
	for(c=0;c<l,l!=0;c++,l--)
	{
		srev[l]=str[c];
	}
	l=strlen(str);
	for(int i=1;i<=l;i++)
	{

	    std::cout<<srev[i];
	}
	return(0);
}