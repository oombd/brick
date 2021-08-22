#include <stdio.h>
#include <cs50.h>

int one_eigth(void);

void pyramid(int h, int s);

int main(void)
{
    int h = one_eigth();
    pyramid(h, 0);
}

void pyramid(int h, int s)
{
    
    if (h == 0 && s > h)
    {
        return;
    }
  
    pyramid(h - 1, s + 1);
    
    for (int j = 0; j < s; j++)
    {
        printf(" ");
    }
    
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    
    printf("  ");
    
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }

    printf("\n");
}

int one_eigth(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}
