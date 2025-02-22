/*C PROGRAMMING SELF ASSESSMENT 9
1. Use only int variables
2. Use only Decimals
3. Use Arrays
*/
/*1. Get 5 numbers from user and print the sum of all numbers. 

#include<stdio.h>
int main()
{
    int a[5];//Array Declaration
    int i,j,sum;
    i =0;
    j=0;
    sum =0;
    for(i=0;i<5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a[i]);//Storing numbers in array
    }
    for(j=0;j<5;j++)
    {
        sum = sum+a[j];//Reading data from array
    }
    printf("%d",sum);
}*/
/*2. Get 5 numbers from user and print the average all numbers. */
#include<stdio.h>
int main()
{
    int average[5];//Array Declaration
    int i,avg,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&average[i]);//Storing numbers into  array 
    }
    for(i=0;i<5;i++)
    {
        sum = sum+average[i];
    }
    avg = sum/5;
    printf("Average of 5 numbers = %d",avg);
}

