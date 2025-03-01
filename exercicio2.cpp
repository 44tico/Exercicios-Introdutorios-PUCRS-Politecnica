#include <iostream>
#include <array>

int main() {
    std::array<float, 3> grades;

    for(size_t i {0}; i < 3; ++i){
        std::cout << "Digite a sua " << i + 1 << "° nota\n";
        std::cin >> grades[i];
    }

    std::cout << "Digite sua média: ";
    float average {0};
    std::cin >> average;

    float average_performance { (grades.at(0) + grades.at(1) * 2 + grades.at(2) * 3 + average) / 7 };

    std::cout << "\nA sua média de aproveitamento foi: " << average_performance << '\n';

    if(average_performance >= 9){
        std::cout << "Você tirou: A\n";
    }
    else if(average_performance >= 7.5 && average_performance < 9){
        std::cout << "Você tirou: B\n";
    }
    else if(average_performance >= 6 && average_performance < 7.5){
        std::cout << "Você tirou: C\n";
    }
    else if(average_performance >= 4 && average_performance < 6){
        std::cout << "Você tirou: D\n";
    }
    else{
        std::cout << "Você tirou: E\n";
    }
}
