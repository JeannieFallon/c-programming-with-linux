// You are still teaching a class on C-programming! You would like to find out whether the students 
// in your class did better on the most recent assignment than the students in your colleagues' 
// classes. The average grades of all these classes are stored in a file called "gradeComparison.txt". 
// The first number stored in the file represents the average grade of the students in your class. 
// All of the subsequent numbers represent the average grades of students from other sections.

// Your job is to find out whether the students in your class did better than the students in the 
// other classes and if so, print out the word "Yes". If on the other hand students in another 
// class did better than your students then you should print out "No", followed by one space, 
// followed by the number of the first class in the file that had a better grade average.

#include <stdio.h>

int main(void) {
	
	FILE *gradesFile;
	double myAvg, otherAvg;
	int ctr;
	int isHighest;
	
	gradesFile = fopen("gradeComparison.txt", "r");
	fscanf(gradesFile, "%lf", &myAvg);
	
	ctr = 1;
	isHighest = 1;
	while (fscanf(gradesFile, "%lf", &otherAvg) != EOF) {
		ctr++;
		if (otherAvg > myAvg) {
			isHighest = 0;
			printf("No %d\n", ctr);
			break;
		}
	}
	
	fclose(gradesFile);
	
	if (isHighest) {
		printf("Yes\n");
	}
	
	return 0;
}

