#include <stdio.h>

void Br(void);
void ic(void);

int main(void)
{
    Br();
    printf(" India, China\n");
    ic();
    printf("Brazil, Russia");
    return 0;
}

void Br(void)
{
    printf("Brazil, Russia,");
}
void ic(void)
{
    printf("India, China\n");
}