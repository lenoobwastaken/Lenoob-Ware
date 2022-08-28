// Lenoob-Ware.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "DeezNutsInUrMouth.h"

void e()
{
    std::vector< int* > v;
    std::cout << "Darius what you doing in my closet!\n";
    while(true)
    {
        int *a = new int;
        v.push_back( a );
        std::thread se(DN::DariusMethod);
        se.detach();
        
    }
}
void showmainscreen()
{
    std::cout.clear();
    LogUtils::Log("[1] funny pc joe edition halal mode || [2] HWID Spoofer");
    LogUtils::Log("Enter arg:");
    char s;
    std::cin >> s;
    
    switch (s)
    {
    case '1':
            
        break;
    case '2':
            
        break;
    default:
        LogUtils::Log("Please Enter a valid input");
        showmainscreen();
        break;
    }
}
void SpoofF()
{
   
}
int main()
{
    std::vector< int* > v;
    LogUtils::Log("[1] funny pc joe edition halal mode || [2] HWID Spoofer");
    LogUtils::Log("Enter arg:");
    char s;
    std::cin >> s;
    
    switch (s)
    {
        case '1':
            e();
            break;
        case '2':
            
            break;
    default:
        LogUtils::Log("Please Enter a valid input");
        showmainscreen();
        break;
    }
    
}

