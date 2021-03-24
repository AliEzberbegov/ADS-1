// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int left = 0; 
  int right = size - 1;
  int count = 0;
  
  while (left <= right) {
    int central = left + (right - left) / 2;
    if (arr[central] > value) {
        left = central - 1;
      } else if (arr[central] < value) {
        right = central + 1;
      } else {
        while (arr[central] == value) {
        count = count + 1;
        central = central + 1;
        }
        central = central - count;
        while (arr[central - 1] == value) {
        count = count + 1;
        central = central - 1;
        }
     }
  }
  if (count > 0) 
    return count;
  else
    return 0; // если ничего не найдено
}
