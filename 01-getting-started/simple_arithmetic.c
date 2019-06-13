#include <stdio.h>

int main(void) {
    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!\n", 25-23, (25-23)*60*24, ((25-23)*60*24)*60);
    return 0;
}
