

#ifndef _DICCIONARI_HPP
#define _DICCIONARI_HPP
#include <string>
#include <list>
#include <vector>
#include <esin/error>
#include <esin/util>

using namespace std;
using util::nat;

class diccionari {

public: 

  diccionari() throw(error);       

  diccionari(const diccionari& D) throw(error);        
  diccionari& operator=(const diccionari& D) throw(error); 
  ~diccionari() throw();      

  void insereix(const string& p) throw(error);

  string prefix(const string& p) const throw(error);

  void satisfan_patro(const vector<string>& q, 
                      list<string>& L) const throw(error);

  void llista_paraules(nat k, list<string>& L) const throw(error);

nat num_pal() const throw();

private:
  #include "diccionari.rep"
};
#endif
