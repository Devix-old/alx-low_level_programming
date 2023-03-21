#include "main.h"
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there*/
/**
 * This fuction return 1 if the input is lower 
 * and return 0 if it is not
 * Return: 1 or 0
 */  
int _islower(int c){
    if (c >= 'a' && c <= 'z')
    	return(1);
    else
    	return(0);
}
