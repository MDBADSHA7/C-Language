#include<stdio.h>
int main()
{
    int a,b;
    char p;
    scanf("%d%c %d%c",&a,&p,&b,&p);
    printf("%d%% %d%%",a,b);
    // Percentage is character type data
    // For tacking %, we have to need double percetage
    return 0;
}