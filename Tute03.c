/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  #include <stdio.h>
int main() {
  
  int n,sum=0,count;

  printf("Enter n :\n");
  scanf("%d",&n);

  for( count=0;count<n;count++ ){
    sum = sum+(count+1);
    printf("%d ",count+1);
  }

  printf("=%d",sum);
  
  return 0;
}
  
  return 0;
}

