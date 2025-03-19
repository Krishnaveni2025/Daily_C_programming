/*C programming self assessment 10*/
/*3. Get a String and print the same. */
/*
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string is: %s\n", str);
    return 0;
}
*/
/*4. Get a number as a String and print the integer value of the string. */
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number as a string: ");
    scanf("%s", str);
    //without using atoi
    int num = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + str[i] - '0';//convert the string to integer
    }
    printf("The number is: %d\n", num);//print the integer value of the string
    return 0;
}