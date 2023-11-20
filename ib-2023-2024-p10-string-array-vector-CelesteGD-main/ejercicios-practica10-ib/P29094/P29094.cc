/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 13 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief functions that we will use in our main
 */

#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
    double max = v[0];
    int max_pos = 0;
    for (int i = 1; i <= m; ++i) {
        if (v[i] >= max) {
            if (max != v[i]) max_pos = i;
            max = v[i];
        }
    }

    return max_pos;
}

int main() {
    int m,size;
    std::cin >> m >> size;
    vector <double> v(size);

    for (int i = 0; i < size; ++i) {
	    std::cin >> v[i];
    }
    std::cout << position_maximum(v,m) << std::endl;
}
