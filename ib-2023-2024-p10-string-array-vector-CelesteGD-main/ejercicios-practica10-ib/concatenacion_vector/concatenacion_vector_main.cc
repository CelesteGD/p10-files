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

#include "concatenacion_vector.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;
  // Solicitar al usuario el tamaño de los vectores
  std::cout << "Ingrese el tamaño del primer vector: ";
  int size1;
  std::cin >> size1;

  std::cout << "Ingrese el tamaño del segundo vector: ";
  int size2;
  std::cin >> size2;

    // Generar los vectores llamando a la función GenerateVectorFromUserInput
  std::vector<double> vector1 = GenerateVectorFromUserInput(size1);
  std::vector<double> vector2 = GenerateVectorFromUserInput(size2);

    // Llamar a la función ConcatenateVectors
  std::vector<double> concatenatedVector = ConcatenateVectors(vector1, vector2);

    // Mostrar el resultado
  std::cout << "Vector concatenado:\n";
  for (const auto& value : concatenatedVector) {
      std::cout << value << " ";
  }

  return 0;
}

