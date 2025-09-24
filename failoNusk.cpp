#include "bibl.h"

void failoNusk (vector<string> &A, vector <string> &O){
    string failas;

    cout << "Iveskite failo pavadinima (pvz. text.txt)" << endl;
    while(true){
        cin >> failas;
        if (!(std::filesystem::exists(failas))){
            cout << "Toks failas neegzistuoja, pabandykite vel" << endl;
            continue; 
        }
        break;
    }
    
    string eil;

    std::ifstream df(failas);
    while(getline(df,eil)){
        A.push_back(eil);
        salt(A.back());
        O.push_back(hashing(A.back()));
    }
    df.close();
}