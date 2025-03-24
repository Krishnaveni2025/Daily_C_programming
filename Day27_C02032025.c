/*C PROGRAMMING SELF ASSESSMENT 10
/* 11. Get a number string up to 50 digits and
convert it to an integer array. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int num[50];
    int i = 0;
    while(str[i] != '\0')
    {
        num[i] = str[i] - '0';//convert the string to integer array
        i++;
    }
    for(int j = 0; j < i; j++)
    {
        printf("%d", num[j]);//print the integer array
    }
    printf("\n");
    return 0;
}*/
/*12. Convert an integer array of upto 50 digits
to a character array and print using 
"printf("%s",......);"
Example: 
Array - 1 4 5 8 7 6 3
Answer: 1458763
*/
#include<stdio.h>
int main()
{
    int num[50];
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("Enter the number: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d", num[i]);
    }
    printf("\n");
    return 0;
}