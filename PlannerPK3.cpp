// codepage:¹æê³ñóœ¿Ÿ¥ÆÊ£ÑÓŒ¯
#include <iostream>
#include"Data.h"
#include "Task.h"
#include "Contact.h"
#include <locale.h>
#include "Application.h"
int main()
{
	setlocale(LC_CTYPE, "Polish");
	Application Planer;
	while(Planer.Start())
	{
		system("cls");
	}
	return(0);	
}


