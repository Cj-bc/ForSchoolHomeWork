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


int main(void)
{
//============================== Set_Up ==========================================

 //Set Variables---------------------
	int decimal[257];
	int hexadecimal[257][2];

 //Set first_num---------------------
	int place = 0; //Changing point
	while(place <= 257)
	{
		for(i = 0;i <= 15;i ++)
		{
			hexadecimal[place][1] = i;
			place ++;
		}
	}

 //Set Second_num---------------------
	int secondplace = 0;
        for(i = 0;i <= 15;i ++)
        {
        	secondplace ++;
        }

	for(i = 1;i <= 15;i ++)
	{
		for(j = 0;j <= 15;j ++)
		{
			hexadecimal[secondplace][0] = i;
			secondplace ++;
		}
	}

 //====================== Main ===================================================

	

}

