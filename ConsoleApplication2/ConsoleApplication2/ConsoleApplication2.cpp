// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <math.h>

/*
//wartosc bezwgledna
/int main()
{
	int a;
	printf("podaj liczbe a\n");
	scanf("%d", &a);
	if (a >= 0)
		printf("%d", a);
	else
		printf("%d\n", a*(-1));

    return 0;
}
*/

/*
//silnia
int main()
{
	int n, silnia, i;
	silnia = 1;
	printf(" podaj liczbe n ");
	scanf("%d", &n);
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			silnia = silnia * i;
		}
		printf(" silnia %d", silnia);
	}
	else if (n < 0)
		printf("liczba jest ujemna");

	else 
		printf(" silnia  1");

			return 0;

}
*/

/*
int main()
// petle: wypisuje od a do b

{
	int a, b, i;
	printf("podaj libe a: ");
	scanf("%d", &a);
	printf("podaj liczbe b: ");
	scanf("%d", &b);
	for (i = a; i <= b; i++)
		printf("%d\n", i);
	return 0;
}
*/
/*
int main()
{

	int a, b;
	printf("podaj libe a: ");
	scanf("%d", &a);
	printf("podaj liczbe b: ");
	scanf("%d", &b);
	while (a <= b)
	{
		printf("%d\n", a);
		a++;
	}

	return 0;
}
*/

/*
//repaat until, do while
int main()
{
	int a, b;
	printf("podaj libe a: ");
	scanf("%d", &a);
	printf("podaj liczbe b: ");
	scanf("%d", &b);
	do
	{
		printf("%d\n", a);
		a++;
	} 
	while (a <= b);

		return 0;
}

*/
/*
int main()
//czy x jest >= y; czy sa parzyste; co najmniej jedna z liczb jest podzila przez 3, ale nie podziena przez 9, wypisz komunikat tak lub nie
{
	int x, y;
	printf("podaj libe x: ");
	scanf("%d", &x);
	printf("podaj liczbe y: ");
	scanf("%d", &y);
	if (x >= y)
		printf("x jest wieksze lub rowne y\n");
	else
		printf("x jest mniejsze od y\n");
	if (x % 2 == 0 && y % 2 == 0)
		printf("x i y sa parzyste");
	else
		printf("x i y nie sa parzyste\n");
	if ((x % 3 == 0 && x % 9 != 0) || (y % 3 == 0 && y % 9 != 0))
		printf("TAK");
	else
		printf("NIE");
	return 0;
}
*/
/*
int main()
// rozwiazanie rownia kwadratowego ax^2 +bx +c
{
	float a, b, c, delta;
	printf("podaj libe a: ");
	scanf("%f", &a);
	printf("podaj liczbe b: ");
	scanf("%f", &b);
	printf("podaj liczbe c: ");
	scanf("%f", &c);
	delta = (b * b) - (4 * a * c);
	if (delta > 0)
	{
		float pierw, x1, x2;
		pierw = sqrt(delta);
		x1 = (-b + pierw) / (2 * a);
		x2 = (-b - pierw) / (2 * a);
		printf("x1 = %f x2 = %f", x1, x2);
	}
	else if (delta == 0)
	{
		float x;
			x = -b / (2 * a);
		printf("x = %f", x);
	}
	else
		printf("brak rozwiazan");
	return 0;
	
}
*8/
/
int main()
//podaj dzielniki naturalne liczyby calkowitej dodatniej n
{
	int n, , i;
	i = 1;

	printf("podaj liczbe n: ");
	scanf("%d", &n);
	while (i <= n)
	{
		if (n % i == 0)
		{
		printf("%d", i);
		}
		i++;

	}

	
	

	return 0;
}
*/
/*
int main()
{
	//algorytm ktory sprawdzi czy dana liczba jest doskonala
	int n, suma, i;
	suma = 0;
	printf("podaj liczbe n: ");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
			suma = suma + i;
	}
	if (suma == n)
		printf("liczba jest doskonala");
	else
		printf("liczba nie jest doskonala");
	return 0;

}
*8/
/
int main()
//algorytm znajdujacy wszytkie liczy 5-cyfrowe o sumie cyfr rownej 21
{
	
	int i;

	
	for (i = 10000; i < 100000; i++)
	{
		int s = 0;
		int r = 0;
		int n = i;

		while (n > 0)
		{
			r = n % 10;
			s = s + r;
			n = n / 10;
		}

	
		if (s == 21)
		{
			printf("Liczba: %d\n", i);
		}
	}
	return 0;
}


/*
int main()

//oblicz liczbe dzielnikow naturalnych liczyby calkowitej dodatniej n
{
int n, dzielniki, i;
dzielniki = 0;
printf("podaj libe n: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
if (n % i == 0)
dzielniki = dzielniki + 1;

}

printf("liczba n ma %d dzielniki", dzielniki);

return 0;
}
*/
/*
int main()
{
	float a, b, wyrazenie;
	printf("podaj libe a: ");
	scanf("%f", &a);
	printf("podaj liczbe b: ");
	scanf("%f", &b);
	if ((a*a - b*b) != 0)
	{
		wyrazenie = (a + 1) / (a*a - b*b);
		printf("%f", wyrazenie);
	}
	else
		printf("nie mozna dzielic przez 0");

		return 0;
}
*/

int main()
{
	int n = 7;

	int suma = 0;
	int A[7] = { 1, 3, 4, 6, 2, 4, 6};

	for (int i = 0; i < n; i++) {
		suma += A[i];
	}

	printf("%d\n", suma);
	
	return 0;
}