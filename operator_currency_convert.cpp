#include <iostream>

int main() {
  int pesos, reais, soles;

  double dollars;
  std::cout << "Enter number of Colombian Pesos : ";
  std::cin >> pesos;
  std::cout << "Enter number of Colombian Reais : ";
  std::cin >> reais;
  std::cout << "Enter number of Colombian Soles : ";
  std::cin >> soles;
  double conversion_rate_pesos = 0.0178;
  double conversion_rate_reais = 0.2;
  double conversion_rate_soles = 0.26;
  
  dollars = (conversion_rate_pesos * pesos) + (conversion_rate_reais * reais) + (conversion_rate_soles * soles);
  
  std::cout << "US Dollars = $" << dollars << "\n";  
  
  return 0;
}