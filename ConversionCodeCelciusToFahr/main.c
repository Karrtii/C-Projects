#include <stdio.h>
/* print Celsius-Fahrenheit table
 for celsius= 0, 20, ..., 300 */
main()
{
 int fahr, celsius;
 int lower, upper, step;
 lower = 0; /* lower limit of temperature scale */
 upper = 300; /* upper limit */
 step = 20; /* step size */
 celsius= lower;
printf("Celsius\tFahr\n");
 while (celsius<= upper) {
 fahr = celsius * (1.8) + 32;

 printf("%d\t%d\n", celsius, fahr);
 celsius = celsius + step;
 }
}