#include "bibl.h"
vector <string> I;
vector <string> O;

int main(){  
    int input;
    string failas;
    while ((true)){
        cout << "Iveskite skaiciu kokiu budu norite ivesti duomenis " << endl;
        cout << "1 - Iveskite visus duomenis rankiniu budu(be salt generation) " << endl;
        cout << "2 - Iveskite varda ir pavarde rankniu budu(su salt generation) " << endl;
        cout << "3 - Sugeneruoti visus duomenis automatiskai " << endl;
        cout << "4 - Paiimti duomenis is failo " << endl;
        cout << "5 - Sugeneruoti nauja duomenu faila " << endl;      
        cout << "7 - Baigti darba ir spausdinti į terminala " << endl;
        cout << "8 - Baigti darba ir spausdinti į faila " << endl;

        try {
            if (!(cin>>input)||input<1 || input>9){
                cin.clear();
                cin.ignore();
                throw "Ivestas neteisingas simbolis";
            } 
        
            switch(input){
                case 1:
                    int n;
                    cout << "Kiek stringu hashint ";
                    cin >> n;
                    for (int i=0;i<n;i++){
                        rankinis(I);
                        O.push_back(hashing(I.back()));
                    }
                break;

                case 2:
                    cout << "Kiek stringu hashint ";
                    cin >> n;
                    for (int i=0;i<n;i++){
                        rankinis(I);
                        salt(I);
                        O.push_back(hashing(I.back()));
                    }
                break;

                // case 3:
                //     int n;
                //     cout << "Iveskite kiek mokiniu generuoti" << endl;
                //     cin >> n;
                //     for (int i=0;i<n;i++){
                //         automatiskas(A);        
                //     }
                //     break;

                case 4:
                    failoNusk(I);
                    salt(I);
                    O.push_back(hashing(I.back()));
                break;
                
                // case 5:
                //     failoGen();
                //     break;

                // case 6:
                //     rusiavimas();
                //     break;

                case 7:
                    spausdina(I,O);
                    cout << "Spauskite Enter, kad uzdaryti programa..." << endl;
                    cin.ignore();
                    cin.get();
                    return 0;
                 case 8:
                    cout << "Įveskite failo pavadinima ";
                    cin >> failas;
                    spausdinaFaila(I,O,failas);
                    cout << "Spauskite Enter, kad uzdaryti programa..." << endl;
                    cin.ignore();
                    cin.get();
                    return 0;
                // case 9:
                //     run_unit_tests();
                //     cout << "Spauskite Enter, kad uzdaryti programa..." << endl;
                //     cin.ignore();
                //     cin.get();
                //     return 0;
                default:
                    cout << "Ivedete neteisinga simobli, pabandykit vel! :)" << endl;
                break;
        }
        }   
        catch (char const *x){
            cout << x << endl;
            continue;
        }
    
    }
cout << "Spauskite Enter, kad uzdaryti programa..." << endl;
cin.ignore();
cin.get();
 return 0;
}
