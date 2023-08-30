#include <stdio.h>
#include <conio.h>

main()
{
	int f;
	int a,b,c;
	f=TOH(3,a,b,c);
	
}

 int TOH(int n,char beg,char aux,char end)
{
	if(n>=1)
	{
		TOH(n-1,beg,end,aux);
		printf("\n %c to %c",beg,end);
		TOH(n-1,aux,beg,end);
	}
}
