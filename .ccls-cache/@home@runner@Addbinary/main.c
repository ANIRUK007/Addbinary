#include <stdio.h>
#include <math.h>

/* 3-11
   5-101
  -------
   8-1000 */

int intonormal(int num){
  int rem=0,act=0,i=0;
  while (num > 0) {
      rem = num % 10;
      act = act + (rem * pow(2, i));
      num /= 10;
      i++;
  }
  return act;
}  

void decToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
  
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main(void) {
  int a,b,num1,num2;
  printf("enter the binary value of a:");
  scanf("%d",&a);
  num1=intonormal(a);
  printf("enter the binary value of b:");
  scanf("%d",&b);
  num2=intonormal(b);
  num1+=num2;
  printf("%d",num1);
  decToBinary(num1);
}