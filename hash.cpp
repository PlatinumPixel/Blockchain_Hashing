#include <iostream> 
#include <fstream> 
#include <iomanip> 
#include <cstdlib> 
#include <cstring> 
#include <bitset>
#include <cmath>
using namespace std; 

void hashing(string& input);

int main(){  
    string input ("iudhifojaoidaf4f6s6hdkoimack+6265sojimuwai8hduiwahdaioklmfsoihnfs4615dg1drijamkwd521");
    hashing(input);
    return 0;
}

void hashing(string& input){

    int val[64];
    int j=1;
    val[0]=(input[0]*37)%1000/10%16;
    int size=input.size();
    if (size < 64){    
        for (int i=1;i<64;i++){
            val[i%64]=(input[i]*val[(i-1)%64]+input[i-1])%1000/10%16;
            cout << (input[i%size]*val[(i-1)]+input[(i-1)%size])%1000/10%16 << endl;
        }
    }
    else {    
        cout << "daugiau nei 64" << endl;
        for (int i=1;i<size;i++){
            val[i%64]=(input[i]*val[(i-1)%64]+input[i-1])%1000/10%16;
            cout << (input[i]*val[(i-1)%64]+input[i-1])%1000/10%16 << endl;
        }

    }

    for (int i=0;i<64;i++){

        cout << val[i] << " ";

    }

}