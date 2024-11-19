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
  int numTask1; //An integer variable for storing input of a number
  int posTask1; //An integer variable for storing input of a bit position
  printf("Please enter a number:\n"); //Ask user to enter a number
  scanf("%d",&numTask1); //Number input
  printf("Please enter a position:\n");//Ask user to enter a bit position
  scanf("%d",&posTask1);//Bit position input
  int bitTask1 = (numTask1 >> posTask1)&1;//Finds the bit value of the chosen number according to the chosen bit position
  printf("The bit in position %d of number %d is: %d\n",posTask1,numTask1,bitTask1);//Prints the input number, input position and the requested bit value

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int numTask2; //An integer variable for storing input of a number
  int posTask2; //An integer variable for storing input of a bit position
  printf("Please enter a number:\n"); //Ask user to enter a number
  scanf("%d",&numTask2); //Number input
  printf("Please enter a position:\n"); //Ask user to enter a bit position
  scanf("%d",&posTask2);  //Bit position input
  int numberWith1Task2 = numTask2 | (1 << posTask2);    //Set the requested bit "on" in case it is "off"
  int numberWith0Task2 = numTask2 & ~(1 << posTask2);   //Set the requested bit "off" in case it is "on"
  printf("Number with bit %d set to 1: %d",posTask2,numberWith1Task2); //Prints the requested number with bit set to 1 according to the requested bit position
  printf("\nNumber with bit %d set to 0: %d\n",posTask2,numberWith0Task2); //Prints the requested number with bit set to 0 according to the requested bit position

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int numTask3; //An integer variable for storing input of a number
  int posTask3; //An integer variable for storing input of a bit position
  printf("Please enter a number:\n"); //Ask user to enter a number
  scanf("%d", &numTask3);//Number input
  printf("Please enter a position:\n");//Ask user to enter a bit position
  scanf("%d", &posTask3);//Bit position input
  int bitTask3 = (numTask3 >> posTask3)&1; //Finds the bit value of the chosen number according to the chosen bit position
  int newNumBitoffTask3 = (numTask3 & ~(1<<posTask3)) * bitTask3; //Set the requested bit "off" in case it is "on" + Multiplies it by 0 if the original bit is "off" and by 1 if the original bit is "on"
  int newNumBitOnTask3 = (numTask3 | (1<<posTask3)) * ((~bitTask3)&1); //Set the requested bit "on" in case it is "off" + Multiplies it by 0 if the original bit is "on" and by 1 if the original bit is "off"
  printf("Number with bit %d toggled: %d\n",posTask3,newNumBitOnTask3+newNumBitoffTask3); //Prints the requested bit and sum of two numbers: 0 + desirable number
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int numTask4; //An integer variable for storing input of a number
  printf("Please enter a number:\n"); //Ask user to enter a number
  scanf("%d", &numTask4);//Number input
  numTask4 = (~numTask4)&1; //In case the number is even (lsb = 0) the result is 1, in case it is odd (lsb = 1) the result is 0
  printf("%d\n", numTask4); //Prints "1" if even and "0" if odd
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int octalNum1; //An octal variable for storing input of a number
  int octalNum2; //An octal variable for storing input of a number
  printf("Please enter the first number (octal):\n"); //Ask user to enter a number
  scanf("%o", &octalNum1);//Number input
  printf("Please enter the second number (octal):\n"); //Ask user to enter a number
  scanf("%o", &octalNum2);//Number input
  int hexSum = octalNum1 + octalNum2; //Sum of two requested octal numbers
  printf("The sum in hexadecimal: %X\n", hexSum); //Prints the sum in hexadecimal
  int thirdBitNum = (hexSum >> 3)&1; //Finds the bit value in position 3 of the sum
  int fifthBitNum = (hexSum >> 5)&1; //Finds the bit value in position 5 of the sum
  int sevenBitNum = (hexSum >> 7)&1; //Finds the bit value in position 7 of the sum
  int elevenBitNum = (hexSum >> 11)&1; //Finds the bit value in position 11 of the sum
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",thirdBitNum,fifthBitNum,sevenBitNum,elevenBitNum); //Prints the four bits in ascending order

  printf("Bye!\n");
  
  return 0;
}
