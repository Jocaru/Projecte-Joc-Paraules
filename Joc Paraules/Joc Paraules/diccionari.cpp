diccionari::node_tst* dicc::rinsereix(node_tst* n, nat i, const string &paraula) throw (error){
    if(n == NULL){                                              //si no existeix, creem una arrel nova i afegim al fill central tots els chars
        n = new node_tst;
        n->_esq = n->_cen = n->_dret = NULL;
        n->_c = paraula[i];
        try {
            if(i < paraula.length()-1){
                n->_cen = rinsereix(n->_cen, i+1, paraula);
            }
            else{
                n->_v = v;
            }
        }
        catch(error){
            delete n;
            throw;
        }
    }
    else{                                                       //en el cas que existeixi una arrel, fem comprovacions
        if (n->_c > k[i]) {
            n->_esq = rinsereix(n->_esq, i, paraula);           //si el char és més gran, intentem inserir per la esquerra
        }
        else if (n->_c < k[i]) {
            n->_dret = rinsereix(n->_dret, i, paraula);         //si el char es més petit, intentem inserir per la dreta
        }
        else {
            n->_cen = rinsereix(n->_cen, i+1, paraula);         //si el char és igual, està inserit, intentem inserir el següent char pel mig
        }
    }
    return n;
}

diccionari::consulta(const string &paraula, bool &hi_es) throw(){
    node_tst *n = rconsulta(_arrel, paraula, 0);
    if(n == NULL){
        hi_es = false;
    }
    else{
        hi_es = true;
    }
}

diccionari::node_tst* dicc::rconsulta(node_tst* n, nat i, const string &paraula) throw (error){
    node_tst *res = NULL;
    if(n != NULL){
        if(i == paraula.length() and n->_c == '#'){
            res = n;
        }
        else if(n->_c > paraula[i]) {
            res = rconsulta(n->_esq, i, paraula);
        }
        else if(n->_c < paraula[i]) {
            res = rconsulta(n->_dret, i, paraula);
        }
        else{
            res = rconsulta(n->_cen, i+1, paraula);
        }
    }
    return res;
}

diccionari::diccionari() throw(error){
    
}

diccionari::diccionari(const diccionari& D) throw(error){
    
}

diccionari& diccionari::operator=(const diccionari& D) throw(error){
    
}

diccionari::~diccionari() throw(){
    
}

void diccionari::insereix(const string& p) throw(error){
    string p1 = p + '#';
    _arrel = rinsereix(_arrel, p1, 0);
}

string diccionari::prefix(const string& p) const throw(error){
    string res;
    
    bool hi_es;
    
    consulta(p, hi_es);
    
    if(hi_es){
        res = p;
    }
    else if(p.length > 0){
        res = prefix(p.erase(p.length()-1));
    }
    else{
        res = "";
    }
}

void diccionari::satisfan_patro(const vector<string>& q,
                                list<string>& L) const throw(error){
    
}

void diccionari::llista_paraules(nat k, list<string>& L) const throw(error){
    
}

nat diccionari::num_pal() const throw(){
    
}