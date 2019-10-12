/*P1426 Ğ¡Óã»áÓĞÎ£ÏÕÂğ*/
#include<cstdio>
#include<stdlib.h>

double speed=7,way=0,s,x;
int i,k,l,m; 

int main()
{
	scanf("%lf %lf",&s,&x);
	k=x+s+1;
	l=s-x;
	m=s+x;
	for(;;)
	{
		if(way>m)
			{
				printf("n");
				return 0;
			}
		if(way>=l&&way<=m)
		{
			way+=speed;
			if(way>=l&&way<=m)
			{
				printf("y");
				return 0;
			}
			else if(way>m)
			{
				printf("n");
				return 0;
			}
		}
		way+=speed;
		speed*=0.98;
	}
	return 0;
}
