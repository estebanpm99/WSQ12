#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float factorial(float num){ //funcion que calcula un factorial
  float resp=0;
if (num==0) {
  resp=1;
}else{
  resp=num*factorial(num-1);
}
  return resp;
}
float calcularE(float precision){ //funcion que calcula e
float e=0,n=0,viejo,num;
do {
  viejo=e;
  num=1/factorial(n); //para calcular e se llama a la funcion anterior de factorial
  e+=num;
  cout<<"calculando e: "<<e<<endl;
  n++;
} while(abs(e-viejo)>precision);// se calcula hasta que se alcance la precision deseada por el usuario
  return e;  //se imprime e
}
int main(){
  float precision;
    cout<<"introduce la precision que quieres del numero de Eleuer"<<endl;
    cout<<"por ejemplo, si es .01 no va a ser muy preciso, pero si es .00000001 es muy preciso ";
    cin>>precision;
    cout<<"e, de acuerdo con tu precision, es: "<<calcularE(precision)<<endl;

  return 0;
}
