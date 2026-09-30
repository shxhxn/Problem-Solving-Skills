#include<iostream>
int main(){

int count  = 4;
int gap = 0;
for(int i = 0; i < 5; i++){
  for(int j = 0; j < gap; j++){
    std::cout << " ";
  }
  for(int k = 0; k < 5 - gap + count; k++){
    std::cout << "*";
  }
  for(int j = 0; j < gap; j++){
    std::cout << " ";
  }
  gap++;
  count--;
  std::cout << "\n";
}
  return 0;
}