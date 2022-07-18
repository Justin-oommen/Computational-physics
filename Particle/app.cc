//app.cc
//to compile and link the executable do:
//  g++ -o app app.cc Particle.cc CompositeParticle.cc `root-config --libs --cflags`

#include<iostream>
#include "Particle.h"
#include "CompositeParticle.h"

using std::cout;
using std::endl;

int main(){
  /*
  Particle* p1 = new Particle("pion",0.14,0,0,0);
  Particle* p2 = new Particle("kaon",0.50,0,0,0);

 CompositeParticle* H = new CompositeParticle("Higgs");
  H->add(&p1);
  H->add(&p2);

  H->mass();
  cout<<H<<endl;
    
  delete p1;
  delete p2;
  delete H;
  */

  Particle pion("Pion",0.14,0.,0.,0.);
  Particle kaon("Kaon",0.50,0.,0.,0.);

  CompositeParticle d0=pion+kaon;
  d0.SetName("D0");

  cout<<d0<<endl;
  
  return 0;
}
