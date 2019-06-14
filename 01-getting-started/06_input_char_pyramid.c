#include <stdio.h>

int main(void) {
    int i, j, k, l;
    char inputChar;
    char fillChar = '+';
    
    // input char that will form pyramic
    scanf("%c", &inputChar);
    
    for (i=1; i<6; i++) {
        for (j=0; j<5-i; j++) {
            printf("%c", fillChar);
        }
        for (k=0; k<(2*i-1); k++) {
            printf("%c", inputChar);
        }
        for (l=0; l<5-i; l++) {
            printf("%c", fillChar);
        }
        printf("\n");
    }

    return 0;
}
