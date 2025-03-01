#include <iostream>

int main() {
    int matrix[3][3] = {
        {1, 4, 6},
        {8, 9 ,2},
        {3, 5, 7}
    };

    size_t lines {sizeof(matrix) / sizeof(matrix[0])};
    size_t columns {sizeof(matrix[0]) / sizeof(matrix[0][0])};

    int smallest_number {matrix[0][0]};
    int line_smallest_number{0};
    for(size_t l {0}; l < lines; ++l){
        for(size_t c {0}; c < columns; ++c){
            if(smallest_number > matrix[l][c]){
                smallest_number = matrix[l][c];
                line_smallest_number = l;
            }
        }
    }
    std::cout << "O menor número: " << smallest_number << " , está na linha " << line_smallest_number << '\n';
}
