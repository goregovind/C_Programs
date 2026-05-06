#include<stdio.h>
int Addition(int no1, int no2)

    {
        int ans = 0;
        ans = no1+no2;
        return ans;
        
    }
int main()
{
    int ret=0,a=0,b=0;
    ret = Addition(a,b);
    printf("Enter first no :\n");
    scanf("%d",&a) ;
    printf("Enter first no :\n");
    scanf("%d",&b) ;
    printf("Addition is :%d\n",ret); 
    return (0);
}    