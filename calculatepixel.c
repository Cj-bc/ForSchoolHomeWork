/*
  !! For only THIS task.!!

   this work is
	*translate decimal to Hexadecimal
	*calculate quantity
	*discover possible combination

   Data: 2016/February/14th

*/

#include <stdio.h>
#include <stdlib.h>

//=====================Main=====================================================

int main(void)
{
 //Set Variables---------------------
	int decimal[257];
	int hexadecimal[2][257];

	int place = 0; //Changing point
	while(place <= 257)
	{
		for(i = 0;i <= 15;i ++)
		{
			hexadecimal[1][place] = (char)i;
			place ++;
		}
	}

}

