#include <stdio.h>
int main() {
  int * pnum;
  int num1 = 200;
  int num2 = 300;
  pnum = &num1;
  (*pnum)+=40;

  pnum = &num2;
  (*pnum)-=50;
  printf("num1:%d\nnum2:%d",num1,num2);
}
