#pragma once
#include "Header.h"

bool Changer(char Word[])
{
	if (strlen(Word) > 0)
	{
		for (int count = 0; count < strlen(Word); count++)
			Word[count] = toupper((unsigned char)Word[count]);
		return 1;
	}
	else
		return 0;
	
}