
#ifndef _OBTE_PARAULES_HPP
#define _OBTE_PARAULES_HPP
#include <list>
#include <string>
#include <esin/error>
#include <esin/util>
#include "anagrames.hpp"

using namespace std;
using util::nat;

namespace obte_paraules {

  void obte_paraules(nat k, const string& s, const anagrames& A,
                     list<string>& paraules) throw(error);

  void obte_paraules(const string& s, const anagrames& A,
                     list<string>& paraules) throw(error);

  static const int LongitudInvalida = 41;
};
#endif
