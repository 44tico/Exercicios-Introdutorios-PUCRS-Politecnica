#include <iostream>

int main() {
    int num;
    do{
        std::cout << "Digite um número ímpar: ";
        int num;
        std::cin >> num;

        if (num <= 0) {
            std::cout << "Digite um número positivo\n";
        } else if (num % 2 == 0) {
            std::cout << "O número precisa ser ímpar\n";
        }
    } while(num <= 0 || num % 2 == 0);

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
