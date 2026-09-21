#include<iostream>
int main(){

// *****
// ****
// ***
// **
// *
int column;
std::cout << "Enter the number of column : ";
std::cin >> column;
int count = column;

for(int i = 0; i < column; i++){
  for(int j = 0; j < count; j++){
    std::cout << "*";
  }
  count--;
  std::cout << "\n";

}

  return 0;
}
