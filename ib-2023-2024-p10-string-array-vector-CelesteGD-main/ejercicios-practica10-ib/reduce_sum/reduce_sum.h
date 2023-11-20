/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 20 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief declaration of the functions
 */

#include <iostream>
#include <vector>

std::vector<double> GenerateVector(const int size, const double lower, const double upper);
double ReduceSum(const std::vector<double>& vec);
void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);

