/*
    * STRONG NO.:It is a no. in which the sum of factorial of individual no. is equal
       to the original no.
    *FIRSTLY break THE NO. INTO DIGITS.
    *THEN FIND THEIR FACTORIAL AND ADDING THEM
    *CHECK WHETHER SUM IS EQUAL TO ORIGINAL NO. OR NOT.
*/
unsigned int fac(short int dig)
{
    short int i;
    unsigned int multi=1;
    if(dig==0||dig==1)
        return 1;
    else
        for(i=2;i<=dig;i++)
            multi*=i;
    return multi;
}

void strong(void)
{
    short int dig;
    unsigned int temp, sum=0,n;
    printf("\n\n enter the no.");
    scanf("%lu",&n);
    temp=n;
    while(temp)
    {
        dig=temp%10;
        temp/=10;
        sum=sum+fac(dig);
    }
    if(sum==n)
        printf("\nTHE NO. IS STRONG");
    else
        printf("\nTHE NO. IS not STRONG");
}
