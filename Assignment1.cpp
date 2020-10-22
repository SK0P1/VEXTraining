#include <iostream>

int main() {
  int numbers[5];
  for (int i=0; i<5; i++){
    int input;
      std::cout <<"Input Number: ";
      std::cin >>input;
        if ( input % 2 == 0){
          numbers[i]=input;
        }
        else{
          numbers[i] = 0;
        }
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum = sum + numbers[i];
}
  std::cout << sum << std::endl;
  }
}
