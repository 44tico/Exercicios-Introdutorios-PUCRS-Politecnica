#include <iostream>
#include <array>

int main() {
    std::array<std::array<int, 3>, 3> matrix = {{
        {5, 4, 6},
        {8, 9, 2},
        {3, 1, 7}
    }};

    size_t lines {matrix.size()};
    size_t columns {matrix.at(0).size()};

    int smallest_number {matrix.at(0).at(0)};
    int line_smallest_number {0};

    for (size_t l {0}; l < lines; ++l) {
        for (size_t c {0}; c < columns; ++c) {
            if (smallest_number > matrix.at(l).at(c)) {
                smallest_number = matrix.at(l).at(c);
                line_smallest_number = l;
            }
        }
    }

    std::cout << "O menor número: " << smallest_number << ", está na linha " << line_smallest_number << '\n';
}
