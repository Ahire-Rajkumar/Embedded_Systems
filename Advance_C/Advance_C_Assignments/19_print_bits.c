/*
Name:Rajkumar Tulshidas Ahire
Date:11/03/2024
Description:WAP to print 'n' bits from LSB of a number
Sample i/p and o/p:Test Case 1:
                   Enter the number: 10
                   Enter number of bits: 12
                   Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 

                   Test Case 2:
                   Enter the number: 15
                   Enter number of bits: 4
                   Binary form of 15: 1 1 1 1
*/
#include <stdio.h>

// function name and parameters
int print_bits(int, int);

int main()
 {
    // caller function
    // varible declaration
    int num, n;
    
    // read num,n from user
    printf("Enter the number:");
    scanf("%d",&num);
    
    printf("Enter number of bits:");
    scanf("%d",&n);   
 
    // display the binary form
    printf("Binary form of %d: \n", num);
    
    //function call
    print_bits(num, n);
 }
 int print_bits(int num, int n)
 {
    // called function
    // using for loop to get total number bits size divided into i/2 store i value 
   for(int i = 1 << n - 1 ; i > 0; i = i/2)
   {
    //  whether to check bit set or not
    if(num & i)
    printf(" 1");   
    else
    printf(" 0");
   
   }

 }

