#include<iostream>
int main(){
//     *
//    ***
//   *****
//  *******
// *********

// Spaces decrease by 1 every row
// Stars increase by 2 every row
// First row has 4 spaces and 1 star
// Last row has 0 spaces and 9 stars

int gap = 5 - 1; //column -1 for first row, then we gradually decrease it with the next column by one.
int count = 0;
for(int i = 0; i < 5; i++){  //responsible for the number of columns.
  for(int j = 0;  j < gap; j++){      //this basically prints the gap, gap represented by "-". the gap decreases every row by 1. row 1 = 4 gap, row 2 = 3...
    std::cout << "-";
  }
  for(int k = 0; k < 5 - gap + count; k++){
    std::cout << "*";                // 5 - 4 + 0 for row1, 5-3+1 = 3 for row2, 5-2 +2 = 5 for row3, 5-1+3 = 7 for row4.
  }
  count+=1;

  for(int j = 0;  j < gap; j++){
    std::cout << "-";
  }
  gap--;
  std::cout << "\n";
}

  return 0;
}