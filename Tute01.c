/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {float sm1,sm2,average,sum;
	
	printf("Enter Your subject marks: \n");
	scanf("%f",&sm1);
	scanf("%f",&sm2);
	
	sum = sm1 + sm2;
	average = sum/2;
	
	printf("The average of the two marks:%.2f",average);
  
  return 0;
}

