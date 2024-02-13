#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    printf("%d", b); // 将除数输出
    return 0;
}
