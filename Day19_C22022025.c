/*============= self assessment 9==========================*/
/*11. Get upto 5 numbers from the user , reverse each number,
create a new array, and print the sum of all numbers in
the new array. 

#include<Stdio.h>
int main()
{
    int num[5];
    int i = 0,j =0;
    //get five numbers
    for(int i=0;i<5;i++)
    {
    printf("Enter integer  %d : ",i+1);
    scanf("%d",&num[i]);
    }
} */
/*12. Get multiple numbers from the user and 
store them in an array . Stop when the number is 0. 
Print the total numbers entered by the user and
print the sum of numbers. */
#include<Stdio.h>
int main()
{
    int num[50];
    int i = 0,j =0,sum = 0;
    //get five numbers
    for(int i=0;i<50;i++)
    {
    printf("Enter integer  %d : ",i+1);
    scanf("%d",&num[i]);
    if(num[i]==0) //stop when the number is 0
    {
        for(j=0;j<i;j++)//print the total numbers entered by the user
        {
            printf("Number : %d\n",num[j]);
        }
        for(j=0;j<i;j++)//print the sum of numbers
        {
            sum = sum + num[j];
        }
        printf("Sum of numbers: %d\n", sum);
        break;
    }
    }
}
