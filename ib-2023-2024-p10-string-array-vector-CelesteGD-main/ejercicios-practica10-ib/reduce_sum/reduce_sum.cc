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

#include "reduce_sum.h"

// Función para generar un vector con valores aleatorios en el intervalo (lower, upper)
std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
    std::vector<double> result;
    for (int i = 0; i < size; ++i) {
        double randomValue = lower + static_cast<double>(std::rand()) / RAND_MAX * (upper - lower);
        result.push_back(randomValue);
    }
    return result;
}

// Función para calcular la suma de todos los valores en un vector
double ReduceSum(const std::vector<double>& vec) {
    double sum = 0.0;
    for (const double& value : vec) {
        sum += value;
    }
    return sum;
}

void PrintProgramPurpose() {
  std::cout << "Este programa calcula la suma de los vectores aleatorio" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << std::endl;
    return false;
  }
  return true;
}

