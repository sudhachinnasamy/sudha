#include<stdio.h>
void main()
{
int a[5],sum1=0,sum2=0,average1,average2,i,n;
scanf("%d",&n); 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n/2;i++)
{
sum1=sum1+a[i];
}average1=sum1/2;
for(i=n/2;i<n;i++)
{
sum2=sum2+a[i];
}average2=sum2/3;
if(average1==average2)
{
 printf("[");
for(i=0;i<n/2;i++)
{
   printf("%d,",a[i]);
}printf("]");
printf("[");
for(i=n/2;i<n;i++)
{
    printf("%d,",a[i]);
}printf("]");
}
else
{
printf("not possible");
}
}

