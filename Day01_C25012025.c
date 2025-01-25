                     /*C PROGRMMING*/
/*########################DAY01#########################*/
/*Let us write a program to find average marks obtained 
by a class of 30 students at a test*/
/*#include<stdio.h>
int main()
{
    int avg , sum =0;
    int marks[30];//array declaration
    printf("Enter marks of 30 students\n");
    for(int i=0;i<30;i++)
    {
        scanf("%d",&marks[i]);
        sum = sum + marks[i];//Strore array Elements
    }  
    for(int i=0;i<30;i++)
    {
        printf("Marks of student %d is %d\n",i+1,marks[i]);//display array elements
    }
    avg = sum/30;
    printf("Average marks of the class is %d\n",avg);//display average marks
} */ 
//Demonstration of call by value
/*#include<stdio.h>
int display(int m);//function declaration
int main()
{
    int i;
    int marks[] = {10,20,30,40,50,60,70,80,90,100};
    for(i = 0;i<10;i++)
    {
        display(marks[i]);  //function call
    }
}
int display(int m)//function definition
{
    printf("Marks of student is %d\n",m);
}

*/
/*Demonstration of call by reference*/
/*#include<stdio.h>
int display(int *m);//function declaration
int main()
{
    int i;
    int marks[] = {10,20,30,40,50,60,70,80,90,100};
    for(i = 0;i<10;i++)
    {
        display(&marks[i]);  //function call
    }
  }
    int display(int *m)//function definition
    {
        printf("Marks of student is %d\n",*m);
    }
*/
/*The purpose of the function 
disp( ) is just to display the array elements on the screen. The 
program is only partly complete. You are required to write the 
function show( ) on your own. Try your hand at it.*/
/*#include<stdio.h>
int disp(int *m);//function declaration
int show(int *m);//function declaration
int main()//main function
{
    int i;
    int marks[] = {10,20,30,40,50,60,70,80,90,100};
    for(i = 0;i<10;i++)
    {
        disp(&marks[i]);  //function call
    }
}
int disp(int *m)//function definition
{
    show(m);
}
int show(int *m)//function definition
{
    printf("Marks of student is %d\n",*m);
}*/
/*Pointers and Arrays 
To be able to see what pointers have got to do with arrays, let us 
first learn some pointer arithmetic. Consider the following 
example: */
#include<stdio.h>
int main()
{
    int i = 8,*j;
    float x = 10.5,*y;
    char ch = 'a',*c;
    printf("Value of i = %d\n",i);
    printf("Value of x = %f\n",x);
    printf("Value of ch = %c\n",ch);    


    j = &i;
    y = &x;
    c = &ch;

    printf("Address of i = %u\n",j);    
    printf("Address of x = %u\n",y);
    printf("Address of ch = %u\n",c);

    j++;
    y++;
    c++;
    printf("After incrementing\n");
    printf("Address of i = %u\n",j);
    printf("Address of x = %u\n",y);
    printf("Address of ch = %u\n",c);


}