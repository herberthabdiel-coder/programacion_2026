#include "Custom_stack.h"
#include <iostream>
ursing namespace std;

CustomStack::CostomStack(){

}

CustomStakc::~CustomStack(){

}

bool CustomStack::empty()[
    return datos.empty();

]

int CustomStack::size()[
    return datos.size();

]

int CustomStack::top(){
    if (empty()){
        throw std::out<<("la pila esta vacia");
        return -1;
    }
    return datos.back();

}

void CustomStack::push(int valor){
    datos.push_back(valor);

}

void CustomStack::pop(){
    if (empty()){
        std::out<<(la pila esta vacia);


    }
}
datos.pop_back();{
    
}