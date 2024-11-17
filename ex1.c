/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int numTask1;
  int posTask1;
  printf("please enter a number:");
  scanf("%d",&numTask1);
  printf("please enter the position:");
  scanf("%d",&posTask1);
  int bitTask1 = (numTask1 >> posTask1)&1;
  printf("The bit position %d of number %d is: %d",posTask1,numTask1,bitTask1);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int numTask2;
  int posTask2;
  printf("please enter a number:");
  scanf("%d",&numTask2);
  printf("please enter the position:");
  scanf("%d",&posTask2);
  int numberWith1Task2 = numTask2 | (1 << posTask2);
  int numberWith0Task2 = numTask2 & ~(1 << posTask2);
  printf("Number with bit %d set to 1: %d",posTask2,numberWith1Task2);
  printf("\nNumber with bit %d set to 0: %d",posTask2,numberWith0Task2);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int numTask3;
  int posTask3;
  printf("Please enter a number:\n");
  scanf("%d", &numTask3);
  printf("Please enter the position:\n");
  scanf("%d", &posTask3);
  int bitTask3 = (numTask3 >> posTask3)&1;
  int newNumBitoffTask3 = (numTask3 & ~(1<<posTask3)) * bitTask3;
  int newNumBitOnTask3 = (numTask3 | (1<<posTask3)) * ((~bitTask3)&1);
  printf("Number with bit %d toggled: %d",posTask3,newNumBitOnTask3+newNumBitoffTask3);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
