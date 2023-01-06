/*************************************************************
Name : Rohit Narayan Telgote
PRN : 1941054
Class : L.Y.B.TECH.
Batch : B1
Sub : CDL
Aim :Write a C program to simulate lexical analyzer for validating
operators.
************************************************************/
#include <stdio.h>
int main()
{
    char s[10];
    int c;
    do
    {
        printf("Enter any operator:");
        scanf("%s", s);
        switch (s[0])
        {
        case '<':
            if (s[1] == '=')
                printf("\nless than or equal\n");
            else
                printf("\nless than");
            break;
        case '>':
            if (s[1] == '=')
                printf("\ngreater than or equal");
            else
                printf("\ngreater than");
            break;
        case '+':
            if (s[1] == '+')
                printf("\nunary increament operator");
            else
                printf("\nadd is an binary arithmatic operator");
            break;
        case '-':
            if (s[1] == '-')
                printf("\nunary decreament operator");
            else
                printf("\nminus is an binary arithmatic operator");
            break;
        case '/':
            if (s[1] == '*')
                printf("\nit is not an operator");
            else
                printf("\ndivision is an binary arithmatic operator");
            break;
        case '*':
            printf("\nmultiplication is an binary arithmatic operator");
            break;
        case '%':
            printf("\nmodulus is an arithmatic operator");
            break;
        case '!':
            if (s[1] == '=')
                printf("\nnot equal");
            else
                printf("\nbit not");
            break;
        case '=':
            if (s[1] == '=')
                printf("\nit is an comparison operator");
            else
                printf("\nassignment operator");
            break;
        case '&':
            if (s[1] == '&')
                printf("\nlogical AND");
            else
                printf("\nBitwise AND");
            break;
        case '|':
            if (s[1] == '|')
                printf("\nlogical OR");
            else
                printf("\nBitwise OR");
            break;
        case '~':
            printf("\nnegation operator");
            break;
        case '?':
            if (s[1] == ':')
                printf("\nternary oprator is an unary oprator");
            else
                printf("\nnot an oprator");
            break;
        default:
            printf("\nInvalid input!!");
            break;
        }
        printf("\nDo you want to continue 1/0\n");
        scanf("%d", &c);
    } while (c == 1);
    return (0);
}
