/*:::::::::C PROGRAMMING SELF ASSESSMENT 5:::::::::*/
/*21. Write a program to get number from user and 
print total number of digits which are ODD in the number.
Answer:
Input:12345678 Output:4
Input:987531   Output:5

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for(int i = x; i > 0; i /= 10)
    {
        if(i % 2 != 0)
        {
            count++;
        }
    }
    printf("Total number of odd digits in %d is %d\n", x, count);
    return 0;
}*/
/*22. Write a program to get a number from the user and 
print total number of two-digit odd numbers in the number. 
Answer: 
Input:12354678 Output:3 
Input:987531 Output:4 
#include <stdio.h>

int main() {
    long number, temp_number;
    int prev_digit = -1, count = 0;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%ld", &number);

    temp_number = number;

    // Loop through the number using a for statement
    for (; temp_number > 0; temp_number /= 10) {
        int current_digit = temp_number % 10;

        // If there's a previous digit, form the two-digit number
        if (prev_digit != -1) {
            int two_digit_num = current_digit * 10 + prev_digit;

            // Check if it's a two-digit odd number
            if (two_digit_num >= 10 && two_digit_num <= 99 && two_digit_num % 2 != 0) {
                count++;
            }
        }

        // Update the previous digit
        prev_digit = current_digit;
    }

    // Print the total number of two-digit odd numbers
    printf("Total number of two-digit odd numbers: %d\n", count);

    return 0;
}
*/
/*23. Write a program to get a number from the user and
print the total number of single digit perfect square numbers in the number.
Answer:
Input:123456789 Output:3
Input:987531 Output:2

#include <stdio.h>
int main()
{
    int x;
    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = x; i > 0; i /= 10)
    {
        int digit = i % 10;
        if (digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
    }
    printf("Total number of single digit perfect square numbers in %d is %d\n", x, count);
}*/
/*24. WRite a program to get a number from the user and
print the total number of two-digit perfect square numbers in the number.
Answer:
Input:163496481 Output:4
Input:364925    Output:4
#include <stdio.h>

int main()
{
    int x;
    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;

    for (int i = x; i >= 10; i /= 10)  // Ensure that we have at least two digits to consider
    {
        int digit = i % 100;
        if (digit == 16 || digit == 25 || digit == 36 || digit == 49 || digit == 64 || digit == 81)
        {
            count++;
        }
    }
    printf("Total number of two-digit perfect square numbers in %d is %d\n", x, count);
    return 0;
}
*/
/*25. Write a program to to get number from the user
print the total number of single-digit prime numbers in the number.
Answer:
Input:16349681 Output:1
Input:364925   Output:3

#include <stdio.h>
int main()
{
    int x;
    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = x; i > 0; i /= 10)
    {
        int digit = i % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
    }
    printf("Total number of single-digit prime numbers in %d is %d\n", x, count);
    return 0;
}*/
/*26.  Write a program to print biggest 4-digit number 
which is divisible by 7 and 9.
Answer:
9954

#include <stdio.h>
int main()
{
    int num = 9999;
    for(;num > 0;num--)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            printf("%d\n", num);
            break;
        }
    }
    return 0;
}*/
/*27. Write a program to print the total count of numbers
which are less than 100000 and whose sum of digits is 14.
Answer:2710

#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int count = 0;

    // Loop through numbers less than 100000
    for (int i = 0; i < 100000; i++) {
        if (sum_of_digits(i) == 14) {
            count++;
        }
    }

    // Print the total count
    printf("Total count of numbers less than 100000 whose sum of digits is 14: %d\n", count);

    return 0;
}*/
/*Write a program to get two numbers from user and 
print the LCM of those numbers.
Answer:

#include <stdio.h>
int main()
{
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    for(;;)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        max++;
    }
    return 0;
}*/
/*29. write a program to get three numberes from user
and print the LCM of those numbers.

#include <stdio.h>
int main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    for(;;)
    {
        if (max % num1 == 0 && max % num2 == 0 && max % num3 == 0)
        {
            printf("LCM of %d, %d and %d is %d\n", num1, num2, num3, max);
            break;
        }
        max++;
    }
    return 0;
}*/
/* 30. Write a program to get two numbwers from user
and print the HCF of those numbers.
*/
#include <stdio.h>
int main()
{
    int num1, num2, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    min = (num1 < num2) ? num1 : num2;
    for (int i = min; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("HCF of %d and %d is %d\n", num1, num2, i);
            break;
        }
    }
    return 0;
}