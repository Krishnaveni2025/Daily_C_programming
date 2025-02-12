/* ********* C PROGRAMMING********
SELF ASSESSMENT - 5  Remaining problems
11. Write a program to get a number from the user
and print the total number of digits in it.
Answer:
Input:123456   Output:6
Input:76895439 Output:8
Input:675      Output:3

#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for(int i = x; i > 0; i /= 10)
    {
        count++;
    }
    printf("Total number of digits in %d is %d\n", x, count);
}*/
/*12. Write a program to get a number from the user.
to print the sum of all digits.
Answer:
Input:123456   Output:21
Input:76895439 Output:51
Input:675      Output:18
#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d", &x);
    int sum = 0;
    for(int i = x; i > 0; i /= 10)
    {
        sum += i % 10;
    }
    printf("Sum of all digits in %d is %d\n", x, sum);
}*/
/*13. Write a program to get a number from the user and
print the reverse of that number.
Answer:
Input:123456   Output:654321
Input:76895439 Output:93459867
Input:675      Output:576
#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d", &x);
    int reverse = 0;
    for(int i = x; i > 0; i /= 10)
    {
        reverse = reverse * 10 + i % 10;
    }
    printf("Reverse of %d is %d\n", x, reverse);
}*/
/*14. write a aprogram to get a number from the user
and interchange first and last digit digits 
and print the result.
Answer:
Input:123456   Output:623451
Input:76895439 Output:96895437
Input:675      Output:576

#include <stdio.h>

int main() {
    int x, first_digit, last_digit, digits = 0, divisor = 1;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);

    int temp = x;

    // Find the last digit
    last_digit = temp % 10;

    // Find the number of digits and the first digit using a for loop
    for (; temp >= 10; digits++, divisor *= 10) {
        temp /= 10;
    }
    first_digit = temp;

    // Remove the first and last digits from the number
    int middle_part = (x % divisor) / 10;

    // Form the new number by interchanging the first and last digits
    int result = last_digit * divisor + middle_part * 10 + first_digit;

    // Print the result
    printf("Result after interchanging first and last digits: %d\n", result);

    return 0;
}
*/
/*15. Write a program ro get a number from the user and
if the last digit of the number is even
then print the same number.
If the last digit of the number is odd,
then subtract 1 from the last digit.
Answer:
Input:654324   Output:654324
input:76895439 Output:66895439
Input:675      Output:575
(NOTE: Last  digit - MSD)

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // e.g., 76895439

    int last_digit, original, multiplier = 1, new_number = 0;
    original = x;

    // Find the most significant digit using a for loop
    for (; x >= 10; multiplier *= 10) {
        x /= 10;
    }
    //last_digit = x;
    printf("Last digit: %d\n", last_digit);
    // Check if the most significant digit is even using an if statement
    if (last_digit % 2 == 1) {
        printf("%d\n", original);
    } else {
        // Subtract 1 from the most significant digit
        last_digit -= 1;
        new_number = last_digit * multiplier + (original % multiplier);
        printf("%d\n", new_number);
    }

    return 0;
}
*/
/*16. Write a program to get a number from the user and print whether the given number is prime or not.
Answer:
Input:31 Output:Prime
Input:27 Output:Not Prime.

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 1) {
        if (x == 2) {
            printf("Prime");
        } else {
            int is_prime = 1;  // Assume the number is prime
            for (int i = 2; i < x; i++) {
                if (x % i == 0) {
                    is_prime = 0;  // Found a divisor, not prime
                    break;
                }
            }
            if (is_prime) {
                printf("Prime");
            } else {
                printf("Not Prime");
            }
        }
    } else {
        printf("Not Prime");
    }

    return 0;
}*/
/*17. Write a program to get a number from the user and print 
whether the number is prime and
the sum of digits of the number is equal to 14.
Answer:
Input:59 Output:Prime and sum of digits is 14
Input:77 Output:Not Prime and sum of digits is 14
Input:23 Output:Prime and sum of digits is not 14
Input:27 Output:Not Prime and sum of digits is not 14

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 1)
    {
        if (x == 2)
        {
            printf("Prime");
        }
        else
        {
            int is_prime = 1; // Assume the number is prime
            for (int i = 2; i < x; i++)
            {
                if (x % i == 0)
                {
                    is_prime = 0; // Found a divisor, not prime
                    break;
                }
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
    for (int i = x; i > 0; i /= 10)
    {
        sum += i % 10;
    }
    if (sum == 14)
    {
        printf(" and sum of digits is 14\n");
    }
    else
    {
        printf(" and sum of digits is not 14\n");
    }

    return 0;
}
*/
/*18. Write a program to get a number from the user and print
Whether the number's first two digits(10s and 100s place) are prime or not.
Answer:
Input:359  Output:Prime
Input:3577 Output:Not Prime

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int last_two_digits = x % 100; // Get the last two digits (ones and tens place)
    int is_prime = 1; // Assume the number is prime

    if (last_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        for (int i = 2; i <= last_two_digits / 2; i++) {
            if (last_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
*/
/*19. Write a program to get a 4-digit number from the user and print
whether that number's middle two digits are prime or not.
(hundreds and tens place digits)
Answer:
Input:6359  Output: Not Prime
Input3537   Output:  Prime

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int middle_two_digits = (x / 10) % 100; // Get the middle two digits (hundreds and tens place)
    int is_prime = 1; // Assume the number is prime

    if (middle_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        for (int i = 2; i <= middle_two_digits / 2; i++) {
            if (middle_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
*/
/*20. Write a program to pritn the total number of single digit
prime numbers
Answer:
4

#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 2; i < 10; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
*/