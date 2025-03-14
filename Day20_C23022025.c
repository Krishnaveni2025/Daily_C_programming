/*========self assessment 9*/
/*13. GEt  multiple numbers from the user and 
store them in an array . Stop getting numbers
when the number is 0. If 4 numbers are entered
and the first and last numbers are equal , print "Success"
else "Failure" . 

#include <stdio.h>
int main()
{
    int arr[100], i, n;
    for (i = 0; i < 100; i++)//100 is the maximum size of the array
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0)//if the number is 0 then break the loop
        {
            break;
        }
        {
            break;
        }
        arr[i] = n;
    }
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0)//if the number is 0 then break the loop
        {
            break;
        }
        {
            break;
        }
        arr[i] = n;
    }
    if (arr[0] == arr[i - 1] && i == 4)//if the first and last number are equal and the total number is 4
    {
        printf("Success\n");
    }
    else
    {
        printf("Failure\n");
    }
    {
        printf("Success\n");
    }
    else
    {
        printf("Failure\n");
    }
    return 0;
}*/
/*14. Get multiple numbers from user and store 
them in an array. Stop getting numbers
when the number is 0. If the total numbers is odd
then print the middle number, Otherwise print the
average of middle two numbers. */
#include <stdio.h>
int main()
{
    int arr[100], i, n;
    for (i = 0; i < 100; i++)//100 is the maximum size of the array
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0)//if the number is 0 then break the loop
        {
            break;
        }
        arr[i] = n;
    }
    if (i % 2 == 1)//if the total number is odd
    {
        printf("Middle number: %d\n", arr[i / 2]);
    }
    else//if the total number is even
    {
        printf("Average of middle two numbers: %.2f\n", (arr[i / 2] + arr[i / 2 - 1]) / 2.0);
    }
    return 0;
}