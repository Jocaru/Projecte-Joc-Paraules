#ifndef _ITER_SUBSET_HPP
#define _ITER_SUBSET_HPP
#include <esin/error>
#include <esin/util>
#include <vector>

using namespace std;
using util::nat;

typedef vector<nat> subset;

class iter_subset {
public:

  iter_subset(nat n, nat k) throw(error);

  iter_subset(const iter_subset& its) throw(error);
  iter_subset& operator=(const iter_subset& its) throw(error);
  ~iter_subset() throw();

  bool end() throw();

  subset operator*() const throw(error);

  iter_subset& operator++() throw();

  iter_subset operator++(int) throw();

  bool operator==(const iter_subset& c) const throw();
  bool operator!=(const iter_subset& c) const throw();

  static const int IterSubsetIncorr = 31;

private:
    #include "iter_subset.rep"
};
#endif
