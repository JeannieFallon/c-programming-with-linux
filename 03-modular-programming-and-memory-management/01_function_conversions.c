// Write a C-program that converts metric measurements to imperial system values. 
// Measurements are provided to your program in meters, grams or degrees Celsius 
// and must be converted to feet, pounds and degrees Fahrenheit, respectively.

// Here are the conversion rules to use:
//  1 meter = 3.2808 feet;
//  1 gram = 0.002205 pounds;
//  temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

// On the first input line you are given the number of conversions to be made. 
// Each of the following lines contains a value to be converted as well as its unit: 
// m, g or c (for meters, grams or degrees Celsius). There will be a space between 
// the number and the unit. You should print your output value for each input line 
// immediately after calculating it (ie, you do not have to wait until you have 
// read all inputs).

// Display the converted values with 6 decimal places, followed by a space and their unit: 
// ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should 
// be printed on its own line, and you should store and display all decimal values as doubles.

#include <stdio.h>

double convertToFeet(double);
double convertToPounds(double);
double convertToFahrenheit(double);

int main(void) {
  int numConversions, i;
  double value;
  char unit;
  char meters = 'm';
  char grams = 'g';
  
  scanf("%d", &numConversions);
  
  for (i=0; i<numConversions; i++) {
    scanf("%lf %c", &value, &unit);
    if (unit == meters) {
      printf("%lf ft\n", convertToFeet(value));
    } else if (unit == grams) {
      printf("%lf lbs\n", convertToPounds(value));
    } else {
      printf("%lf f\n", convertToFahrenheit(value));
    }
  }
  
  return 0;
}

double convertToFeet(double value) {
  return value * 3.2808;
}

double convertToPounds(double value) {
  return value * .002205;
}

double convertToFahrenheit(double value) {
  return 32 + 1.8 * value;
}
