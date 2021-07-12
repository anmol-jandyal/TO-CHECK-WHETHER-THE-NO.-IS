/*
    *PERFECT NO.:It is a positive integer that is equal to the sum of all its
     proper positive divisiors excluding the no. itself
*/
void perfect(void)
{
    unsigned long long int i,sum=0,n;
    printf("\n\n enter the no.(upto 19 digits)");
   scanf("%llu",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=i+sum;
        }
    }
    if(sum==n)
        printf("\nTHE NO. IS A PERFECT NO.");
    else
        printf("\nTHE NO. IS not A PERFECT NO.");
}
