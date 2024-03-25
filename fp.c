#include<stdio.h>
#include<math.h>
#include<string.h>
//first define then use, we cant use before define ,so we need to define first. 
//for using pow we haev to add a library of math.h.
//find the volume of cylinder
//find the odd and even numbers
//finding the answer of the given expression
// && means AND, || means or,! means not equal to.
//the number is divisible by 2 or not.
// checking whether the code gives error or any output.
// making a calculator , i=i+1 <=> i+=1 (short hands),i++
//increment operator i++,++i
//decrement operator i--,--i
//updation has no role actually its all about printf. 
//first initialisation then condition then updation.
//every alphabet has an ascii value of its.
//the sum of first n natural numbers.
//the things which you want them in loop write them in loop,otherwise outside.
//compiler wont recognise the i outside of loop,it only knows in loop
//continue statement means skip. //base of binary is 2 and that of decimal is 10. // we can write the c++ code here too.
//factorial of n. //take the input from user till the even number comes.
//chapter 4 ended.  //implicit means when the complier complies the code by itself,on the other hand when we compile the code by ourselves then it is known as explicit.
//the answer would be in float only if one of the number is in float if both the numbers are integers then we cant get answer in float,
//source code to machine code, the code we write by using terms like printf,scanf,and int ,char ,float thats the source code like below one.
//else and default  is optional. //continue statement would be in for always. 
//main is a function. Function needs to get define first and we can define them as varibles only underscore can be used ,then work with that function  ,then use the function or do some work with that function.
// we write the code in the functions always. // we call the function in function call like we call table function etc.  
//we defined the function here.//we have defined this function because we want to work in this otherwise main was enough. //define the variables in main function only.
//recursive function. //logical operators and,or,not. //relational operators are <,> etc.
//pointers are the variables which store the memory address of the another variable.//it denotes by ptr. for finding addresses, we use "%p".
//ptr ka address store hoga 'pptr' and soon. //jaha ptr waha & lagega.//insaan badlega but ghar aur address nahi badlega.
     char alpha(int *a,int n);
     int main() { 
         int x=96,n=1;
         alpha(&x,n);
         printf("%c\n",x);
     }
     char alpha(int *a,int n) {
        for(int i=0;i<=26;i++){
            *a=*a+n;
            printf("%c\n",*a);
        }
        return 1;
     }