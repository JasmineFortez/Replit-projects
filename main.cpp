//Name: Jasmine Angel Fortez
//Date: November 14, 2021
//Compiler name: replit
//Purpose: To sort an array using pointers

#include <iostream>
using namespace std;

int *sortList (int* list, int size){
  int *ptr = list;
  int temp = 0;;
  
  for (int i = 0; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
          if (*(ptr + j) < *(ptr + i)) {
              temp = *(ptr + i);
              *(ptr + i) = *(ptr + j);
              *(ptr + j) = temp;
          }
        }
  
}
return ptr;
}
int main() {
 
  cout << "Sorting array using pointer syntax..." <<endl;

  int toBeSortedList [] = {1, 2, 4, 5, 10, 100, 2, -22};
  int *unsorted = toBeSortedList;
  cout << "unsorted array from exercise 11.5: ";
  for(int i = 0; i < 8; i++){
    cout << *unsorted << " ";
    unsorted++;
  }

  cout <<endl;
  cout <<"The sorted array: ";
  int *sortPtr = (sortList(toBeSortedList, 8));
  for(int i = 0; i < 8; i++){
    cout << *sortPtr << " ";
    sortPtr++;
  }

  return 0;
} 