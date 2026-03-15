#include "Sort.h"
#include <iostream>

using namespace std;

void getStartAndEnd(int &s, int &e) {
  int action;
  cout << "You want sort only part of array?" << endl;
  cout << "If yes enter 1, if no enter 0" << endl;
  cin >> action;
  if (action == 1) {
    cout << "Enter index of start" << endl;
    cin >> s;
    cout << "Enter index of end" << endl;
    cin >> e;
  }
}

void custom_swap(datatype &a, datatype &b) {
  datatype temp = a;
  a = b;
  b = temp;
}

void show(datatype *arr, int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int MinItem(datatype *arr, int start, int end) {
  int min = start;
  for (int i = start + 1; i <= end; ++i) {
    if (arr[i] < arr[min]) {
      min = i;
    }
  }
  return min;
}

int MaxItem(datatype *arr, int start, int end) {
  int max = start;
  for (int i = start + 1; i <= end; ++i) {
    if (arr[i] > arr[max]) {
      max = i;
    }
  }
  return max;
}

void SortBubble(datatype *arr, int left, int right) {
  bool swapped;
  for (int i = left; i < right; ++i) {
    swapped = false;
    // Порівняння сусідніх елементів та їх перестановка
    for (int j = right; j > i; --j) {
      if (arr[j] < arr[j - 1]) {
        custom_swap(arr[j], arr[j - 1]);
        swapped = true;
      }
    }
    // Індикатор (прапорець) дозволяє скоротити кількість операцій
    if (!swapped)
      break;
  }
}

void SortInsertion(datatype *arr, int left, int right) {
  for (int i = left + 1; i <= right; ++i) {
    // Елемент, що вставляється, заноситься у допоміжну змінну
    datatype temp = arr[i];
    int j = i - 1;

    // Зсув елементів відсортованого підмасиву вправо
    while (j >= left && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    // Вставка на місце останнього поточного елементу
    arr[j + 1] = temp;
  }
}

void SortSelection(datatype *arr, int left, int right) {
  for (int i = left; i < right; ++i) {
    // Знайти елемент з мінімальним ключем
    int min_idx = MinItem(arr, i, right);

    // Переставити місцями знайдений елемент з поточним
    if (min_idx != i) {
      custom_swap(arr[i], arr[min_idx]);
    }
  }
}

void testAlgoritm(datatype *arr, int size,
                  void (*operation)(datatype *arr, int size, int start, int end,
                                    bool mode)) {
  short int m;

  cout << "Ви хочете провести сортування за спаданням чи зростанням?" << endl;
  cout << "Для спадання введіть 0, для зростання введіть 1" << endl;
  cout << "Enter action:" << endl;
  cin >> m;

  bool mode = (bool)m;
  int s = 0;
  int e = size;
  getStartAndEnd(s, e);

  operation(arr, size, s, e, mode);
}

int readArray(datatype *arr) {
  int size;
  cout << "Enter amount of numbers in array" << endl;
  cin >> size;
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "] = " << endl;
    cin >> arr[i];
  }

  return size;
}
