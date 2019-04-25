#include <stdarg.h>
#include <stdio.h>

/*this function will takce the number of values to average
 * followed by all of the numbers to average */

double average(int num,...)
{
	va_list arguments;
	double sum	 = 0;
	
	/* initializing arguments to store all values after num*/
	va_start (arguments,num);

	/*sum all the inputs;we will rely on the function caller to tell us 
	 * how many there are */
	for (int x=0;x<	num;x++)
	{
		sum += va_arg(arguments,double);
	}

	va_end(arguments);
	return sum/num;
}


int main()
{
	/* this computes the average of 12.2, 22.3 and 4.5(3 indicates the number of values to average)*/
	printf("%f\n",average(3,12.2,22.3,4.5));
/*here it computes he average of hte 5 values 3.3 ,2.2,1.1,5.5 andr 3.3*/
	printf("%f\n",average(5,3.3,2.2,1.1,5.5,3.3));
}
