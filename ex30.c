#include <stdio.h>

int caio(int c);
int calado(int k);
int nmrn(int x);
int wesley(int x);//declaração da função Wesley entrada inteira x
int ruben(int x);	

int main(void)
{
	int i=1;
	i = nmrn(i);
	i = wesley(i);
	i = ruben(i);
	return 0;
}

int calado(int k)
{
	return k+3;
}

int nmrn(int x)
{	
	return x-1;
}

int wesley(int x)//função wesley, recebe initeiro
{
	        return x*157; //retorna o numero inteiro de entrada multiplicado a 157
}


int ruben(int x)
{
	return x+1;
}

int caio(int c)
{
	return c+10;
}
