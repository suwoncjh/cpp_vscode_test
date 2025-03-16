#include <array>

int main(){
    // Array 1 uses aggregate initialisation
    std::array<int, 5> array{{1, 2, 3, 4, 5}};
    std::array<int, 5> array_2 = {1, 2, 3, 4, 5};

    return 0;
}



