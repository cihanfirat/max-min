#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int max,min;

    printf("Choose 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    max=a;

    if (b>max){
        max=b;
    }
    if (c>max){
        max=c;
    }

    printf("Maximum is:%d \n",max);

    min=a;

    if (b<min){
        min=b;
    }

    if (c<min){
        min=c;
    }

    printf("Minimum is %d",min);


    return 0;
}
