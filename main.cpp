#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // az N_ELEMENTS konstans szintaktikai hibát tartalmaz
    std::cout << '1-100 ertekek duplazasa' // hiányzó pontosvessző, hiányzik a dupla macskaköröm, hiányzik a sortöres
    for (int i = 0;) //a ciklusmag hiányzik
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  //hiányzik a ciklusmag és a sortörés+ 1-től 100-ig kellene futnia
    {
        std::cout << "Ertek:"  // hiányzó pontosvessző + kiírandó számok hiánya, sortörés
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // atlagot egyenlővé kellene tenni 0-val
    for (int i = 0; i < N_ELEMENTS, i++)   //vessző helyett pontosvessző kellene
    {
        atlag += b[i] // hiányzik a pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
