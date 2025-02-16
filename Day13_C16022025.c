/*C PROGRAMMING SELF ASSESSMENT 7
Use only int variables 
Use only decimals
Use only functions with not return value
Don't use pointers,arrays,strings etc.
1.Write a loop program to print 1 to 5 on one by one.
Function_name : disp_assend
Answer:
1
2
3
4
5
#include <stdio.h>
void disp_assend(int x);//Function declaration
int main()
{
    int x=1;
    disp_assend(x);//Function call
    return 0;
}
void disp_assend(int x)//Function definition
{
    for(x=1;x<=5;x++)
    {
        printf("%d\n",x);
    }
}*/
/*2. Write a loop program to print 5 to 1 on one by one.
Function_name : disp_descend
Answer:
5
4
3
2
1

#include <stdio.h>
void disp_descend(int x);//Function declaration
int main()
{
    int x=5;
    disp_descend(x);//Function call
    return 0;
}
void disp_descend(int x)//Function definition
{
    for(x=5;x>=1;x--)
    {
        printf("%d\n",x);
    }
}
*/
/*3.Write a loop program to print sum of 1 to 5 numbers.
Function_name : sum_assend
Answer:
15

#include <stdio.h>
void disp_sum(int x);//Function declaration
int main()
{
    int x=1;
    disp_sum(x);//Function call
    return 0;
}
void disp_sum(int x)//Function definition
{
    int sum=0;
    for(x=1;x<=5;x++)
    {
        sum=sum+x;
    }
    printf("%d\n",sum);
}*/
/*4.Write a loop program to print sum of 6 to 1 numbers.
Function_name : disp_rsum
Answer:
21

#include<stdio.h>
void disp_rsum(int x);//Function declaration
int main()
{
    int x=6;
    disp_rsum(x);//Function call
    return 0;
}
void disp_rsum(int x)//Function definition
{
    int sum=0;
    for(x=6;x>=1;x--)
    {
        sum=sum+x;
    }
    printf("%d\n",sum);
}*/
/*5.Write a loop program to print odd numbers between 1 to 9.
Function_name : disp_odd
Answer:
1
3
5
7
9

#include <stdio.h>
void disp_odd(int x);//Function declaration
int main()
{
    int x=1;
    disp_odd(x);//Function call
    return 0;
}
void disp_odd(int x)//Function definition
{
    for(x=1;x<=9;x++)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
        }
    }
}
*/
/*6.Write a loop program to print two-digit odd numbers , below 20.
Function_name : disp_2digit_odd_below20
Answer:
11
13
15
17
19

#include <stdio.h>
void disp_2digit_odd_below20(int x);//Function declaration
int main()
{
    int x=11;
    disp_2digit_odd_below20(x);//Function call
    return 0;
}
void disp_2digit_odd_below20(int x)//Function definition
{
    for(x=11;x<=19;x++)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
        }
    }
}
*/
/* 7.Write a loop program to print two-digit odd numbers , whose sum of digits are 7.
Function_name : disp_2digit_odd_sum7
Answer:
25,43,61

#include <stdio.h>
void disp_2digit_odd_sum7(int x);//Function declaration
int main()
{
    int x=25;
    disp_2digit_odd_sum7(x);//Function call
    return 0;
}
void disp_2digit_odd_sum7(int x)//Function definition
{
    for(x=25;x<=99;x++)
    {
        if(x%2!=0)
        {
            if((x/10)+(x%10)==7)
            {
                printf("%d\n",x);
            }
        }
    }
}*/
/*8.Write a loop program to print two-digit even numbers , whose sum of digits
are 6.
Function_name : disp_2digit_even_sum6
Answer:
24
42
60

#include <stdio.h>
void disp_2digit_even_sum6(int x);//Function declaration
int main()
{
    int x=24;
    disp_2digit_even_sum6(x);//Function call
    return 0;
}
void disp_2digit_even_sum6(int x)//Function definition
{
    for(x=24;x<=98;x++)
    {
        if(x%2==0)
        {
            if((x/10)+(x%10)==6)
            {
                printf("%d\n",x);
            }
        }
    }
}
*/
/*Write a loop program to print sum of  two-digit numbers , whose one's digit is 5.
Function_name : disp_2digit_ones5
Answer:
495
#include <stdio.h>
void disp_2digit_ones5(int x);//Function declaration
int main()
{
    int x=15;
    disp_2digit_ones5(x);//Function call
    return 0;
}
void disp_2digit_ones5(int x)//Function definition
{
    int sum=0;
    for(x=15;x<=95;x++)
    {
        if(x%10==5)
        {
            sum=sum+x;
        }
    }
    printf("%d\n",sum);
}
*/
/*10.Write a loop program to print sum of  two-digit odd  numbers , whose tens digit is 7.
Function_name : disp_2digit_odd_sum_tens7
Answer:
375
#include <stdio.h>
void disp_2digit_odd_sum_tens7(int x);//Function declaration
int main()
{
    int x=17;
    disp_2digit_odd_sum_tens7(x);//Function call
    return 0;
}
void disp_2digit_odd_sum_tens7(int x)//Function definition
{
    int sum=0;
    for(x=17;x<=97;x++)
    {
        if(x%2!=0)
        {
            if(x/10==7)
            {
                sum=sum+x;
            }
        }
    }
    printf("%d\n",sum);
}
*/
/*Write a program to get a number from the user and print the total number of digits in the given number.
Function_name : count_total_digits
Answer:
Input: 123456   Output: 6
Input: 76895439 Output: 8
Input: 675      Output: 3
*/
#include <stdio.h>
void count_total_digits(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    count_total_digits(x);//Function call
    return 0;
}
void count_total_digits(int x)//Function definition
{
    int count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("%d\n",count);
}