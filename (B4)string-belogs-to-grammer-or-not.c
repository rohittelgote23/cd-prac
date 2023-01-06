/*************************************************************
Name : Rohit Narayan Telgote
PRN : 1941054
Class : L.Y.B.TECH.
Batch : B1
Sub : CDL
Aim : Write a C program to check whether a string belongs to grammar or not.
*************************************************************/

#include <string.h>
#include <stdio.h>

int main()
{
    int c;
    char string[20];
    int state = 0, count = 0;
    // printf("\n The string must begin with a and terminate with b"); printf("\n The Given Grammar is:\n");
    printf("\tS->aS \n\tS->bR \n\tR->aR \n\tR->bS \n\tR->b\n");
    printf("Enter a String To Be Checked: ");
    scanf("%s", string);

    while (string[count] != '\0')
    {
        switch (state)
        {
        case 0:
            if (string[count] == 'a')
                state = 1;
            else
                state = 3;
            break;
        case 1:
            if (string[count] == 'a')
                state = 1;
            else if (string[count] == 'b')
                state = 2;
            else
                state = 3;
            break;
        case 2:
            if (string[count] == 'b')
                state = 2;
            else
                state = 3;
            break;
        default:
            break;
        }
        count++;
        if (state == 3)
            break;
    }
    if (state == 2)
        printf("\nString is accepted.\n");
    else
        printf("\nString is not accepted.\n");
    return 0;
}
