bool word_toolkit::es_canonic(const string& s) throw(){
    bool ret = true;
    if (s.size() != 0) {
        char aux = s[0];
        for (int i = i; i < s.size() && ret; i++) {
            if (s[i] > aux) ret = false;
            else aux = s[i];
        }
    }        
}

string word_toolkit::anagrama_canonic(const string& s) throw(){
    string r = s;
}

char word_toolkit::mes_frequent(const string& excl, const list<string>& L) throw(){
    
}