/*C PROGRAMMING SELF ASSESSMENT 10*/

/*7. Get a String and Find the length of the String. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("The length of the string is: %d\n", len);
    return 0;
}*/
/*8. Get a String of numbers up to 50 digits and
validate the number. */
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            printf("Invalid number\n");
            return 0;
        }
        i++;
    }
    printf("Valid number\n");
    return 0;
}