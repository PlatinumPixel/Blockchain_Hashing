#include "bibl.h"

void failoNusk (vector<string> &A){
    string failas;

    cout << "Iveskite failo pavadinima (pvz. kursiokai.txt)" << endl;
    while(true){
        cin >> failas;
        if (!(std::filesystem::exists(failas))){
            cout << "Toks failas neegzistuoja, pabandykite vel" << endl;
            continue; 
        }
        break;
    }
    
    string eil;
    Timer t;

    std::ifstream df(failas);
    getline(df,eil);
    
    while(getline(df,eil)){
        A.push_back(eil);
    }
    cout << "Perskaityt ir suskaiciuot vidurkius uztruko " << t.elapsed() << endl;
    df.close();
}