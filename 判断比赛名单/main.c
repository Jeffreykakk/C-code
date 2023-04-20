#include <stdio.h>

int main() 
{
	char i=0,j=0,k=0;
	for(i='x';i<='z';i++)
	{
		if(i)
		for(j='x';j<='z';j++)
		{
			if(j!=i)
			{
				for(k='x';k<='z';k++)
				{
					if(k!=i&&k!=j)
					{
						if(i!='x'&&k!='x'&&k!='z')
						printf("a--%c\nb--%c\nc--%c\n",i,j,k);
					}
				}
			}
		}
	}
	return 0;
}