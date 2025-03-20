/* C PROGRAMMING SELF ASSESSMENT 10*/

/*5. Get an Integer and print it as a string. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char str[100];
    int i = 0;
    while(num != 0)
    {
        str[i++] = num % 10 + '0';//convert the integer to string
        num = num / 10;
    }
    str[i] = '\0';
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c", str[j]);//print the string
    }
    printf("\n");
    return 0;
}*/
/*6. Get an integer and print each digit as a character. 
Print one character on one line. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char str[100];
    int i = 0;
    while(num != 0)
    {
        str[i++] = num % 10 + '0';//convert the integer to string
        num = num / 10;
    }
    str[i] = '\0';
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c\n", str[j]);//print each digit as a character
    }
    return 0;
}