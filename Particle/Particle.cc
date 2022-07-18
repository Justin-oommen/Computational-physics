//Particle.cc


#include<string>
#include<iostream>
#include"Particle.h"

using std::string;
using std::cout;
using std::endl;
using std::ostream;


Particle::Particle(const string& name, const TLorentzVector& momentum){
  name_ = name;
  mass_ = sqrt(momentum.E()*momentum.E()-momentum.P()*momentum.P()); // M = sqrt(E^2 - P^2)
  momentum_ = momentum;
}

Particle::Particle(const string& name, const double& mass, const double& px, const double& py, const double& pz){
  name_ = name;
  mass_ = mass;
  momentum_ = TLorentzVector(px,py,pz,sqrt(mass*mass+px*px+py*py+pz*pz)); 
}

void Particle::setName(const string& name){
  name_=name;
}

void Particle::setMass(const double& mass){
  mass_=mass;
}

void Particle::set4Momentum(const TLorentzVector& momentum){
  momentum_ = momentum;
}

void Particle::set3Momentum(const double& px, const double& py, const double& pz){
  momentum_ = TLorentzVector(px,py,px,sqrt(mass_*mass_+px*px+py*py+pz*pz));
}

double Particle::energy() const{
  return momentum_.E();
}

double Particle::momentum() const{
  return momentum_.P();
}

void Particle::print() const{
  cout<<"Particle: "<<name_<<"\t mass:"<<mass_<<" Gev \t momentum:"<<momentum()<<" Gev"<<endl;
}

ostream& operator<<(ostream& os, const Particle& p){
  using namespace std;
  os<<"Particle: "<<p.name()<<"\t mass: "<<p.mass()<<" Gev \t momentum: "<<p.momentum()<<" GeV \t Energy: "<<p.energy()<<" GeV ";
  return os;
}
