#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char a[100];
	char b[100];
	char c[100];
	int p=0,r=0,i=0;
	int t=0;
	int x,g,s,n,o;
	//clrscr();
	puts("Main string: ");
	gets(a);
	puts("Sub string: ");
	gets(b);
	printf("position: ");
	scanf("%d",&p);
	r = strlen(a);
	n = strlen(b);
	i=0;
	while(i <= r)
	{
		c[i]=a[i];
		i++;
	}	
	s = n+r;
	o = p+n;
 
 	for(i=p;i<s;i++)
	{
		x = c[i];
		if(t<n)
		{
			a[i] = b[t];
			t=t+1;
		}
		a[o]=x;
		o=o+1;
	}
	printf("%s", a);
	getch();
}
