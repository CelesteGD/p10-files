/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 20 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief main function of our program
 */

#include "max_min_pro.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;

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

    // Calcular máximo, mínimo y promedio del vector
  double maxValue, minValue, avgValue;

  CalculateStats(myVector, maxValue, minValue, avgValue);

    // Imprimir los resultados
  std::cout << "Máximo: " << maxValue << std::endl;
  std::cout << "Mínimo: " << minValue << std::endl;
  std::cout << "Promedio: " << avgValue << std::endl;

  return 0;
}

