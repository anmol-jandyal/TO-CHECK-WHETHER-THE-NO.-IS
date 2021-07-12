/* MAIN FUNCTION TO CHECK THE NO. IS A ________*/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char choice,x;
    unsigned int n;
    printf("\n\n      **/----------------WELCOME TO THE APPLICATION ----------------\\** \n\n");

do
{
    printf("\nPLEASE ENTER THE NO. AS YOUR CHOICE OF THING");
    printf("\n\n1. for PALINDROME\n2. for ARMSTRONG NO.\n3. for STRONG NO.");
    printf("\n4. for PRIME NO.\n5. TO CONVERT BINARY TO DECIMAL\n6. for PERFECT NO.\n");
    scanf(" %c",&choice);
    switch(choice)
    {
        case '1': palindrome();
        break;
        case '2': armstrong();
        break;
        case '3': strong();
        break;
        case '4': prime();
        break;
        case '5': bin_to_dec();
        break;
        case '6': perfect();
        break;
        default: printf("\n\nPLEASE ENTER FROM 1 TO 6");
        break;
    }
    printf("\n\n\nDO YOU WANT TO RUN AGAIN\n IF YES TYPE 'y'\n IF NO type any key other than 'y'\n");
    scanf(" %c",&x);
}while(x=='y'||x=='Y');

getch();
    return 0;
}
