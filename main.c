/**
 * @file main.c
 * @brief content tipes 
 * @param void
 * @return void
 * @authro gabeli
 * @version v1.0.10
 * @date 2019.4.18
 * @since gabeli 01
 * @bug null
 * @warning do not modify
 * */
 
#include <stdio.h>
#include <math.h>
int ExFunc1(int a,char b);


void main(void ){	
	printf("hello world!\n");
	printf("xxx :%d\n",ExFunc1(1,'a'));
	char str[80];

	sprintf(str,"value of pi =%f",M_PI);
	puts(str);
	return;

}
	
/***
 * introduce funcion
 *@param a add param
 *@param b add param
 *@return result
 * */
int ExFunc1(int a,char b)
{
	return a+b;
}


