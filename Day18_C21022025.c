/*Self Assessment 9*/
/*3. Get 5 numbers from user and print the
smallest number. *
#include <stdio.h>

int main() {
    int numbers[5];
    int smallest;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Initialize smallest with the first number
    smallest = numbers[0];
    
    // Find the smallest number
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    // Print the smallest number
    printf("The smallest integer is: %d\n", smallest);
    
    return 0;
}
*/

/*4.Get 5 numbers from user and
print the biggest number
#include <stdio.h>

int main() {
    int numbers[5];
    int biggest;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Initialize biggest with the first number
    biggest = numbers[0];
    
    // Find the biggest number
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }
    
    // Print the biggest number
    printf("The biggest integer is: %d\n", biggest);
    
    return 0;
}*/

/*5. Get 5  numbers from user and
print the arrange in ascending order and print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int temp;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Sort the numbers in ascending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                // Swap numbers[i] and numbers[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // Print the sorted numbers
    printf("The numbers in ascending order are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*6. Get 5 numbers from user and print the 
arrange in ascending order and print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int temp;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Sort the numbers in ascending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                // Swap numbers[i] and numbers[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // Print the sorted numbers
    printf("The numbers in ascending order are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*7. Get 5 numberes from user and arrange in
descending order and print the same.
#include <stdio.h>

int main() {
    int numbers[5];
    int temp;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Sort the numbers in descending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] < numbers[j]) {
                // Swap numbers[i] and numbers[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // Print the sorted numbers
    printf("The numbers in descending order are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*8.Get 5 numbers from user, remove the odd numbers
and create a new array then print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int evenNumbers[5];
    int j = 0;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Remove odd numbers and create a new array with even numbers
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers[j] = numbers[i];
            j++;
        }
    }
    
    // Print the new array with even numbers
    printf("The new array with even numbers is: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*9. GEt 5 numbers from user , remove the 
even numbers, create a new array , and print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int oddNumbers[5];
    int j = 0;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Remove even numbers and create a new array with odd numbers
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            oddNumbers[j] = numbers[i];
            j++;
        }
    }
    
    // Print the new array with odd numbers
    printf("The new array with odd numbers is: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*10. Get 5 numbers from user , remove the prime numbers
and create a new array , then print hte same. 
*/
#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numbers[5];
    int nonPrimeNumbers[5];
    int j = 0;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Remove prime numbers and create a new array with non-prime numbers
    for (int i = 0; i < 5; i++) {
        if (!is_prime(numbers[i])) {
            nonPrimeNumbers[j] = numbers[i];
            j++;
        }
    }
    
    // Print the new array with non-prime numbers
    printf("The new array with non-prime numbers is: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", nonPrimeNumbers[i]);
    }
    printf("\n");
    
    return 0;
}
