/*------------Passing an Entire Array to a Function-------------*/ 
/*In the previous section we saw two programs—one in which we 
passed individual elements of an array to a function, and another in 
which we passed addresses of individual elements to a function. 
Let us now see how to pass an entire array to a function rather than 
its individual elements. Consider the following example: */
/* Demonstration of passing an entire array to a function */
/*#include<stdio.h>
int display(int *j, int n);//function declaration 
int main() 
{ 
int  num[6] = { 24, 34, 12, 44, 56, 17 } ; 
display ( &num[0],6 ) ; //calling function
}
int display ( int  *j, int  n ) //function defination
{
    int i ;
    for ( i = 0 ; i <= n - 1 ; i++ ) 
    { 
        printf ( "\nelement = %d", *j ) ; 
        j++ ;  // increment pointer to point to next element //
    } 
}*/
/*And here is a program to prove my point. */
/* Accessing array elements in different ways */ 
/*#include<stdio.h>
int main()
{
    int  num[] = { 24, 34, 12, 44, 56, 17 } ; 

    int i ;
    for ( i = 0 ; i <= 5 ; i++ ) 
    {         
        printf ( "\naddress = %u ", &num[i] ) ; 
        printf ( "element = %d %d ", num[i], *( num + i ) ) ;  
        printf ( "%d %d", *( i + num ), i[num] ) ; 
    }
}*/
/*-----------------Two Dimensional Arrays ----------------*/
//Here is a sample program that stores roll number and marks 
//obtained by a student side by side in a matrix. 
/*#include<stdio.h>
int main( ) 
{ 
int  stud[4][2] ; 
int  i, j ; 
for ( i = 0 ; i <= 3 ; i++ ) 
 { 
printf ( "\n Enter roll no. and marks" ) ; 
scanf ( "%d %d", &stud[i][0], &stud[i][1] ) ; 
 } 
for ( i = 0 ; i <= 3 ; i++ ) 
printf ( "\n%d %d", stud[i][0], stud[i][1] ) ; 
} */
/* Demo: 2-D array is an array of arrays */ 
/*#include<stdio.h>
int main()
{
    int  s[4][2] = {{1234, 56 }, {1212, 33 }, {1434, 80 }, {1312, 78 } };
    int i;
    for ( i = 0 ; i <= 3 ; i++ ) 
        printf ( "\nAddress of %d th 1-D array = %u", i, s[i] ) ; 
}*/
/* Pointer notation to access 2-D array elements */ 
/*#include<stdio.h>
int main()
{
    int  s[4][2] = { 
     { 1234, 56 }, 
     { 1212, 33 }, 
     { 1434, 80 }, 
     { 1312, 78 } 
    };
    int i,j;
    for(i = 0; i<=3; i++)
    {     printf("\n");
        for(j=0;j<=1;j++)
            printf ( "%d ", *( *( s + i ) + j ) ) ; 
    }
}*/
/* Usage of pointer to an array */ 
#include<stdio.h>
int main()
{
    int s[5][2] = {
        {1234, 97},
        {5125, 58},
        {5412, 36},
        {5421, 46}
    };
    int (*p)[2];
    int i, j,*pint;
    for(i=0; i<=3;i++)
    {
        p=&s[i];
        pint = p;
        printf("\n");
        for(j=0;j<=1;j++)
            printf("%d ",*(pint+j));
    }
}