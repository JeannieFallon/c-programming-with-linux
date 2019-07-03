// The function readDate() should read 3 integers from the user input. The first integer 
// is the year (a 4-digit number), the second integer is the month, and the third integer 
// is the day of the date being read. The function should store these three numbers in 
// the appropriate parts of the structure being passed into it.

// The function printDate() should print the date stored in the variable passed into it 
// in the following format: mm/dd/yyyy with a new line afterwards. So the month should 
// be printed with two digits (01, 02, 03, ..., 11, 12), the day should be printed as two 
// digits (01, 02, 03, ..., 30, 31), and the year should be printed as a 4-digit number.

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
  struct date today;
  readDate(&today);
  printDate(today);
  return 0;
}

// Write your readDate() and printDate() functions here
void readDate(struct date * datePtr) {
  scanf("%d", &(*datePtr).year);
  scanf("%d", &(*datePtr).month);
  scanf("%d", &(*datePtr).day);
}

void printDate(struct date dateObj) {
  printf("%02d/%02d/%d\n", dateObj.month, dateObj.day, dateObj.year);
}
