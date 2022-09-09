/* I dunno what #include, <stdio.h>, <stdlib.h>, int main or (void) are yet. I'll totally learn this */
#include <stdio.h> /* I figure "std" means standard and "io" is input/output. does ".h" mean header? What is a header anyway? */
#include <stdlib.h> /* And I figure "lib" means library, I don't even know what a library is other than a place for nerds */

int main(void)
{
	printf("Hello Natalie, you look so good in that hat, why don't you give me lots of kiss?\n\n");

int day, month, year;

day = 6;
month = 9;
year = 420; /*69420 lmao*/

	printf("If you're a hollerin'-tootin' pork-eatin' gun-shootin' yankee doodle odds are you'll print the date like:\n");
	printf("%i" "/" "%i" "/" "%i" "\n\n", month, day, year);

	printf("But if you're snooty Euro-trash then it's more like this:\n");
	printf("%i" "." "%i" "." "%i" "\n\n", day, month, year);

	printf("But real mad dog Aussie battlers tell the date like this:\n");
	printf("YE YE G'DAY M8, DATE'S BLOODY 69 IN THE ANCIENT YEAR OF 420\n");

	return(EXIT_SUCCESS); /*wat?*/
}
