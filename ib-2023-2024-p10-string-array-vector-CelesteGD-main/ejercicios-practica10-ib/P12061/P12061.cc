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
using namespace std;

int main () {
  string s;
  int cont = 0;
  bool start = false;
  while (cin >> s and s != "final") {
 	if (s == "principi") start = true;
	else if (start) ++cont;
}
  if (start and s == "final") cout << cont << endl;
  else cout << "sequencia incorrecta" << endl;
  return 0;
}
