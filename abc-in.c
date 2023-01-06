/*Name : Rohit Telgote
PRN : 1941054*/
#include <stdio.h> //header file
#include <stdlib.h>

// main function
int main()
{
    int a, b, c, ch;
    printf(" \n ENTER numbers as an argument ");
    scanf(" %d%d ", &a, &b);
    printf(" \nMENU\n1.ADD\n2.Sub\n3.MUL ");
    scanf(" %d ", &ch);
    c = a + b;
    if (ch == 0)
    {
        printf(" bye ");
    }
}