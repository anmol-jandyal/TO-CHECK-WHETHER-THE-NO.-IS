/*
    * PRIME NO.:A no. greater than 1 is called prime no. if it has only two
       factors namely 1 and the number itself.
*/
void prime(void)
{
    unsigned int i, val,count=0;
    unsigned long long int n;
   printf("\n\n enter the no.(upto 19 digits)");
   scanf("%llu",&n);
    if(n<=1)
        printf("\nTHE NO. IS NEITHER PRIME NOR COMPOSITE.");
    else
    {
        val=ceil(sqrt(n));
        for(i=2;i<=val;i++)
            if(n%i==0)
                count++;
            if((count==0&&n!=1)||n==2||n==3)       /* i=n/2+1 when the loop runs untill the condition not become false*/
                printf("\nNO. IS PRIME.");
            else
                printf("\nNO. IS COMPOSITE.");
    }
}

