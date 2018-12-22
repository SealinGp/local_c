#include <stdio.h>

extern int ex;

void write (void)
{
    printf("write: %d ",ex);
    return;
}