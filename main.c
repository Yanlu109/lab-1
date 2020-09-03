// Author: Yan Lu yfl5541@psu.edu
// Collaborator: Finn Thompson fet5024@psu.edu
// Collaborator: Marco Falcucci mzf5527@psu.edu
// Collaborator: Samantha Nelson szn254@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  char *Cel = readline("Enter temperature in Celsius: ");

  double Celsius = atof(Cel);
  double Fahrenheit = (Celsius * 9/5) + 32;

  printf("%f", Celsius);
  printf("° in Celsius is equivalent to %f° Fahrenheit.\n", Fahrenheit);
  return 0;
}