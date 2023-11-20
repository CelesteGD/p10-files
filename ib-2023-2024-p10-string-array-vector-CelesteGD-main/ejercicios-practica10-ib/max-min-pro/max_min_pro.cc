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

#include "max_min_pro.h"

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
    std::vector<double> vec;
    srand(static_cast<unsigned>(time(0))); // Semilla para números aleatorios

    for (int i = 0; i < size; ++i) {
        double randomValue = lower + static_cast<double>(rand()) / RAND_MAX * (upper - lower);
        vec.push_back(randomValue);
    }

    return vec;
}

void CalculateStats(const std::vector<double>& vec, double& max, double& min, double& avg) {
    if (vec.empty()) {
        std::cerr << "El vector está vacío." << std::endl;
        return;
    }

    // Inicializar max y min con el primer elemento del vector
    max = min = vec[0];
    double sum = 0;

    // Calcular max, min y sumar para el promedio
    for (double val : vec) {
        if (val > max) {
            max = val;
        }

        if (val < min) {
            min = val;
        }

        sum += val;
    }

    // Calcular el promedio
    avg = sum / vec.size();
}

void PrintProgramPurpose() {
  std::cout << "Cálcula el máximo y mínimo y el promedio de un vector generado aleatorio" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << std::endl;
    return false;
  }
  return true;
}

