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

#include "reduce_sum.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;

  // Solicitar al usuario el tamaño del vector
  std::cout << "Ingrese el tamaño del vector: ";
  int vectorSize;
  std::cin >> vectorSize;

  // Solicitar al usuario los límites inferior y superior
  std::cout << "Ingrese el límite inferior: ";
  double lowerLimit;
  std::cin >> lowerLimit;

  std::cout << "Ingrese el límite superior: ";
  double upperLimit;
  std::cin >> upperLimit;

  // Generar el vector llamando a la función GenerateVector con los valores ingresados por el usuario
  std::vector<double> my_vector = GenerateVector(vectorSize, lowerLimit, upperLimit);

  // Mostrar el vector generado
  std::cout << "Vector generado:\n";
  for (const auto& value : my_vector) {
      std::cout << "Component: " << value << std::endl;
  }

  // Calcular la suma de los valores en el vector usando ReduceSum
  double sum = ReduceSum(my_vector);

  // Mostrar el resultado
  std::cout << "La suma de los valores en el vector es: " << sum << std::endl;

  return 0;
}

