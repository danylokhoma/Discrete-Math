#include "Comb.h"
#include <algorithm> // Для std::swap та std::sort

// --- Частина 1: Обчислення ---

unsigned long long factorial(int n) {
  if (n <= 1)
    return 1;
  unsigned long long res = 1;
  for (int i = 2; i <= n; ++i)
    res *= i;
  return res;
}

unsigned long long A(int n, int k) {
  if (k > n)
    return 0;
  return factorial(n) / factorial(n - k);
}

unsigned long long _A(int n, int k) {
  unsigned long long res = 1;
  for (int i = 0; i < k; ++i)
    res *= n;
  return res;
}

unsigned long long C(int n, int k) {
  if (k > n)
    return 0;
  return factorial(n) / (factorial(k) * factorial(n - k));
}

unsigned long long _C(int n, int k) { return C(n + k - 1, k); }

// --- Частина 2: Генерування перестановок ---
void GenPerm(int *A, int n) {
  int i = n - 2;
  // Крок 1: Знайти найбільше i, для якого A[i] < A[i+1]
  while (i >= 0 && A[i] >= A[i + 1]) {
    i--;
  }

  if (i >= 0) {
    int j = n - 1;
    // Крок 2: Знайти найбільше j, для якого A[j] > A[i]
    while (A[j] <= A[i]) {
      j--;
    }
    // Крок 3: Поміняти місцями
    std::swap(A[i], A[j]);
  }
  // Крок 4: Відсортувати частину масиву після i
  std::sort(A + i + 1, A + n);
}

// --- Частина 3: Генерування сполучень ---
void GenComb(int *A, int n, int k) {
  int i = k - 1;
  // Знаходимо елемент, який можна збільшити
  // Максимальне значення для A[i] це (n - k + i + 1)
  while (i >= 0 && A[i] == n - k + i + 1) {
    i--;
  }

  if (i >= 0) {
    A[i]++; // Збільшуємо знайдений елемент
    // Наступні елементи робимо мінімально можливими (на 1 більше попереднього)
    for (int j = i + 1; j < k; j++) {
      A[j] = A[j - 1] + 1;
    }
  }
}