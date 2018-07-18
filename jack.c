#include <stdio.h>
int main()
{
double num;
printf("Enter a num: ");
scanf("%lf", &num);
if (num < 0.0)
printf("You entered a negative num.");
else if ( num > 0.0)
printf("You entered a positive num.");
else
printf("You entered 0.");
return 0;
}
