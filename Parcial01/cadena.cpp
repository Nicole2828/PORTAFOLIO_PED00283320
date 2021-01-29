#include <iostream>
using namespace std;
 
 void muestra(string in, int i, int j){
     while(j >=i){
         cout << in[j];
         j--;
     }
 }

void invertir(string in){
    int aux = 0;
    for(int i = 0; i <= in.size(); i++){
        if(in[i] == ' ' or i == in.size()){
           muestra(in, aux, i-1);
        cout<<" ";
        aux = i+1; 
        }
    }
}
int main(){
    string in;
    cout<<"ESCRIBE UNA CADENA: "<< endl; getline(cin, in);
    cout<<endl<< "LA CADENA ES: "<<endl; invertir(in);

    return 0;

}    
