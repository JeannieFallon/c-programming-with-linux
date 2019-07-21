// You are teaching a class on C-programming! You would like to find out whether your teaching 
// has been effective, and so you need to compute the average grade your students have received 
// on the most recent assignment. These grades (integers) are stored in the file studentGrades.txt.

// The first entry in the file (an integer) is the number of student grades that are stored in the 
// file. Your job is to calculate and print out the average of the grades stored in the file. Please 
// print the average grade with two decimal places.

#include <stdio.h>

int main(void) {
	
	FILE *gradesFile;
	int numGrades, grade, i;
	double sum = 0;
	
	gradesFile = fopen("studentGrades.txt", "r");
	fscanf(gradesFile, "%d", &numGrades);
	
	for (i=0; i<numGrades; i++) {
		fscanf(gradesFile, "%d", &grade);
		sum += grade;
	}
	
	fclose(gradesFile);
	
	// print average
	printf("%.2lf\n", sum/numGrades);
}

