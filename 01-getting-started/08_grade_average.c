#include <stdio.h>

int main(void) {
    int numGrades, grade;
    int sum = 0;
    
    // input number of grades to be entered
    scanf("%d", &numGrades);
    
    // input & sum each grade
    int i = 0;
    for (i=0; i<numGrades; i++) {
        scanf("%d", &grade);
        sum += grade;
    }
    
    // output average of grades
    printf("%.2lf\n", (double)sum/numGrades);
    
    return 0;
}
