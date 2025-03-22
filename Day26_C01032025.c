/*C PROGRAMMING SELF ASSESSMENT 10*/
/*9. Get a string of numbers upto 50 digits and remove all leading zeros. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int i = 0;
    while(str[i] == '0')
    {
        i++;
    }
    for(int j = i; str[j] != '\0'; j++)
    {
        printf("%c", str[j]);
    }
    printf("\n");
    return 0;
}*/
/*10. Get a number up to 50 digits and reverse it. */
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    printf("\n");
    return 0;
}




