// Author: Yan Lu yfl5541@psu.edu
// Collaborator: Finn Thompson fet5024@psu.edu
// Collaborator: Marco Falcucci mzf5527@psu.edu
// Collaborator: Samantha Nelson szn254@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  char *c = readline("Enter temperature in Celsius: ");
  double f;
  f = atof(c) * 9/5 + 32;
  printf("%.6f° in Celsius is equivalent to %.6f° Fahrenheit.\n", atof(c), f);
  return 0;
}