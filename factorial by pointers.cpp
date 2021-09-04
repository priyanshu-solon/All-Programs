#include<stdio.h>           //Header file for Standard input and output
#include<conio.h>          //Header file for Console input and output
void Factori(int,  long int *);   //Fcatorial Function Header Declaration
int main(){
         long int factorial;
         int numbr;
         printf("Enter an Integer number: ");
         scanf("%d",&numbr);
         Factori(numbr, &factorial);      //Function Call
         printf("Factorial of %d is: %ld", numbr, factorial);
         getch();

        return 0;
        }

// Function definition for finding Factorial of the given Integer using Pointer
void Factori(int n,  long int *factorial){
        int i;

       *factorial =1;
       for(i=1;i<=n;i++)
       *factorial=*factorial*i;
       }

