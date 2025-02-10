/*=====C Programming Assessment 4=======*/
/*1. write a loop program to print 1 to 5 on
one by one.
Answer: 
1
2
3
4
5
#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=1;
    loop: if(x<6)
    {
        //your code here
        printf("\n%d",x);
        x++;
        goto loop;
    }
    return 0;
}*/
/*2. Write a loop program to print numbers from 5 to 1
on one by one.
Answer:
5
4
3
2
1
#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=6;
    loop:if(x>1)
    {
        //your code here
        x--;
        printf("\n%d",x);
        goto loop;
    }
    return 0;
}*/
/*3. Write a program to print sum from 1 to 5
Answer: 15
#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=1;
    int sum =0;
    loop:if(x<=5){
        sum=sum+x;
        x++;
        goto  loop;
    }
    printf("%d",sum);
    return 0;
}*/
/*4.Write a loop program to print sum from 6 to 1.
Answer: 21

#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=6;
    int sum =0;
    loop:if(x>=1){
        //your code here
        sum = sum +x;
        x--;
        goto loop;
    }
    printf("%d",sum);
}*/
/*5. Write a loop program to print odd numbers between 1and 9.
Answer: 
1
3
5
7
9

#include<stdio.h>
int main()
{
    int x;
    //Your code Here
    x=0;
    loop:
    if(x<10)
    {
        if((x%2)==1){
            printf("\n%d",x);
            x++;
            goto loop;
        }
        else{
            x++;
            goto loop;
        }
    }
    return 0;
}*/
/*6. Write a loop program to print the two digit
odd numbers, below 20.
Answer:
11
13
14
17
19
#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=10;
    loop:
    if(x<20)
    {
        if((x%2)==1)
        {
            printf("\n%d",x);
            x++;
            goto loop;
        }
        else
        {
            x++;
            goto loop;
        }
    }
   return 0;
}*/
/*7. Write a loop program to print the two digit
odd numbers, whose sum of digits are 7.
Answer:
25
43
61

#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=10;
    loop:
    if(x<100)
    {
        if((x%2)==1)
        {
            if(((x%10)+(x/10))==7)
            {
                printf("\n%d",x);
                x++;
                goto loop;
            }
            else
            {
                x++;
                goto loop;
            }
        }
        else
        {
            x++;
            goto loop;
        }
    }
   return 0;
}*/
/*8. Write a loop program to print two digit 
even numbers , who's sum of digits are 6.
Answer:
24
42
60

#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=10;
    loop:
            if(x<100)
            {
                if((x%2)==0)
                {
                    if(((x/10)+(x%10))==6)
                    {
                        printf("\n%d",x);
                        x++;
                        goto loop;
                    }
                    else
                    {
                        x++;
                        goto loop;
                    }
                }
                else
                {
                    x++;
                    goto loop;
                }
            }
            return 0;
}*/
/*8 and 9 are same*/
/*10. Write a loop program to print 
the sum of two digit  odd numbers
whose ten's digit is 7.
Answer:
375

#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=10;
    int sum =0;
    loop:
          if(x<100)
            {
                if((x%2)==1)
                {
                    if((x/10)==7)
                    {
                       sum = sum + x;
                        x++;
                        goto loop;
                    }
                    else
                    {
                        x++;
                        goto loop;
                    }
                }
                else
                {
                    x++;
                    goto loop;
                }
            }
            printf("%d",sum);
}*/
/*11. Write a program to get a number from the user
and print the total number of digits in that number.
Answer:
Input:123456    Output:6
Input:76895439  Output:8
Input:675       Output:3
#include<stdio.h>
int main()
{
    int x;
    //Your code here
    int count =0;
    printf("Enter a number:");
    scanf("%d",&x);
    loop:
    if(x>0)
    {
        x=x/10;
        count++;
        goto loop;
    }
    printf("%d",count);
    return 0;
}*/
/*12. Write a program to get a number from the user
and print the sum of all digits.
Answer:
Input:123456    Output:21
Input:76895439  Output:51
Input:675       Output:18
#include<stdio.h>
int main()
{
    int x;
    //Your code here
    int sum =0;
    printf("Enter a number:");
    scanf("%d",&x);
    loop:
    if(x>0)
    {
        sum = sum + (x%10);
        x=x/10;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}*/
/*13. Write a program to get a number from the user
and reverse that number.
Input:123456    Output:654321
Input:76895439  Output:93549867
Input:675       Output:576
#include<stdio.h>
int main()
{
    int x;
    //Your code here
    int rev =0;
    printf("Enter a number:");
    scanf("%d",&x);
    loop:
    if(x>0)
    {
        rev = rev*10 + (x%10);
        x=x/10;
        goto loop;
    }
    printf("%d",rev);
    return 0;
}*/
/*14. Write a program to get a number from the user
and interchange the first and last digit of that number
and print the result.
Answer:
Input:123456    Output:623451
Input:76895439  Output:96895437
Input:675       Output:576
#include <stdio.h>

int main() {
    int x, first_digit, last_digit, digits = 0, divisor = 1;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);

    int temp = x;

    // Find the last digit
    last_digit = temp % 10;

    // Find the number of digits and the first digit
    while (temp >= 10) {
        temp /= 10;
        digits++;
        divisor *= 10;
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

