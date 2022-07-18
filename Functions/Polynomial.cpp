//Polynomial.cpp
#include<iostream>
#include "Function.h"
#include "Polynomial.h"


int main(){

  Function* p1 = new Polynomial("Polynomial", 2, 2);
  p1->print();

  delete p1;

  return 0;
}
