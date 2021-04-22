#include <fstream>
#include <iostream>
#include <string>

int main ()
{

    t = new bool [i];
    std::ofstream number_1 ("n1_1.txt");
    std::ofstream number_2 ("n1_2.txt");
    number_1 << "Naborsimvolovdlinnoyv50:primerprimerprimerprimerprimerprimer";
    number_2 << "primerprimerprimerprimerprimerprimerprimerprimerprimerprimerprimerprimerprimer";
    std::ifstream number_3 ("n1_1.txt");
    std::ifstream number_4 ("n1_2.txt");
    std::ofstream number_5 ("n2_2.txt");
    int *i;

    char *t;
    std::string x;
    std::string y;
    //std::getline(number_3, x);
    //std::getline(number_4, y);
    number_3 >> x;
    number_4 >> y;
    number_5 << x << y; 
    return 0;
}