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

#include "generate_vector.h"

// Función para generar un vector con valores aleatorios en el intervalo (lower, upper)
std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
    // Inicializar la semilla de rand() con el tiempo actual
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Crear un vector para almacenar los valores generados
    std::vector<double> result;

    // Generar 'size' componentes del vector con valores aleatorios en el intervalo (lower, upper)
    for (int i = 0; i < size; ++i) {
        double randomValue = lower + static_cast<double>(std::rand()) / RAND_MAX * (upper - lower);
        result.push_back(randomValue);
    }

    return result;
}

void PrintProgramPurpose() {
  std::cout << "Genera un vector aleatorio con el mín y máx que el usuario le dé" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << std::endl;
    return false;
  }
  return true;
}

