/*
   * PALINDROME NO.S: It is a no. which if read backwards give the same no.
      as being read forward
   * FIRSTLY WE WILL FIND THE REVERSE OF THE NO.
   * THEN CHECK IT WITH ORIGINAL NO.
*/

void palindrome(void)
{
    short int dig;           //TAKING DIG AS SHORT BEAUSE IT HAS TO HOLD 0 TO 9 ONLY
    unsigned long long int temp, rev=0,n;

    printf("\n\n enter the no.");
    scanf("%llu",&n);
    temp=n;
    while(temp)          //WHEN TEMP =0 THE ITERATION ENDS
    {
        dig=temp%10;    //TO GET THE LAST DIGIT OF temp
        temp/=10;           //HERE  THE LAST DIGIT REMOVE FROM TEMP
        rev=dig+rev*10;
    }
    if(rev==n)
        printf("\nTHE GIVEN NO. IS PALINDROME");
    else
        printf("\nTHE GIVEN NO. IS  NOT PALINDROME");
}
