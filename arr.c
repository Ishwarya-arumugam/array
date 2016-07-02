#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,k,a[50];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
for(k=0;k<n;k++)
{
a[k]=a[i]+a[j];
printf("%d %d %d",i,j,k);
}
getch();
}
