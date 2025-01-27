//class Particle.h
#ifndef Particle_h
#define Particle_h

#include<string>
#include<iostream>
#include "TLorentzVector.h"

using std::string;
using std::ostream;

class Particle{

 public:

 //Constructor
 
 //name and 4-momentum given, we can find mass using this constructor
 Particle(const string& name, const TLorentzVector& momentum);
 
 //Given mass and 3-momentum we can find 4 momentum
 Particle(const string& name, const double& mass, const double& px=0., const double& py=0., const double& pz=0. );

  //Setter
  void setName(const string& name);
  void setMass(const double& mass);
  void set4Momentum(const TLorentzVector& momentum);
  void set3Momentum(const double& px, const double& py, const double& pz);

  //getter
  string name() const {return name_;}
  double mass() const {return mass_;}
  virtual TLorentzVector fourMomentum() const {return momentum_;}
  virtual double energy() const;
  virtual double momentum() const;
  virtual void print() const;
  
  //overloading
  friend ostream& operator<<(ostream& os, const Particle& p);

  
 private:
  string name_;
  double mass_;
  TLorentzVector momentum_;

};


#endif
