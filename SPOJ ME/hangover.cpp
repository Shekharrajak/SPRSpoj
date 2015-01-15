#include<stdio.h>
/*finding the minimum no. of cards for at least c overhang*/
int overhang(float c)
{
    float sum = 0;
    float k=2;
    
    while (sum < c)
    {
            sum =  sum + 1/k;
            k++;
    }

    return k-2;    
}

/*main function*/
int main()
{
    float c;
    int cards;
    scanf("%f" , &c);
    while(c!=0.00 && c< 10.00)
    {
        cards =    overhang(c);
        printf("%d card(s)\n", cards);
        scanf("%f" , &c);
    }    
    return 0;
}
