/*I am Modiying my file*/

#include<stdio.h>
#include<string.h>

main()
{
	int i,j,k;
	char s[25],temp;
	printf(" enter string\n");
	gets(s);
	printf(" string is = %s\n",s);

	for(i=0,k=0;;i++)
	{
		if((s[i]==' ')||(s[i]=='\0'))
		{
			for(j=i-1;j>k;j--,k++)
			{
				temp=s[k];
				s[k]=s[j];
				s[j]=temp;
			}
			k=i+1;
			if(s[i]=='\0')
				break;
		}
	}
	printf(" %s\n",s);
	printf("hello...i have made some changes in the file.....\n");
}
/*I have modified it*/
















