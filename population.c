#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n,m,y,h,t;
    
    // TODO: Prompt for start size
    do
    {
        n = get_int("Start size: ");
    }
     while (n < 9);
     
    // TODO: Prompt for end size
    {
        m = get_int("End size: ");
    }
     while (m < n);
    // TODO: Calculate number of years until we reach threshold
    for(y = 0; n < m; y++)
    {
        h = n/3;
        t = n/4;
        n = n + h - t;
    }
    
    // TODO: Print number of years
    printf("Years: %i\n", y);
}