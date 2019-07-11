#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <caesar.h>
#include <gen_test.h>

static int volatile a;

int main(void)
{
    check_magic_number();

    char str[] = "People of Earth";

    printf("Test 1: Shift with a negative input\n");
    if (a>0)
        gen_test(str, -a+1);
    else 
        gen_test(str, a-1);

    return 0;
}
