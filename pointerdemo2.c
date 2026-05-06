#include <stdio.h>
int main()
{
   
    char ch='A';
    char *chptr=&ch;
    int i=11;
    int *iptr=&i;
    float f=8.0;
    float *fptr=&f;
    double d=12.555544555;
    char *dptr=&d;
    printf("%c\n",*chptr);
    printf("%d\n",*iptr);
    printf("%f\n",*fptr);
    printf("%lf\n",*dptr);


    
    return(0);

}