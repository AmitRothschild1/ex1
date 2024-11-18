/******************
Name:Amit Rothschild
ID:322317637
Assignment:EX1
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
  printf("Please enter a number:\n");
  scanf("%d",&numTask1);
  printf("Please enter a position:\n");
  scanf("%d",&posTask1);
  int bitTask1 = (numTask1 >> posTask1)&1;
  printf("The bit in position %d of number %d is: %d\n",posTask1,numTask1,bitTask1);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int numTask2;
  int posTask2;
  printf("Please enter a number:\n");
  scanf("%d",&numTask2);
  printf("Please enter a position:\n");
  scanf("%d",&posTask2);
  int numberWith1Task2 = numTask2 | (1 << posTask2);
  int numberWith0Task2 = numTask2 & ~(1 << posTask2);
  printf("Number with bit %d set to 1: %d",posTask2,numberWith1Task2);
  printf("\nNumber with bit %d set to 0: %d\n",posTask2,numberWith0Task2);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int numTask3;
  int posTask3;
  printf("Please enter a number:\n");
  scanf("%d", &numTask3);
  printf("Please enter a position:\n");
  scanf("%d", &posTask3);
  int bitTask3 = (numTask3 >> posTask3)&1;
  int newNumBitoffTask3 = (numTask3 & ~(1<<posTask3)) * bitTask3;
  int newNumBitOnTask3 = (numTask3 | (1<<posTask3)) * ((~bitTask3)&1);
  printf("Number with bit %d toggled: %d\n",posTask3,newNumBitOnTask3+newNumBitoffTask3);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int numTask4;
  printf("Please enter a number:\n");
  scanf("%d", &numTask4);
  numTask4 = (~numTask4)&1;
  printf("%d\n", numTask4);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int octalNum1;
  int octalNum2;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &octalNum1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &octalNum2);
  int hexSum = octalNum1 + octalNum2;
  printf("The sum in hexadecimal: %X\n", hexSum);
  int thirdBitNum = (hexSum >> 3)&1;
  int fifthBitNum = (hexSum >> 5)&1;
  int sevenBitNum = (hexSum >> 7)&1;
  int elevenBitNum = (hexSum >> 11)&1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",thirdBitNum,fifthBitNum,sevenBitNum,elevenBitNum);

  printf("Bye!\n");
  
  return 0;
}
