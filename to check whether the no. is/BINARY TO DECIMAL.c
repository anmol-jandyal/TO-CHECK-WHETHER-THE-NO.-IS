/*
    BINARY NO. to DECIMAL NO.
    if binary no. =10101110
        THEN DECIMAL OF THIS NO. IS
        1*2^7 + 0*2^6 + 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 1*2^1 + 0*2^0
*/
#include<math.h>
void bin_to_dec(void)
{
    double sum=0;
    unsigned int np, temp_np;
   unsigned long long int n,  temp_n;
    short int dig_n, dig_np,ord=0;
    unsigned int pow2_n=1;
    int sum_n=0;
    float sum_np=0;

   printf("\n\n enter the binary no.(with point )\n");
   scanf("%llu.%lu",&n,&np);
    temp_n=n;
   temp_np=np;

      while(temp_np)
       {
           temp_np/=10;
           ord++;
       }
  temp_np=np;
   while(temp_n||temp_np)
   {
       if(temp_n)
       {
           dig_n=temp_n%10;
           temp_n/=10;
           sum_n = sum_n + dig_n*pow2_n;
           pow2_n*=2;
       }
       if(temp_np)
       {
           dig_np=temp_np%10;
           temp_np/=10;
           sum_np=sum_np +  dig_np*(1.0/pow(2,ord));
           ord--;
       }
    sum=sum_n+sum_np;
    }
   printf("\nTHE DECIMAL OF binary %llu.%lu is : %lf",n,np,sum);
}

