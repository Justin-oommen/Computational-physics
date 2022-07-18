//CompositParticle.cc

#include "CompositeParticle.h"
#include<iostream>
#include<string>
#include<list>


using std::cout;
using std::endl;
using std::list;
using std::string;
using std::ostream;


CompositeParticle::CompositeParticle(const string& name):Particle(name,0.){}

void CompositeParticle::add(Particle* part){
  particles_.push_back(part);
  TLorentzVector vec = fourMomentum();
  setMass(mass()+part->mass());
  set4Momentum(vec+part->fourMomentum());
}

void CompositeParticle::remove(Particle* part){
  particles_.remove(part);
  TLorentzVector vec = fourMomentum();
  setMass(mass()-part->mass());
  set4Momentum(vec-part->fourMomentum());
  
}


double CompositeParticle::energy() const{
  //CM energy (invariant mass)
  return sqrt(fourMomentum().E()*fourMomentum().E()-fourMomentum().P()*fourMomentum().P());
  
}

double CompositeParticle::momentum() const{
  //modulus of 3 momenta of CM
  return fourMomentum().P();
}

void CompositeParticle::print() const{
  cout<<"Composite Particle: "<<name()<<"made by: "<<endl;
  for(list<Particle*>::const_iterator i = particles_.begin(); i!= particles_.end(); ++i){
    (*i)->print();
  }
}


ostream& operator<<(ostream& os, const CompositeParticle& p){
  //using namespace std;
  os<<"Composite Particle: "<<p.name()<<"  #particles: "<<p.particles_.size()<<"\n Total mass: "<<p.mass()<<" GeV \t Momentum in CM: "<<p.momentum()<<" Gev \t CM energy: "<<p.energy()<<" Gev";

  return os;
}

CompositeParticle CompositeParticle::operator+(Particle& rhs) const{
  CompositeParticle sum("sum");
  for(list<Particle*>::const_iterator i = particles_.begin(); i!= particles_.end(); ++i){
    sum.add(*i);
  }

  sum.add(&rhs);
  return sum;
}

CompositeParticle CompositeParticle::operator+(CompositeParticle& rhs) const{
  CompositeParticle sum("sum");
  for(list<Particle*>::const_iterator i = particles_.begin(); i!= particles_.end(); ++i){
    sum.add(*i);
  }

  for(list<Particle*>::const_iterator i =rhs.particles_.begin(); i!= rhs.particles_.end(); ++i){
    sum.add(*i);
  }
  return sum;
}

CompositeParticle operator+(Particle& lhs, CompositeParticle& rhs){
  CompositeParticle sum("sum");
  sum.add(&lhs);
  for(list<Particle*>::const_iterator i = rhs.particles_.begin(); i!= rhs.particles_.end(); ++i){
    sum.add(*i);
  }
  return sum;
}

CompositeParticle operator+(Particle& lhs, Particle& rhs){
  CompositeParticle sum("sum");
  sum.add(&rhs);
  sum.add(&lhs);
  return sum;
}

