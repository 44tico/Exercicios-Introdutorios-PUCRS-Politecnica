#include <iostream>

int main() {
    std::cout << "Digite um número ímpar: ";
    size_t num;
    std::cin >> num;
    std::cout << '\n';

    for(size_t i {1}; i <= num; ++i){
        std::cout << i;
    }

    for(size_t line {2}; line < num; ++line){
        std::cout << '\n';

        for(size_t backspace {1}; backspace < line; ++backspace){
                std::cout << ' ';
        }

        for(size_t j {line}; j < num; ++j){
            std::cout << j;
        }
        --num;
    }
}
