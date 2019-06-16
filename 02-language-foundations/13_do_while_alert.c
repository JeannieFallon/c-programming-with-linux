// Your program should first read two integers representing the minimum and maximum 
// safe temperatures. Next, your program should continuously read temperatures 
// (integers) that are being provided by the device. Once the chemical reaction 
// is complete the device will send a value of -999, indicating to you that 
// temperature readins are done. For each recorded temperature that is in the 
// correct range (it could also be equal to the min or max values), your program 
// should display the text "Nothing to report". But as soon as a temperature 
// reaches an unsafe level your program must display the text "Alert!" and stop 
// reading temperatures (although the device may continue sending temperature values).

#include <stdio.h>

int main(void) {
  int minTemp, maxTemp, currTemp;
  int isAlertOrStop = 0;
  int stopVal = -999;
  
  scanf("%d%d", &minTemp, &maxTemp);
  
  do {
    scanf("%d", &currTemp);
    if (currTemp >= minTemp && currTemp <= maxTemp) {
      printf("Nothing to report.\n");
    } else {
      isAlertOrStop = 1;
      if (currTemp != stopVal) {
        printf("Alert!\n");
      } 
    }
  } while (!isAlertOrStop);
  
  return 0;
}
