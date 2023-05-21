#include "line.hpp"

template<typename T> struct matrix {
    std::vector<std::vector<T>> m;
    bool valid = false;
};

template<typename Number> matrix<Number> read_matrix(int i, int j) {
    std::vector<std::vector<Number>> m;
    for (int k = 0; k < i; k++) {
        auto line = read_line<Number>();
        if (line.size() != size_t(j)) {
            std::cout << "Error" << std::endl;
            return matrix<Number> {{}, false};
        }
        m.push_back(line);
    }
    return matrix<Number> {m, true};
}
