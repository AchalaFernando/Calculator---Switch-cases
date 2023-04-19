
#include <stdio.h>
void main(){
    int n1,n2;
    int result;
    char op;

    printf("\n-----------------CALCULATOR-----------------\n\n");

    printf("\nEnter your first number  :- ");
    scanf("%d",&n1);

    printf("Enter your second number :- ");
    scanf("%d",&n2);

    printf("\nEnter your expected operator + - / *   =  \n\n");
    scanf(" %c",&op);

    switch (op)
    {
        case '+':
            result = n1 + n2;
            printf("  Addition of 2 numbers is :-\n\n\n\n     Answer :- %d + %d = %d\n\n",n1,n2,result);
            break;

        case '-':
            result = n1-n2;
            printf("  Subtraction  of 2 numbers is :-\n\n\n\n     Answer :- %d - %d = %d\n\n",n1,n2,result);
            break;

        case '/':
            result = n1 / n2 ;
            printf("  Division of 2 numbers is :-\n\n\n\n     Answer :- %d - %d = %d\n",n1,n2,result);
            break;

        case '*':
            result = n1* n2;
            printf("  Multiplication of 2 numbers :-\n\n\n\n     Answer :- %d * %d =%d\n\n",n1,n2,result);
            break;
    }

    printf("\n               All rights reserved ");
    printf(" \n          Developed by Achala Fernando  ");
    printf("\n-----------------Thank you!-----------------\n\n");

}
