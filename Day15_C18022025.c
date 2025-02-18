/*C PROGRAMMING SELF ASSESSMENT 7
20. Write a  program to print total number of single digit prime numbers
Function Name : total_single_prime
Answer:
4

#include <stdio.h>
void totalSingle_prime(int count);//Function declaration
int main() {
    int x;
    x = 0;
    totalSingle_prime(x);        //Function call

    return 0;
}

void totalSingle_prime(int count ) //Function defination
{
     count = 0;
    
    // Check each single-digit number to see if it is prime
    for (int num = 2; num < 10; num++) {
        int is_prime = 1; // Assume number is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Not prime
                break;
            }
        }
        if (is_prime) {
            count++;
        }
    }
    printf("%d",count);
}
*/
/*21. Write a program to get a number from user
print the total number digits which are odd 
in the number .
Funtion Name: disp_total_odd_digits
Answer:
Input:12345678    Output:4
Input:987531      Output:5

#include <stdio.h>
void disp_total_odd_digits(int x);//Function Declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_total_odd_digits(x);//Function call
    return 0;
}
void disp_total_odd_digits(int x)//function call
{
    int count = 0;
    int i = x;

    while (i > 0)
    {
        if (i % 2 != 0)
        {
            count++;
        }
        i /= 10;
    }

    printf("Total number of odd digits in %d is %d\n", x, count);
 
}
*/
/*22. Write a program to get a number from user
print the total number of two-digit odd numbers
in the number.
function_name:disp_total_2ddigit_odd
Answer:
Input: 12345678   Output:3 
Input:987531      Output:4 

#include <stdio.h>
void disp_total_2digit_odd(int x);//Function daclaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_total_2digit_odd(x);
    return 0;
}
void disp_total_2digit_odd(int x)
//Function defination
{
    int count = 0;
    int prev_digit = -1;
    int current_digit;
    int temp = x;

    while (temp > 0)
    {
        current_digit = temp % 10;
        if (prev_digit != -1)
        {
            int two_digit_num = current_digit * 10 + prev_digit;
            if (two_digit_num >= 10 && two_digit_num <= 99 && two_digit_num % 2 != 0)
            {
                count++;
            }
        }
        prev_digit = current_digit;
        temp /= 10;
    }

    printf("Total number of two-digit odd numbers in %d is %d\n", x, count);
 
}*/
/*23. Write a program to get a number from user
print the total number of single-digit persect square numbers
in the number.
function  Name: disp_single_digit_square
Answer: 
Input:123456789    output:3 
Input:987531       output:2 

#include<stdio.h>
void disp_single_digit_square(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    disp_single_digit_square(x);//function call
    return 0;
}
void disp_single_digit_square(int x)
//Funtion Defination
{
    int count = 0;
    int i = x;
    while (i > 0)
    {
        int digit = i % 10;
        if (digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
        i /= 10;
    }
    printf("Total number of single digit perfect square numbers in %d is %d\n", x, count);
}*/
/*24.  Write a program to get a number from the user and print
the total number of two-digit perfect square numbers in the number.
Function Name: disp_two_digit_square
Answer:
Input:163496481  Output:4
Input:364925     Output:4

#include <stdio.h>
void disp_two_digit_square(int x);//Function declaration

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_two_digit_square(x);//Function call
   return 0;
}
void disp_two_digit_square(int x)
{
    int count = 0;
    int i = x;
    while (i > 10)
    {
        int digit = i % 100;
        if (digit == 16 || digit ==25 || digit == 36 || digit == 49 || digit == 64 || digit == 81)
        {
            count++;
        }
        i /= 10;
    }
    printf("Total number of two digit perfect square numbers in %d is %d\n", x, count);
 
}
*/
/*25. write a program to get a number from user
print the total number of single digit prime numbers
in the number.
Function Name: disp_single_digit_prime
Answer: 
Input:163496481     output:1 
Input:364925        Output:3 
#include <stdio.h>
void  disp_single_digit_prime(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_single_digit_prime(x);//Function call
    return 0;
}
void  disp_single_digit_prime(int x)//Function defination
{
    int count = 0;
    int i = x;
    while (i > 0)
    {
        int digit = i % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
        i /= 10;
    }
    printf("Total number of single digit prime numbers in %d is %d\n", x, count);
 
}*/
/*26. Write a program to print biggest 4-digit number
which is  divisible by 7 and 9.
Funtion name: disp_biggest_4digit_div7_9
Answer:
9954

#include <stdio.h>
void disp_biggest_4digit_div7_9(int x);//Function declaration
int main()
{
    int x= 9999;
    disp_biggest_4digit_div7_9(x);//Function call
    return 0;
}
void disp_biggest_4digit_div7_9(int x)
//Function defination
{
while(x> 0)
{
    if (x% 7 == 0 && x% 9 == 0)
    {
        printf("%d\n", x);
        break;
    }
    x--;
}
}*/
/*27.  Write a program to print the total count of numbers
less than 100000 whose sum of digits is 14.
Function name: disp_count_sum14

Answer:
2710

#include <stdio.h>
void disp_count_sum14(int count);//Function Declaration
int main()
{
    int count = 0;
    disp_count_sum14(count);
    return 0;
}
void disp_count_sum14(int count) //Function Defination
{
    int i = 0;
    while(i < 100000)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 14)
        {
            count++;
        }
        i++;
    }
    printf("Total count of numbers less than 100000 whose sum of digits is 14: %d\n", count);
}*/
/*28 Write a program to get two numbers from user and
print the LCM of those numbers.
Function Name: disp_LCM2
Answer:
Input: 4 6  Output: 12
Input: 5 7  Output: 35

#include <stdio.h>
void disp_LCM2(int num1,int num2);//Function Declaration
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    disp_LCM2(num1,num2);//Function call
    return 0;
}
void disp_LCM2(int num1,int num2)//Function Defination
{
    int max;
    max = (num1 > num2) ? num1 : num2;
    while(1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        max++;
    }
}*/
/*29. Write a program to get three  numbers from the user and print
the LCM of those numbers.
Function name: disp_LCM3
Answer:
Input: 4 6 8  Output: 24
Input: 5 7 9  Output: 315

#include <stdio.h>
void disp_LCM3(int num1 ,int num2 ,int num3);//Function Declaration

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    disp_LCM3(num1,num2,num3);            //Function call
    return 0;
}
void disp_LCM3(int num1 ,int num2 ,int num3)
{
    int max;
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    while(1)
    {
        if (max % num1 == 0 && max % num2 == 0 && max % num3 == 0)
        {
            printf("LCM of %d, %d and %d is %d\n", num1, num2, num3, max);
            break;
        }
        max++;
    }
}*/
/*30. Write a program to get two numbers from the user and print
the HCF of those numbers.
function name : disp_count_HCF2
Answer:
Input: 4 6  Output: 2
Input: 5 7  Output: 1
*/
#include <stdio.h>
void disp_count_HCF2(int num1, int num2);   //Function Declaration
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    disp_count_HCF2( num1,  num2);//Function call
    return 0;
}
void disp_count_HCF2(int num1, int num2)   //Function Defination
{
    int min;
    min = (num1 < num2) ? num1 : num2;
    int i = min; 
    while(i >= 1)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("HCF of %d and %d is %d\n", num1, num2, i);
            break;
        }
        i--;
    }
}