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
    string input ("iudhuwai8wd521");
    hashing(input);
    return 0;
}

void hashing(string& input){

    int length;
    if (input.size() < 64) length=64;
    else length=input.size();
    int val[64];
    int j=1;
    val[0]=pow((input[0]+2.5),input[1]);
    cout << " " << val[0] << endl; 
    for (int i =1; i<=length ;i++){    
        j++;
        cout <<  i<< " " << val[i] << endl;     
        int* pastval;
        if(i=64){
            length -= 6; 
            i = 0; 
            pastval = &val[63];
        }
        else pastval= &val[i-1];
        
        char* nextinp;
        if (j=input.length()) nextinp = &input[0];
        else nextinp=&input[j+1]; 


        val[i]=pow((input[j]+*pastval),*nextinp);
        if(j>input.size()) j=0;
        
    }


}