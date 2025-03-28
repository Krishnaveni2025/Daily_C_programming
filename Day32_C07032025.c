/*C PROGRAMMING SELF ASSESSMENT 11
1. USE POINTERS */

/*9. WRite a function to concatenate two integer
arrays into a single array. 
Function Name: intcon(src1,size2,src2,size2,dst)

#include <stdio.h>
void intcon(int *src1, int size1, int *src2, int size2, int *dst);
int main()
{
    int src1[5] = {1, 2, 3, 4, 5};
    int src2[5] = {6, 7, 8, 9, 10};
    int dst[10];
    int i;
    intcon(src1, 5, src2, 5, dst);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", dst[i]);
    }
    return 0;
}
void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i;
    for (i = 0; i < size1; i++)
    {
        dst[i] = src1[i];
    }
    for (i = 0; i < size2; i++)
    {
        dst[size1 + i] = src2[i];
    }
}*/
/*10. USE POINTERS */


/*10. Write a function to concatenate two string 
to another. 
Function Name: strcon(src1,src2,dst)
*/
#include <stdio.h>
void strcon(const char *src1, const char *src2, char *dst);
int main()
{
    char src1[20] = "Hello";
    char src2[20] = "World";
    char dst[40];
    strcon(src1, src2, dst);
    printf("%s\n", dst);
    return 0;
}
void strcon(const char *src1, const char *src2, char *dst)
{
    while (*src1 != '\0')
    {
        *dst = *src1;
        dst++;
        src1++;
    }
    while (*src2 != '\0')
    {
        *dst = *src2;
        dst++;
        src2++;
    }
    *dst = '\0';
}