#include<iostream>
int main(){
// ****
// ****
// ****
// ****

for(int i = 0; i<4; i++){
  for(int j = 0; j < 4; j++){ // i is responsible for column
    std::cout << "*";         // j is responsible for rows.
  }
  std::cout << "\n";
}
  return 0;
}