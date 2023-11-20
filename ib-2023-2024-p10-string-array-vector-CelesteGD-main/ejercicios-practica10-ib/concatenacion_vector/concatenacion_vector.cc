/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 20 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief functions that we will use in our main
 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
    std::vector<double> vec;
    srand(static_cast<unsigned>(time(0))); // Semilla para números aleatorios

    for (int i = 0; i < size; ++i) {
        double randomValue = lower + static_cast<double>(rand()) / RAND_MAX * (upper - lower);
        vec.push_back(randomValue);
    }

    return vec;
}

int main() {
    // Solicitar al usuario el tamaño del vector y los valores mínimo y máximo
    int vectorSize;
    double lowerBound, upperBound;

    std::cout << "Ingrese el tamaño del vector: ";
    std::cin >> vectorSize;

    std::cout << "Ingrese el valor mínimo: ";
    std::cin >> lowerBound;

    std::cout << "Ingrese el valor máximo: ";
    std::cin >> upperBound;

    // Generar un vector con los valores ingresados por el usuario
    std::vector<double> myVector = GenerateVector(vectorSize, lowerBound, upperBound);

    // Imprimir el vector generado
    std::cout << "Vector generado: ";
    for (double val : myVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
