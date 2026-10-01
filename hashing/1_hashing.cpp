// understanding from striver's video : HASHING : https://www.youtube.com/watch?v=KEs5UyBJ39g&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=13

#include<iostream>
int main(){

int arr[] = {1,2,3,1,2,4,5,1};
int n = 8;
int count = 0;
int a = 1;         // O(n)

for(int i = 0; i < n; i++){
  if(arr[i] == a){
    count++;
  }
}

std::cout << count;

  return 0;
}

//basically the first part of the lectuyre, this dude is telling us to make a program to count the number of elements in an array.
//but this is just an array question, ig we will further learn how to apply hashing in questions like this.
// what happens in hashing : 
// suppose we need to calculate and tell the frequency of all the number in an array.
// 1 -> 3
// 2 -> 2
// 3 -> 1         // these values are stored in hash table. the number after arrow -> is frequency.
// 4 -> 1