#include<stdio.h>
int main(){
  int n,i,sum=0;
  printf("enter a number");
  scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=sum+(i*i*i);
}
printf("sum of cubes of first%d natural numbers=%d\n",n,sum);
return 0;
}