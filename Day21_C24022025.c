/*15. Get multiple numbers from user and store 
them in an array. Stop getting numbers
when the number is 0.
Add each number's digits and put them in a new
array and arrange the new array in ascending order
and print same. */
//Output: Enter the numbers: 123 456 789 0
//        6 9 15
//Output: Enter the numbers: 123 456 789 0
//        6 9 15
/*#include<stdio.h>
int main ()
{
   //get multiple numbers from user and store them in an array
   int a[100],i=0;
   printf("Enter the numbers: ");
    while(1){
         scanf("%d",&a[i]);
         if(a[i]==0){
              break;
         }
         i++;
    }
    //Add each number's digits and put them in a new array
    int b[100],j=0;
    for(int k=0;k<i;k++){
        int sum=0;
        while(a[k]>0){
            sum+=a[k]%10;
            a[k]=a[k]/10;
        }
        b[j]=sum;
        j++;
    }
    //arrange the new array in ascending order
    for(int k=0;k<j;k++){
        for(int l=k+1;l<j;l++){
            if(b[k]>b[l]){
                int temp=b[k];
                b[k]=b[l];
                b[l]=temp;
            }
        }
    }
    //print the new array
    for(int k=0;k<j;k++){
        printf("%d ",b[k]);
    }
}
*/
/*16. Add two integer arrays of upto 50 digits and
store the result in a 51-digit arrAY.*/

/*
#include<stdio.h>
int main ()
{
    //Add two integer arrays of upto 50 digits
    int a[50],b[50],c[51],i=0,j=0;
    printf("Enter the first number: ");
    while(1){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
        i++;
    }
    printf("Enter the second number: ");
    while(1){
        scanf("%d",&b[j]);
        if(b[j]==0){
            break;
        }
        j++;
    }
    //store the result in a 51-digit array
    int k=0,carry=0;
    for(int l=0;l<i || l<j;l++){
        c[k]=a[l]+b[l]+carry;
        carry=c[k]/10;
        c[k]=c[k]%10;
        k++;
    }
    c[k]=carry;
    //print the result
    for(int l=0;l<=k;l++){
        printf("%d",c[l]);
    }
}
*/


/*17. Adjust the carry in an integer array.
 (i.e convert the 2 digit number into single digit
 and add the carry to the next number) */
 
#include<stdio.h>
int main ()
{
    //Adjust the carry in an integer array
    int a[50],i=0;
    printf("Enter the number: ");
    while(1){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
        i++;
    }
    //convert the 2 digit number into single digit
    int carry=0;
    for(int j=0;j<i;j++){
        a[j]=a[j]+carry;
        carry=a[j]/10;
        a[j]=a[j]%10;
    }
    //print the result
    for(int j=0;j<i;j++){
        printf("%d",a[j]);
    }
}
