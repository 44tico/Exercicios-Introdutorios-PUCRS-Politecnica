#include <iostream>
#include <string>
#include <cstring>

int main() {
    //C++ string
    /*std::cout << "Digite o 1° nome: ";
    std::string name1;
    std::cin >> name1;

    std::cout << "Digite o 2° nome: ";
    std::string name2;
    std::cin >> name2;

    std::cout << "\nOrdem Alfabética:\n";

    if(name1 < name2){
        std::cout << name1 << '\n' << name2;
    } else{
        std::cout << name2 << '\n' << name1;
    }*/

    //C string
    std::cout << "Digite o 1° nome: ";
    char name1[50];
    std::cin >> name1;

    std::cout << "Digite o 2° nome: ";
    char name2[50];
    std::cin >> name2;

    std::cout << "\nOrdem Alfabética:\n";

    if(strcmp(name1, name2) < 0){
         std::cout << name1 << '\n' << name2;
    } else{
        std::cout << name2 << '\n' << name1;
    }
}
