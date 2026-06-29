#include<stdio.h>
int main()
{
  int n,i,flag=0;
scanf("%d",&n);
if(n<=0)
  flag=0;
for(i=2;i<=n;i++)
{
  if(n%i==0){
     flag=1;
     break;
  }
}
if(flag)
  printf("prime");
else
  printf("not prime");
return 0;
}
