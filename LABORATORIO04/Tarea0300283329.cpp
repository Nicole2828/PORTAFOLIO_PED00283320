#include <iostream>
using namespace std;


struct nodo{
    int dato;
    nodo* sig;
    nodo* atras;
    nodo* pares = NULL;
    nodo* impares = NULL;
} *primero, *ultimo;

void insertarNodo();
void desplegarNodos();
void eliminarNodoSimple();
void mostrarNumPares();
void mostrarNumImpares();
void eliminarNodoDoble();

int main(){
    int opcion = 0;
    do{
        cout<< "\n       *MENU*     \n"<<endl;
        cout<< "1. Ingresar datos: "<<endl;
        cout<< "2. Mostrar lista: "<<endl;
        cout<< "3. Eliminar nodo(lista simple): "<<endl;
        cout<< "4. Mostrar numeros pares: "<<endl;
        cout<< "5. Mostrar numero impares "<<endl;
        cout<< "6. Eliminar nodo(lista doble): "<<endl;
        cout<< "0. Salir: "<<endl;
        cout<< "Ingrese una opcion: "; 
        cin >> opcion; 
    
        cin.clear(), cin.ignore(1000, '\n');

        switch(opcion){
            case 1:
            cout<< " Inserte datos de nodo: ";
            insertarNodo();
            break;
            case 2:
            cout<< " Mostrando lista de nodos: ";
            desplegarNodos();
            break;
            case 3:
            cout<< " Eliminar un nodo de la lista: ";
            eliminarNodoSimple();
            break;
            case 4:
            cout<< " Monstrando numeros pares: ";
            mostrarNumPares();
            break;
            case 5: 
            cout<<" Mostrando numeros impares: ";
            mostrarNumImpares();
            break;
            case 6:
            cout<< " Eliminar dato de nodo(doble): ";
            eliminarNodoDoble();
            break;
            default:
            cout<< " Opcion no valida ";
            break;
        }  
    }while (opcion != 0);
    return 0;
}

void insertarNodo(){
    nodo* nuevo = new nodo();
    cout<< "Ingrese datos en lista: "<<endl;
    cin>> nuevo->dato;

    if(primero ==NULL){
        primero = nuevo;
        primero->sig = NULL;
        ultimo = nuevo;
    }else{
        ultimo->sig = nuevo;
        nuevo->sig = NULL;
        ultimo = nuevo;
    }

    cout<< " NODO INGRESADO "<<endl;
}

void desplegarNodos(){
    nodo* actual = new nodo();
    actual = primero;
    if(primero!=NULL){
        while(actual!=NULL){
            cout<< " "<< actual->dato<<endl;
            actual = actual->sig;
        }
    }else{
        cout<< " LA LISTA SE ENCUENTRA VACIA "<<endl;
    }

}

void eliminarNodoSimple(){
    nodo*actual = new nodo();
    actual = primero;
    nodo* anterior = new nodo();
    anterior = NULL;
    bool encontrado = false;
    int nodoBuscado = 0;
    cout << "Ingrese el dato del nodo para eliminar: "<<endl;
    cin>> nodoBuscado;
    if(primero != NULL){
        while(actual !=NULL && encontrado !=true){
            if(actual-> dato == nodoBuscado){
                cout<< " NODO CON EL DATO "<<nodoBuscado<< " ENCONTRADO: ";
                
                if(actual == primero){
                    primero =primero->sig;
                }else if(actual == ultimo){
                    anterior->sig = NULL;
                    ultimo = anterior;
                } else{
                    anterior->sig = actual->sig;
                }

                cout << "  NODO ELIMINADO CON EXITO  "<<endl;

                encontrado = true;
            }
            anterior = actual;
            actual = actual->sig;
        }
        if(!encontrado){
            cout<< "  NODO NO ENCONTRADO "<<endl;
        }
    }else{
        cout<< " LA LISTA ESTA VACIA "<<endl;
    }
}

void mostrarNumPares(){
    int pares = 0;
    if(primero==NULL){
        while(primero!=NULL){
            if(primero->dato %2==0){
                primero->sig=primero;
                primero = primero->sig;
                pares++;
            }
        }
    }  
}

void mostrarNumImpares(){
    int impares = 0;
    if(primero==NULL)
    while(primero!=NULL){
        if (primero->dato%2!=0){
            impares++;
        }
    }

}

void eliminarNodoDoble(){
    nodo* actual = new nodo();
    actual = primero;
    nodo* anterior = new nodo();
    anterior = NULL;
    bool encontrado = false;
    int nodoBuscado = 0;
    cout<< "Ingrese el dato del Nodo a Eliminar: ";
    cin>>nodoBuscado;
    if(primero!=NULL){

        while(actual!=NULL && encontrado!=true){
            if(actual->dato == nodoBuscado){
                cout<< "NODO CON EL DATO ("<<nodoBuscado<<") ENCONTRADO ";

                if(actual==primero){
                    primero = primero->sig;
                    primero->atras = NULL;
                }else if(actual==ultimo){
                    anterior->sig = NULL;
                    ultimo = anterior;
                }else{
                    anterior->sig = actual->sig;
                    actual->sig->atras = anterior;
                }
                cout<< " NODO ELIMINADO CON EXITO "<<endl;
                encontrado = true;
            }
            anterior = actual;
            actual = actual->sig; 
        }
        if(!encontrado){
            cout<< " NODO NO ENCONTRADO "<<endl;
        }
    }else{
        cout<< " LA LISTA ESTA VACIA "<<endl;
    }

}

        