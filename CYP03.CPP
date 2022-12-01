#include <stdio.h>
int main()
{
	int dia, mes, ano;

	scanf_s("%i %i %i", &dia, &mes, &ano);

	if (dia > 0 && dia < 32)
	{
		if (dia >= 30 || dia==29)
		{
			//dia++;
			dia = 0;
			//dia++;
			mes++;

		}
		else

			if (dia == 31 || dia == 28)
			{
				dia = 0;
				dia++;
				mes++;
			}
	
		if (mes >= 1 && mes <= 12)
		{
			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
			{
				dia == 31;

			}
			if (mes == 2)
			{
				dia == 28;

			}
			else
				if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
				{
					dia == 30;

				}
			if (ano >= 0 && ano <= 3000)
			{
				dia++;
				printf_s("%2i %2i %4i", dia, mes, ano);

			}
		}
	}
	return 0;
}
