/* C PROGRAMMING SELF ASSESSMENT 4
Remaining problems.*/
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
#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // e.g., 76895439

    int last_digit, original, multiplier = 1, new_number = 0;
    original = x;

    // Find the most significant digit
    while (x >= 10) {
        x /= 10;
        multiplier *= 10;
    }
    last_digit = x;

    // Check if the most significant digit is even
    if (last_digit % 2 == 1) {
        printf("%d\n", original);
    } else {
        // Subtract 1 from the most significant digit
        last_digit -= 1;
        new_number = last_digit * multiplier + (original % multiplier);
        printf("%d\n", new_number);
    }

    return 0;
}*/
/*16. Get a number from the user and print whether the given number is prime or not.
Answer:
Input:31 Output:Prime
Input:27 Output:Not Prime.
#include <stdio.h>
int main()
{
    int x;
    // your code here
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
            int i = 2;
        loop:
            if (i < x)
            {
                if (x % i == 0)
                {
                    printf("Not Prime");
                }
                else
                {
                    i++;
                    goto loop;
                }
            }
            if (i == x)
            {
                printf("Prime");
            }
        }
    }
}*/
/*17. is repeated as same as 16.*/
/*ASSESSMENT 5*/
/* 1. WRite a loop program to print 1 to 5 numbers one by one.
Answer:
1
2
3
4
5

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}*/
/*2. WRite a loop program to print 5 to 1 numbers one by one.
Answer:

5
4
3
2
1

#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/
/*3. Write a loop program to print sum from 1 to 5
Answer:
15

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*4. write a loop program to print sum from 6 to 1
Answer:
21

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 6; i >= 1; i--)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*5. Write a loop program to print odd numbers from 1 to 9.
Answer:
1
3
5
7
9
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}*/
/*6. Write a loop program to print two-digit odd numbers, below 20.
Answer:
11
113
15
17
19
#include <stdio.h>
int main()
{
    for (int i = 11; i < 20; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/
/*7. Write a loop program to print the odd two-digit odd numbers,
whose sum of digits are 7.
Answer:
25
43
61

#include <stdio.h>
int main()
{
    for (int i = 11; i < 100; i += 2)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 7)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}*/
/*8. Write a loop program to print the two digit
even numbers , whose sum of digits are 6.
Answer:
24
42
60
#include <stdio.h>
int main()
{
    for (int i = 10; i < 100; i += 2)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 6)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}*/
/*9. Write a loop program to print  the sum of two-digit numbers
whose one's digitis 5.
Answer: 495

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 15; i < 100; i += 10)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*10. Write a loop program to print the sum of digits of 
ODD numbers , whose ten's digit is 7.
Answer:
375
*/
#include <stdio.h>
int main()
{
    int x,sum=0;
    //your code here
    for(x = 10; x<100 ; x++)
    {
       loop: if(x%2 == 1)
        {
            if(x/10 == 7)
            {
               // printf("%d\n", x);
               sum = sum+x;
                x++;
                goto loop;
            }
        }
    }
    printf("%d\n", sum);   
        
} 
