//Algoritmo de Euclides de forma recursiva//
//La funcion devolvera el mcd de dos numeros enteros//
/*
La diferencia entre iterativa y recursiva, es que la iteriva hace la repeticion de un conjunto de instrucciones 
en un solo programa. 
Mientras que la recursiva hace el uso de una sola instruccion o llamada en el programa.  
*/

#include <iostream>
using namespace std;

//Hacemos la declaracion del prototipo de la funcion que devuelve el mcd como el algoritmo de Euclides//
//De forma recursiva//
int mcd(int a, int b){
    if(b==0) return a; //La condicion de parada//
    else return mcd(b, a%b); //Hacemos la llamada recursiva//
}

//La funcion principal y declaramos variables//
int main(void){
    int a,b;
    cout<<"     CALCULAR EL MCD "<<endl;

    //En este paso tenemos que validar que "a" sea un numero entero positivo//

    do{
        cout<<"INGRESE EL PRIMER NUMERO: "<<endl;
        cin>>a;
        if(a<0)cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO \n ";
    } while(a<0);

    //Validaremos que "b" sea un numero entero positivo//

    do{
        cout<<"INGRESE EL SEGUNDO NUMERO: "<<endl;
        cin>>b;
        if(b<0) cout <<"\n INGRESE UN NUMERO ENTERO Y POSITIVO \n";
    }while(b<0);

    if(a>b) cout<<"EL MCD ES = "<<mcd(a,b);
    else if (b>a) cout<<"EL MCD ES = "<<mcd(b,a);

    return 0;

}
