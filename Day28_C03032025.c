/*C PROGRAMMING SELF ASSESSMENT 11
1. USE POINTERS */
/*1. Get a number from user and print the same. 
Change the value without directly changing it
and print the same. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int *ptr = &num;
    printf("The number is: %d\n", *ptr);
    *ptr = 100;
    printf("The number is: %d\n", *ptr);
    return 0;
}*/
/*2. Pass an integer array to a function and
incerment each array element inside the function */
#include<stdio.h>
void increment(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i]++;
    }
}