#include<iostream>
// odd numberas
#include<vector>
int main(){

int arr[] = {1,2,3,4,5};
std::vector<int> odd = {};

for(int i = 0; i < 5; i++){
  if(arr[i] % 2 != 0){
   odd.push_back(arr[i]);
  }
}
for (int num : odd){
  std::cout << num << " ";
}
  return 0;
}