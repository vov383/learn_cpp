#include <iostream>

int main() {
  double weight =  0;// your weight in Earth
  int x; // planet number you will choose
	
  // Planet Relative Gravity 
  double mercuryRG = 0.38;
  double venusRG = 0.91;
  double marsRG = 0.38;
  double jupiterRG = 2.34;
  double saturnRG = 1.06;
  double uranusRG = 0.92;
  double neptuneRG = 1.19;
  
  std::cout << "Please enter your current earth weight : ";
  std::cin >> weight;

  std::cout << "\nI have information for the following planets : \n\n";
  std::cout << "  1. Mercury   2. Venus   3. Mars\n";
  std::cout << "  4. Jupiter   5. Saturn  6. Uranus\n";
  std::cout << "  7. Neptune\n";
  std::cout << "Which planet are you visiting? ";
  
  std::cin >> x;

  if(x == 1){
    weight *= mercuryRG;
  } else if(x == 2){
    weight *= venusRG;
  } else if(x == 3){
    weight *= marsRG;
  } else if(x == 4){
    weight *= jupiterRG;
  } else if(x == 5){
    weight *= saturnRG;
  } else if(x == 6){
    weight *= uranusRG;
  } else if(x == 7){
    weight *= neptuneRG;
  } else {
    std::cout << "Wrong input.\n";
    return 0;
  }
  
  std::cout << "\nYour weight is " << weight << "kg\n";
  return 0;
}