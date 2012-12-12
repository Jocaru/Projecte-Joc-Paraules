iter_subset::iter_subset(nat n, nat k) throw(error){
    if (n >= k) {
        nat aux1 = 1;
        for (nat i = 0; i < (n - k); i++) aux1 = aux1 * n - i;
        nat aux2 = 1;
        for (nat i = k; i > 0; i--) aux2 = aux2 * i;
        nat tmn = aux1 / aux2;
        _v.resize(tmn);                                     //redimensionem el vector amb el nombre de subconjunts
        for (nat i = 0; i < tmn; i++) _v[i].resize(k);      //redimensionem cada subconjunt a k
    }
}

iter_subset::iter_subset(const iter_subset& its) throw(error){
    
}

iter_subset::iter_subset& operator=(const iter_subset& its) throw(error){
    
}

iter_subset::~iter_subset() throw(){
    
}

bool iter_subset::end() throw(){
    
}

subset iter_subset::operator*() const throw(error){
    
}

iter_subset& iter_subset::operator++() throw(){
    
}

iter_subset iter_subset::operator++(int) throw(){
    
}

bool iter_subset::operator==(const iter_subset& c) const throw(){
    
}

bool iter_subset::operator!=(const iter_subset& c) const throw(){
    
}
