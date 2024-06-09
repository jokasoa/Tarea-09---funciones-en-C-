//Fecha: 06/6/2024
//Autor: Jeremy Novoa
#include <iostream>
using namespace std;
 
 void TablaMultiplicar (int tabla)
 {
    cout <<endl<<"Tabla de Multiplicar del"<<tabla;
    for (int k=1 k<=1; k++)
    {
        cout<<endl<<tabla <<"x" << k << "=" << tabla*k;

    }
 }
 //diseñe la funcion que imprima una tabla de multiplicar
 //La funcion recibe como parametros 3 enteros: el primero es la tabla,
 //el segundo es el limite inferior, y el tercer es el limite superior
 void TablaLimites(int tabla, int inicio, int fin)
 {

 }

 int main()
 {
     cout<<endl<<"Funcion que calcula una tabla de multiplicar";
     TablaMultiplicar (5);
     TablaMultiplicar (8);
     TablaMultiplicar (12);
     TablaMultiplicar (6);
     //pida al usuario la tabla que desea imprimir 
     int num;
     cout<<endl<<"Ingrese la tabla que desea calcular: ";
     cin>num;
     TablaMultiplicar (num);

     TablaLimites (5,10,15);
     TablaLimites (2,5,12);
     return 0;


 }