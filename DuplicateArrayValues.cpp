#include <iostream>

int main(){

  int arr[100];
  int size;
  int v;

  std::cout << "Enter array size: ";
  std::cin >> size;

  std::cout << "Enter elements: ";
  for(int i = 0; i < size; i++){
    std::cin >> arr[i];
  }

  std::cout << "Duplicate elements: ";

  for(int i = 0; i < size; i++){

    for(int j = (i + 1); j < size; j++){

      if(arr[i] == arr[j]){

        if(int v = 1 && arr[j] != '\0'){
          std::cout << arr[i] << " ";
        }
        
        arr[j] = '\0';
        v++;
      
      }
    
    }

    v = 1;
    
  }

  return 0;

}