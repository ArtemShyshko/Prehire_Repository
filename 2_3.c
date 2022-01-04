#include <stdio.h>
#define MAX 100

int htol(char[]);

int main()
{
    char c, hex[MAX];
    for (int i = 0; i < MAX && (c = getchar()) != '\n'; ++i)
        hex[i] = c;
    printf("%d\n", htol(hex));
    return 0;
}

int htol(char h[])
{
    if (h[0] == '0' && h[1] == 'x' || 'X')
    {
        int i, l = 0;
        for (i = 1; i <= MAX; ++i)
        {
            if (h[i] >= 'A' && h[i] <= 'F')
                l = 16 * l + (10 + h[i] - 'A');
            else if (h[i] >= 'a' && h[i] <= 'f')
                l = 16 * l + (10 + h[i] - 'a');
            else if (h[i] >= '0' && h[i] <= '9')
                l = 16 * l + (h[i] - '0');
        }
        return l;
    }
    else
        return 0;
}