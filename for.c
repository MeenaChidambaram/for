#include<stdio.h>
int main()
{
int a,n,sum=0;
scanf ("%d", &n);
for (a = 1; a <= n; a++)
{
sum +=a;
}
printf("the sum of natural numbers is %d\n",sum);
getch();
return 0;
}

