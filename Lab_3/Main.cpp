#include "Comb.h"
#include <iostream>


using namespace std;

void printArray(int *A, int size) {
  for (int i = 0; i < size; ++i) {
    cout << A[i] << " ";
  }
  cout << endl;
}

int main() {
  int n = 4; // Значення, які задає викладач
  int k = 3;

  cout << "=== Частина 1. Обчислення ===" << endl;
  cout << "n = " << n << ", k = " << k << endl;
  cout << "Перестановки P(" << n << ") = " << factorial(n) << endl;
  cout << "Розміщення A(" << n << "," << k << ") = " << A(n, k) << endl;
  cout << "Розміщення з повт. _A(" << n << "," << k << ") = " << _A(n, k)
       << endl;
  cout << "Сполучення C(" << n << "," << k << ") = " << C(n, k) << endl;
  cout << "Сполучення з повт. _C(" << n << "," << k << ") = " << _C(n, k)
       << endl;
  cout << "-------------------------------" << endl;

  cout << "=== Частина 2. Перестановки ===" << endl;
  int *permArray = new int[n];
  for (int i = 0; i < n; ++i)
    permArray[i] = i + 1; // Ініціалізація 1, 2, 3... n

  unsigned long long p_count = factorial(n);
  printArray(permArray, n); // Виводимо першу
  for (unsigned long long i = 2; i <= p_count; ++i) {
    GenPerm(permArray, n);
    printArray(permArray, n);
  }
  delete[] permArray;
  cout << "-------------------------------" << endl;

  cout << "=== Частина 3. Сполучення ===" << endl;
  int *combArray = new int[k];
  for (int i = 0; i < k; ++i)
    combArray[i] = i + 1; // Ініціалізація 1, 2... k

  unsigned long long c_count = C(n, k);
  printArray(combArray, k); // Виводимо перше
  for (unsigned long long i = 2; i <= c_count; ++i) {
    GenComb(combArray, n, k);
    printArray(combArray, k);
  }
  delete[] combArray;

  return 0;
}