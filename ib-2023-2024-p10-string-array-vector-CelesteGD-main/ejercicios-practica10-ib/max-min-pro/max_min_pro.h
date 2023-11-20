/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 20 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief declared function
 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
std::vector<double> GenerateVector(const int size, const double lower, const double upper);
void CalculateStats(const std::vector<double>& vec, double& max, double& min, double& avg);

