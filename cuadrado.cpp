//Fecha: 2024-06-06
//Autor:Kleber Posligua
//Diseñe la funcion que recibe como parametro un entero,y
//calcula el cuadrado entero.
#include <iostream>
using namespace std;




int CuadradoNum (int num) //funcion definida por el usuario


{
    int res;
    res = num*num;
    return res;


}

int main()
{
    int num2;
        cout <<endl<<"calculo del cuadrado de un numero";
        int x = CuadradoNum (10) ; //Llama a la funcion cuadrado
        x = x*2 + (x/3);
        cout<<endl<<"El cuadrado de 10 es:" << x;
        cout<<endl<<"El cuadrado de 12 es:" <<CuadradoNum (12);      
        cout<<endl<<"El cuadrado de 15 es:" <<CuadradoNum (15);
         cout<<endl<<"El cuadrado de 9 es:" <<CuadradoNum (9);
         cout<<endl<<"El cuadrado de 25 es:" <<CuadradoNum (25);
         //Pida al usuario que desea elevar el cuadrado
         cout<<endl<<"Ingrese el numero que desea elevar";
         cin>>num2;
         cout<<endl<<"El cuadrado de : "<<num2<<" es: "<<CuadradoNum(num2);
         x=Cuadradonum (CuadradoNum (3));
         cout<<endl<<"El cuadrado del cuadrado es:" <<x;


         return 0;
    






        

    
}