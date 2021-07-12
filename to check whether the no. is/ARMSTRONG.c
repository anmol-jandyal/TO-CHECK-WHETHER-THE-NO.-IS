/*
    *ARMSTRONG NO.:An armstrong no. of order n is a no. in which each digits
      when multiplied by itself n times and finally added together result the same no.
    *FIRSTLY WE WILL FIND THE ORDER OF THE NO. GIVEN
    *SPLITTING THE NO. INTO DIGITS AND THEIR POWER (ORDER) AND
      ADDING THEM.
    *THEN CHECK WHETHER THE SUM IS SAME AS ORIGINAL NO.
*/

unsigned long long int power(short int digit, short int order)
{
    short int i;
    unsigned long long int x=1;
    for(i=1; i<=order; i++)
        x*=digit;
    return x;
}

void armstrong(void)
{
    short int dig,ord=0;
    unsigned long long int temp, sum=0,n;
    printf("\n\n enter the no.(NO. OF DIGITS SHOULD BE UPTO 19).");
    scanf("%llu",&n);

    temp=n;

    while(temp)
    {
        temp/=10;
        ord++;
    }
    temp=n;
    while(temp)
    {
        dig=temp%10;
        temp/=10;
        sum=sum+power(dig,ord);
    }
   if(sum==n)
        printf("\nTHE NO. IS ARMSTRONG");
    else
        printf("\nTHE NO. IS NOT ARMSTRONG");
}
