/*************************************************************
Name : Rohit Narayan Telgote
PRN : 1941054
Class : L.Y.B.TECH.
Batch : B1
Sub : CDL
Aim : Write a C program to identify whether a given line is comment
or not.
*************************************************************/
#include <stdio.h> //header file
void main()        // main function
{
    char source_file[30], ch, ch1, ch2, ch3, ch4;
    int i = 0, j = 0;
    FILE *source; // file pointer
    printf("\nEnter the File Name:");
    scanf("%s", source_file);
    source = fopen(source_file, "r");
    if (source == NULL)
    {
        printf("File does not exists");
    }
    /*
    While Loop
    */
    while ((ch = getc(source)) != EOF)
    {
        if (ch == '/')
        {
            ch1 = getc(source);
            if (ch1 == '/' || ch1 == '*')
            {
                if (ch1 == '/')
                {
                    i++;
                    printf("\nSingle Line Comment : %d", i);
                    printf("\n%c%c", ch, ch1);
                    while ((ch2 = getc(source)) != '\n')
                    {
                        printf("%c", ch2);
                    }
                    printf("\n");
                }
                else
                {
                    j++;
                    printf("\nMultiline comment : %d", j);
                    printf("\n%c%c", ch, ch1);
                    while ((ch3 = getc(source)) != '*')
                    {
                        printf("%c", ch3);
                    }
                    printf("%c", ch3);
                    if ((ch4 = getc(source)) == '/')
                        printf("%c\n", ch4);
                }
            }
        }
    }
    /*
    End Of While Loop
    */
}
