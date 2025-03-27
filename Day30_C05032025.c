/*C PROGRAMMING SELF ASSESSMENT 11
1. USE POINTERS */
/*5. Write a function to copy integers from one location
to another location. 
Function Name: memcopy(src,dsy,size)
*/
#include <stdio.h>
void memcopy(const int *src, int *dsy, size_t size);

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5]; // Ensure destination has enough space
    size_t size = sizeof(source) / sizeof(source[0]); // Number of elements

    memcopy(source, destination, size);

    // Print copied integers
    printf("Source: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("\nDestination: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
void memcopy(const int *src, int *dsy, size_t size) {
    // Copy each integer from the source to the destination
    for (size_t i = 0; i < size; i++) {
        dsy[i] = src[i];
    }
}

/*6. Write a function to copy a string to another. 
Function Name: strcopy(src,dst)

#include <stdio.h>
void strcopy(const char *src, char *dst);
int main() {
    char source[] = "Hello, world!";
    char destination[50];  // Make sure destination has enough space

    strcopy(source, destination);
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
void strcopy(const char *src, char *dst) {
    // Copy characters one by one until the null terminator is reached
    while (*src != '\0') {
        *dst = *src;  // Copy the character from src to dst
        src++;        // Move to the next character in src
        dst++;        // Move to the next position in dst
    }
    *dst = '\0';      // Add null terminator at the end of dst
}
*/