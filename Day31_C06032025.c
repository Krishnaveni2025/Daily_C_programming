/*C PROGRAMMING SELF ASSESSMENT 11
1. USE POINTERS */
/*7. Write a function to compare a set of integers. 
print Success or Failure
Function Name : memcomp(src,dst,size)

#include <stdio.h>
void memcomp(int *src, int *dst, int size);
int main() {
    int src[] = {1, 2, 3, 4, 5};
    int dst1[] = {1, 2, 3, 4, 5}; // Matching array
    int dst2[] = {1, 2, 0, 4, 5}; // Non-matching array

    int size = sizeof(src) / sizeof(src[0]);

    // Test with matching arrays
    memcomp(src, dst1, size);

    // Test with non-matching arrays
    memcomp(src, dst2, size);

    return 0;
}
void memcomp(int *src, int *dst, int size) {
    for (int i = 0; i < size; i++) {
        if (*(src + i) != *(dst + i)) {
            printf("Failure\n");
            return;
        }
    }
    printf("Success\n");
}
*/
/*8. Write a function to compare two strings. 
print Success or Failure. 
Function Name : strcomp(src,dst)
*/
#include <stdio.h>
void strcomp(const char *src, const char *dst);
int main()
{
    const char *src = "Hello";
    const char *dst1 = "Hello"; // Matching string  
    const char *dst2 = "World"; // Non-matching string
    strcomp(src, dst1);
    strcomp(src, dst2);
    return 0;
}
void strcomp(const char *src, const char *dst)
{
    while (*src != '\0' && *dst != '\0')
    {
        if (*src != *dst)
        {
            printf("Failure\n");
            return;
        }
        src++;
        dst++;
    }
    if (*src == '\0' && *dst == '\0')
    {
        printf("Success\n");
    }
    else
    {
        printf("Failure\n");
    }
}