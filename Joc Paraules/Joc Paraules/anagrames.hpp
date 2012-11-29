
#ifndef _ANAGRAMES_HPP
#define _ANAGRAMES_HPP
#include <string>
#include <list>
#include <esin/error>
#include "diccionari.hpp"

using namespace std;

class anagrames {

public: 

  anagrames(const diccionari& D) throw(error);

  anagrames(const anagrames& A) throw(error);
  anagrames& operator=(const anagrames& A) throw(error);
  ~anagrames() throw();

  void mateix_anagrama_canonic(const string& a, list<string>& L) const throw(error);

  static const int NoEsCanonic = 21;

private:
  #include "anagrames.rep"
};
#endif
