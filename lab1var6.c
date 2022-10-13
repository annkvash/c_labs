#include <stdio.h>
int main()
{
    int b1, b2, b3, m, k;
    printf("Enter b1->");
    scanf("%d",&b1);
    printf("Enter b2 ->");
    scanf("%d",&b2);
    printf("Enter b3 ->");
    scanf("%d", &b3);
    if ((b2>=b1)&&(b3>=b1))
    {
        m=b1;
        k=1;
    }
    else
    {
        if ((b1>=b2)&&(b3>=b2))
        {
            m=b2;
            k=2;
        }
        else
        {
            m=b3;
            k=3;
        }
    }
    if (m%2==0)
    {
        if (k==1)
        {
            printf("%1f\n",(float)k/m);
        }
        if (k==2)
        {
            printf("%2f\n",(float)k/m);
        }
        else
        {
           printf("%f\n",(float)k/m); 
        }
    }
    else
    {
        printf("%d\n",k);
    }
printf("%d,%d,%d,%d,%d\n",b1, b2, b3,m ,k);
}
