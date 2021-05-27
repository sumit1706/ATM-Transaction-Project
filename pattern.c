#include<stdio.h>
void main()
{
    float amt = 200000, per = 1;
    int i;
    for(i=0;i<15;i++)
    {
        amt=amt+ 0.2 *amt;
        per = per + 20;
    }
    printf("%f\n%f",amt,per);
}