/*C PROGRAMMING SELF ASSESSMENT 7
12. Write a program to get a number from user and print the sum of all digits.
Function_name: disp_sum_all_digits
Answer:
Input:123456    Output:21
Input:76895439  Output:51
Input:675       Output:18

#include <stdio.h>
void disp_sum_all_digits(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_sum_all_digits(x);//Function call
    return 0;
}
void disp_sum_all_digits(int x)//Function definition
{
    int sum=0;
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    printf("%d\n",sum);
}
*/
/*13. Write a program to get a number from user and print the reverse of the given number.
Function_name: disp_reverse_number
Answer:
Input:123456    Output:654321
Input:76895439  Output:93459867
Input:675       Output:576

#include <stdio.h>
void disp_reverse_number(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_reverse_number(x);//Function call
    return 0;
}
void disp_reverse_number(int x)//Function definition
{
    int rev=0;
    while(x!=0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    printf("%d\n",rev);
}
*/
/*14. Write a program to get a number from user and interchange the first and last digits of the number.
and print the result.
Function_name: disp_interchange_first_last_digit
Answer:
Input:123456    Output:623451
Input:76895439  Output:96895437
Input:675       Output:576
*/
/*#include <stdio.h>
void disp_interchange_first_last_digit(int x) ;//Function declaration
int main() {
    int x;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);

    // Call the function
    disp_interchange_first_last_digit(x);//Function call

    return 0;
}
void disp_interchange_first_last_digit(int x) //Function definition
{
    int first_digit, last_digit, digits = 0, divisor = 1;
    int temp = x;

    // Find the last digit
    last_digit = temp % 10;

    // Find the number of digits and the first digit using a while loop
    while(temp >= 10) {
        digits++;
        divisor *= 10;
        temp /= 10;
    }
    first_digit = temp;

    // Remove the first and last digits from the number
    int middle_part = (x % divisor) / 10;

    // Form the new number by interchanging the first and last digits
    int result = last_digit * divisor + middle_part * 10 + first_digit;

    // Print the result
    printf("Result after interchanging first and last digits: %d\n", result);
}*/
/*15. Write a program to get a number from user
and if the last digit of the number is even 
print the same number.If the last digit of the 
number is odd, then subtract 1 from the last digit
and print the number.
(Last digit - MSD)
Function_name: check_last_digit_odd
Answer:
Input:654324   Output:654324
Input:76895439 Output:66895439
Input:675      Output:675
*/
/*#include <stdio.h>
void check_last_digit_odd(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // e.g., 76895439
    check_last_digit_odd(x);//Function call
    return 0;
}
void check_last_digit_odd(int x)//Function definition
{
    int last_digit, original, multiplier = 1, new_number = 0;
    original = x;

    // Find the most significant digit using a while loop
    while (x >= 10) {
        x /= 10;
        multiplier *= 10;
    }
    last_digit = x;
    //printf("Last digit: %d\n", last_digit);

    // Check if the most significant digit is even using an if statement
    if ((last_digit % 2) == 0) {
        printf("%d\n", original);
    } else {
        // Subtract 1 from the most significant digit
        last_digit -= 1;
        new_number = last_digit * multiplier + (original % multiplier);
        printf("%d\n", new_number);
    }
}
*/
/*16. Write a program to get a number from the user and print whether the 
number is prime or not.
Function_name: check_prime
Answer:
Input:27  Output:Not Prime
Input:31  Output:Prime

#include <stdio.h>
void check_prime(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_prime(x);//Function call
    return 0;
}
void check_prime(int x)//Function definition
{
    int is_prime = 1; // Assume the number is prime
    int i = 2;

    if (x > 1)
    {
        if (x == 2)
        {
            printf("Prime\n");
        }
        else
        {
            while (i < x)
            {
                if (x % i == 0)
                {
                    is_prime = 0; // Found a divisor, not prime
                    break;
                }
                i++;
            }

            if (is_prime)
            {
                printf("Prime\n");
            }
            else
            {
                printf("Not Prime\n");
            }
        }
    }
    else
    {
        printf("Not Prime\n");
    }
}*/
/*17. Write a program to get a number from the user and print
whether the number is prime and the sum of the digits is 14.
Function_name: check_prime_and_sum14
Answer:
Input:27 Output:Not Prime and sum of digits is not 14
Input:41 Output:Prime and sum of digits is 5
Input:59 Output:Prime and sum of digits is 14
Input:77 Output:Not Prime and sum of digits is 14

#include <stdio.h>
void check_prime_and_sum14(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_prime_and_sum14(x);//Function call
    return 0;
}
void check_prime_and_sum14(int x)//Function definition
{
    int is_prime = 1; // Assume the number is prime
    int i = 2;

    if (x > 1)
    {
        if (x == 2)
        {
            printf("Prime");
        }
        else
        {
            while (i < x)
            {
                if (x % i == 0)
                {
                    is_prime = 0; // Found a divisor, not prime
                    break;
                }
                i++;
            }

            if (is_prime)
            {
                printf("Prime");
            }
            else
            {
                printf("Not Prime");
            }
        }
    }
    else
    {
        printf("Not Prime");
    }

    int sum = 0;
    int temp = x;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum == 14)
    {
        printf(" and sum of digits is 14\n");
    }
    else
    {
        printf(" and sum of digits is not 14\n");
    }
}*/
/*18. Write a program to get a number from the user and print
whwether the number first two digits(10s and 100s place) are prime or not.
Function_name: check_first_2digits_prime
Answer:
Input:359 Output:Prime
Input:6359 Output:Not Prime
Input:3577 Output:not Prime

#include <stdio.h>
void check_first_2digits_prime(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_first_2digits_prime(x);//Function call
    return 0;
}
void check_first_2digits_prime(int x)//Function definition
{
    int first_two_digits = x % 100; //gets first two digits(10s and 100s)
    //printf("%d\n",first_two_digits);
    int is_prime = 1; // Assume the number is prime

    if (first_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        int i = 2;
        while (i <= first_two_digits / 2) {
            if (first_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
            i++;
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
}*/
/*19.  Write a program to get a 4-digit number from the user and print
whether the middle two digits(10s and 100s place) are prime or not.
Function_name : middle_2digits_prime
Answer:
Input:6359  Output:Not Prime
Input:3537  Output:Prime
*/
#include <stdio.h>

void middle_2digits(int x);//Function declaration

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    middle_2digits(x);//Function call
    return 0;
}

void middle_2digits(int x) {//Function definition
    int first_digit, last_digit, divisor = 1, digits = 0;
    int temp = x;

    // Find the number of digits
    while (temp >= 10) {
        digits++;
        divisor *= 10;
        temp /= 10;
    }

    // Find the first and last digits
    first_digit = x / divisor;
    last_digit = x % 10;

    // Remove the first and last digits
    int middle_part = (x % divisor) / 10;

    // Get the middle two digits
    int middle_two_digits = middle_part % 100;

    int is_prime = 1; // Assume the number is prime

    if (middle_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        int i = 2;
        while (i <= middle_two_digits / 2) {
            if (middle_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
            i++;
        }
    }

    if (is_prime) {
        printf("Middle two digits are Prime\n");
    } else {
        printf("Middle two digits are Not Prime\n");
    }
}
