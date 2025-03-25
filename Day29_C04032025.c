/*C PROGRAMMING SELF ASSESSMENT 11
1. USE POINTERS */
/*3. Write a loop program to print 1 to 5 one by one. 
Write a funnction and print the result in a main  function. 
Function NAme : arrange_ascend 
Answer: 
1
2
3
4
5
#include <stdio.h>

// Function to print numbers from 1 to 5 using a pointer
void arrange_ascend(int *ptr) {
    for (int i = 1; i <= 5; i++) {
        *ptr = i;  // Assign value to where the pointer points
        printf("%d\n", *ptr);  // Print the value
    }
}

int main() {
    int num;  // Variable to hold the number
    int *ptr = &num;  // Pointer pointing to the variable
    arrange_ascend(ptr);  // Call the function with the pointer
    return 0;
}
*/
/*4. Write a function to find the two-digit odd numbers
whose sum of digits is 7. Print the results in main function. 
Function Name: find_2digit_odd_sum7
Answer: 25,43,61
USING POINTERS
*/
//using pointers
#include <stdio.h>
void find_2digit_odd_sum7(int *ptr);//function declaration
int main()
{
    int num;
    int *ptr = &num;
    find_2digit_odd_sum7(ptr);//function call   
    return 0;
}           
void find_2digit_odd_sum7(int *ptr) {
    for (int i = 10; i < 100; i++) {
        if (i % 2 != 0 && (i / 10 + i % 10) == 7) {
            *ptr = i;
            printf("%d\n", *ptr);
        }
    }
}