#include <stdio.h>
#include <stdlib.h>

int main(void)

{

int whole_day, hour, minute, second, seconds_since_midnight, remaining_seconds, percentage_passed;

whole_day = 24 * 60 * 60; /* The amount of seconds in a whole day is 24 hours by 60 minutes by 60 seconds right? */
hour = 4;
minute = 20;
second = 11; /* 420 and 69 aren't really valid entries for the amount of seconds on a clock, also, why are 0s omitted? I will get to the bottom of this. */
seconds_since_midnight = hour * 60 * 60 + minute * 60 + second;
remaining_seconds = whole_day - seconds_since_midnight;
percentage_passed = (seconds_since_midnight * 100) / whole_day; /* Figuring out how to do this as a percentage confused me for a bit but I'm pretty sure I got it now. */

	printf("The time is %i:%i:%i\n\n", hour, minute, second);

	printf("It has been %i ", seconds_since_midnight);
	printf("seconds since midnight\n\n");

	printf("And there are %i ", remaining_seconds);
	printf("seconds left until the next day\n\n");

	printf("%i ", percentage_passed);
	printf("percent of the day has gone by\n");
	return(EXIT_SUCCESS);

/* I'm pretty sure my math is right, right? */
/* Man, math frustrates me. */

}
