#include <iostream>
#include <time.h>

int const n = 100;

void ary_cout(int ary[], int size){
  std::cout << "array[" << size << "] = {";
  for(int i = 0; i < size; i++){
    std::cout << ary[i] << ", ";
  }
  std::cout << "}" << std::endl;
}

void linear_search(int ary[], int size, int key){ // 番兵法
  ary[size] = key;
  int i = 0;
  while(ary[i] != key){
    i++;
  }
  if(i == size){
    std::cout<< "the array doesn't have " << key << "." << std::endl;
  }else{
    std::cout<< "the array has " << key << " in array[" << i << "]." << std::endl;
  }
}

int main(void){
  int i;
  int ary[n];
  int key;

  // ary[n]を生成
  for(i = 0; i < n; i++){
    ary[i] = i + 1;
  }

  // aryを標準出力
  ary_cout(ary, n);

  // keyを入力
  std::cout << "input the number you want to search" << std::endl;
  std::cin >> key;

  clock_t time_s = clock(); // 時間計測

  // 番兵法
  linear_search(ary, n, key);

  clock_t time_f = clock(); // 時間計測
  std::cout << "time = " << (double)(time_f - time_s) << std::endl;
}
