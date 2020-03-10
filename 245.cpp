#include <iostream>

bool dalton() {
  int brothers;
  std::cin >> brothers;
  if(brothers == 0) return false;
  long long int bro, aux;
  char up = 'a';
  std::cin >> bro;
  for(int i = 1; i < brothers; i++) {
    std::cin >> aux;
    if(aux == bro) {
      up = 'b';
    } else if(aux < bro) {
      if(up == 'u') up = 'b';
      else up = 'd';
    } else if(aux > bro) {
      if(up == 'd') up = 'b';
      else up = 'u';
    }
    if(up == 'b') {
      std::cin.ignore(1024, '\n');
      break;
    }
    bro = aux;
  }
  if(up == 'b') {
    std::cout << "DESCONOCIDOS\n";
  } else {
    std::cout << "DALTON\n";
  }
  
  return true;
}

int main() {
  while(dalton());
  return 0;
}