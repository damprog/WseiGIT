#include <iostream>
#include <windows.h>
using namespace std;
void przyklady(){
    string tab_przyklady[5];
    for(int i=0; i<5; i++){
        cin >> tab_przyklady[i];
        cout << "\tTwój " << i+1 << " przyklad to: " << tab_przyklady[i] << endl;
    }
}