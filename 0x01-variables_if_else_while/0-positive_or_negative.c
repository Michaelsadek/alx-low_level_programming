#include <stdio.h>
#include <time.h>
#include <stdib.h>
/*more headers goes there*/
/*betty style foc for function main goes there*/

int main (void)
{
	int x;
		srand (time(0));
		x =rand() - RAND_MAX / 2;
		if (x >0 )
			printf("%d is positive\n",x);
		else (x==0)
			printf("%d is zero\n",x);
		if (x<0)
				printf("%d is negitive\n",x);
		return (0);
}
