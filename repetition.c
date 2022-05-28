#include<stdio.h>
int main(){
  int a, sum;
  a=sum=0;
  
  while(a<=10){
    a+=1;
    if(a%2==1)
      continue;
    sum+=a;
  }
  
  printf("sum=%d",sum);
  return 0;
}
//짝수끼리 더하기
