#include "Polynomial.h"
#include <iostream>


using std::cout;
using std::endl;

//Regular constructor to initialoze my private variables
Polynomial::Polynomial(const std::string& name, double degree, double value):Function(name){
  
  degree_ = degree;
  value_ = value;
  
}

//Polynomial::~Polynomial(){
  //delete coeff_;
  //delete degree_;
  //delete value_;

  //coeff_=0;
  //degree_=0;
  //value_=0;

  //cout<<"~Polynomial() called for name:"<< name() <<endl;
//}
/*
double Polynomial::value(double x) const{
  cout<< "input Polynomial constants: "<<endl;
  for (int i=0; i<=degree_; ++i){
    cout<<"coefficient "<< i << ":\t";
    co
    
  }
}
*/

/*
Trying to print out the polynomial
What I am trying to do is when I call the function print
(i) ask to give input which is the coefficients that we are assoscating with the polynomials 
(ii) Associate these coeffients to the polynomial(I'm thinking now to use a for loop)
(iii) Print the polynomial
*/

void Polynomial::print() const{
  std::vector<double> coeff;
  double mycoeff;
  std::cout<<"Input the coefficients"<<std::endl;
  for(int i=0; i<=degree_; ++i){
    std::cout<< "Coefficient "<< i << ":";
    std::cin>> mycoeff;
    coeff.push_back(mycoeff);
  }

  for(int a=0; a<=degree_; ++a){
    std::cout<< "The Polynomial function F(x) = ";
    if (a==0){
      std::cout<<coeff[a]<<"x^"<<a<<std::endl;
    }
    else if (a==degree_){
      std::cout<<coeff[a]<<"x^"<<a<<std::endl;
    }
    else{
      std::cout<<coeff[a]<<"x^"<<a<<"+"<<std::endl;
    }
  }
}

