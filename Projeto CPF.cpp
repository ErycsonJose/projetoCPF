
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>


int main ()
{
	char cpf[23];
	int i = 0, j, s1 = 0, d1, s2 = 0, d2;
	setlocale(LC_ALL, "portuguese");
	printf("digite seu CPF: (sem ponto e hífen)\n");
	fgets(cpf,23,stdin);
	int a = (strlen(cpf));
	if (a != 12)
	{
		printf("CPF inválido\n");
		
	}
	else 
		if ((strcmp(cpf, "00000000000")==0)||(strcmp(cpf,"11111111111")==0)||(strcmp(cpf,"22222222222")==0)||(strcmp(cpf,"33333333333")==0)||(strcmp(cpf,"44444444444")==0)||(strcmp(cpf,"55555555555")==0)||(strcmp(cpf,"66666666666")==0)||(strcmp(cpf,"77777777777")==0)||(strcmp(cpf,"88888888888")==0)||(strcmp(cpf,"99999999999")==0))
	    {
		printf("CPF inválido\n");
		
    	}
		else 
		    {
			for (i=0, j = 10; i < 9; i++, j--) 
			{
				s1 += (cpf[i]-'0') * j;
			}
			d1 = s1 % 11;
			if (d1 < 2)
			{
				d1 = 0;
			}
			else
			{
				d1 = 11 - d1;
			}
			if ((cpf[9] - '0') != d1)
			{
				printf("CPF inválido\n");
				
		    }
			else
			{
				for (i=0, j = 11; i < 10; i++, j--)
				{
					s2 += ((cpf[i] - '0') * j);
				}
				d2 = s2 % 11;
				if (d2 < 2)
				{
					d2 = 0;
				}
				else
				{
					d2 = 11 - d2;
				}
				if ((cpf[10] - '0') != d2)
				{
					printf("CPF inválido\n");
				
				}
				else
				{
					printf("Operação realizada com sucesso CPF valido\n");
				}
			}
		}
	system("pause");
	return 0;
}

