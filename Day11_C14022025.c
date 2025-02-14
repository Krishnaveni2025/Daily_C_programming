/*::::::::::C PROGRAMMING SELF ASSESSMENT 6 ::::::::::*/
/*Use only while loop
1. Write a loop program to print 1 to 5 one by one.
Answer:
1
2
3
4
5
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}*/
/*2. write a loop program to print 5 to 1 on one by one.
Answer:
5
4
3
2
1
#include <stdio.h>
int main()
{
    int i = 5;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}*/
/* Write a loop program to print sum from 1 to 5.
Answer:
15

#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i <= 5)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*4. Write a loop program to print sum from 6 to 1.
Answer:
21

#include <stdio.h>
int main()
{
    int i = 6, sum = 0;
    while (i >= 1)
    {
        sum += i;
        i--;
    }
    printf("%d\n", sum);
    return 0;
}
*/
/*5. Write a loop program to print odd numbers between
1 and 9.
Answer:
1
3
5
7
9
#include<stdio.h>
int  main()
{
    int x;
    //your code here
    x=0;
    while(x<10)
    {
        if((x%2)==1)
        {
            printf("\n%d",x);
        }
        x++;
    }
    return 0; 
}*/
/*6. Write a loop program to print the two-digit odd numbers , below 20.
Answer:
11
13
15
17
19
#include <stdio.h>
int main()
{
    int x;
    //your code here
    x=10;
    while(x<20)
    {
        if((x%2==1))
        {
            printf("\n%d",x);
        }
        x++;
    }
    return 0;
}*/
/*7. Write a loop program to print two-digit odd numbers, whose aum of digits are 7.
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
    while(x<100)
    {
        if((x%2)==1)
        {
            if(((x%10)+(x/10))==7)
            {
                printf("\n%d",x);
            }
        }
        x++;
    }
    return 0;
}*/
/*8. Write a loop program to print two-digit even numbers,
whose sum of digits are 6.
Answer:
24
42
60

#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=10;
    while(x<100)
    {
        if((x%2)==0)
        {
            if(((x%10)+(x/10))==6)
            {
                printf("\n%d",x);
            }
        }
        x++;
    }
    return 0;
}*/
/*9. Write a loop program to print 
the sum of two-digit numbers whose one's digit
is 5.
Answer:
495
#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x= 10;
    int sum = 0;
    while(x<100)
    {
        if((x%10)==5)
        {
            //printf("\n%d",x);
            sum = sum+x;
        }
        x++;
    }
    printf("%d",sum);
    return 0;
}*/
/*10. Write a loop program to print the sum of 
two-digit odd numbers.whose ten's digit is 7.
Answer:
375

#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x=10;
    int sum = 0;
    while(x<100)
    {
        if((x%2)==1)
        {
            if((x/10)==7)
            {
                sum = sum+x;
            }
        }
        x++;
    }
    printf("%d",sum);
    return 0;
}*/
/*11. write a program to get a number from 
user and print the total number of digits in 
that number.
Answer:
Input:123456    Output:6
Input:76895439  Output:8
Input:675       Output:3

#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    printf("Enter a Number:");
    scanf("%d",&x);
    int count = 0;
    while (x>0)
    {
        count++;
        x=x/10;
    }
    printf("%d",count);
    return 0;
    
}*/
/*12. Write a program to get anumber from 
user and print the sum of all digits.
Answer:
Input:123456    Output:21
Input:76895439  Output:51
Input:675       Output:18

#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    printf("Enter a number: ");
    scanf("%d",&x);
    int sum = 0;
    while(x>0)
    {
        sum = sum +(x%10);
        x=x/10;
    }
    printf("%d",sum);
    return 0;
}*/
/*13. Write a program to get a number from user
and print the reverse of that number.
Answer:
Input:123456    Output:654321
Input:76895439  Output:93459867
Input:675       Output:576
*/
#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d",&x);
    int rev=0;
    while (x>0)
    {
        rev = (rev*10)+(x%10);
        x=x/10;
    }
    printf("%d",rev);
    return 0;
}