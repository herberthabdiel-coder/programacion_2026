#include "circulo.h"
#include <iostream>
using namespace std;
 

circulo::circulo(string nombre, double radio)
       :figura(nombre){
        this->radio =radio,
       }


       circulo::circulo(){
        //vacio
       }


       double circulo::calcularArea(){
        returm 3,1416 * radio * radio;


       }
       void circulo::describir() {
        cout << "figura:circulo, radio:" <<radio <<end1;
       }

       double circulo::obtenRadio() {
        return radio;
       }
       

