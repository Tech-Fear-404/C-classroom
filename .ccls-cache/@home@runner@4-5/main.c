#include <stdio.h>
//wap to create calcul
int main(void) {
 int a,b;
  char ch;
  printf("Press + for Addition\n");
  printf("Press - for Subtraction\n");
  printf("Press * for Multiplication\n");
  printf("Press / for Division\n");
  printf("Enter your Choice: ");
  scanf("%c",&ch);
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  switch(ch){
    case '+':printf("Result of %d + %d = %d\n",a,b,a+b);break;
    case '-':printf("Result of %d - %d = %d\n",a,b,a-b);break;
    case '*':printf("Result of %d * %d = %d\n",a,b,a*b);break;
    case '/':printf("Result of %d / %d = %d\n",a,b,a/b);break;
    default:printf("Invalid Input\n");
  }
  return 0;
}