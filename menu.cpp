#include <iostream>
using namespace std;

int main(){


    char letra ='x';

    while (letra!='x')
    {
     cout <<"Este es el menu de hoy, escoga una letra\n";
     cout<<" A.Pizza\n";
     cout<<" B.Hamburguesa \n";
     cout<<" C.Burritos\n";
     cout<<" D. Pescado frito\n";
     cout<<" E.Sopa de frijoles\n";
     cin >>letra;
    }
    return 0;
}