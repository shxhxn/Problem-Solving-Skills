
#include<iostream>
int main(){

  int arr[] = {1,2,5,4,5};
  int n = 5;

  bool increasing = true;
  bool decreasing = true;

  for(int i = 0; i < n-1; i++){
    if(arr[i] > arr[i+1]){
      increasing = false;
    }
    if(arr[i] < arr[i+1]){
      decreasing = false;
    }
  }
  if(increasing || decreasing){
    std::cout << "Sorted";
  }
  else{
    std::cout << "Not Sorted";
  }

  return 0;
}