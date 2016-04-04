#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED
void sumar(int,int);
void restar(int,int);
void multiplicar(int,int);
void dividir(int,int);
int factorial(int);


void sumar(int x,int y)
{
	int respuesta;
	respuesta=x+y;
	printf("\n--------------------------------");
	printf("\nLa suma es %d",respuesta);
	printf("\n--------------------------------\n");
}

void restar(int x,int y)
{
	int respuesta;
	respuesta=x-y;
	printf("\n--------------------------------");
	printf("\nla Resta es %d",respuesta);
	printf("\n--------------------------------\n");
}

void multiplicar(int x,int y)
{
	int respuesta;
	respuesta=x*y;
	printf("\n--------------------------------");
	printf("\nLa Multiplicacion es %d",respuesta);
	printf("\n--------------------------------\n");
}

void dividir(int x,int y)
{
	int respuesta;
	respuesta=x/y;
	printf("\n--------------------------------");
	printf("\nLa division es %d",respuesta);
	printf("\n--------------------------------\n");
}

int factorial(int x)
{
    if(x==1 || x==0)
    {
            return 1;
    }else {
              return x*factorial(x-1);

          }
}
