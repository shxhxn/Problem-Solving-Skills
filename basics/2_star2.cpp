#include<iostream>
int main(){

// *
// **
// ***
// ****
// *****
int n = 1;
for(int i = 0; i < 5; i++){
  for(int j = 0; j < n; j++){
    std::cout << "*";
  }
  std::cout << "\n";
  n++;

}
  return 0;
}