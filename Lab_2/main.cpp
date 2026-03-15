#include "Sort.h"
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  const int MAX_SIZE = 100;
  datatype arr[MAX_SIZE];
  datatype working[MAX_SIZE];

  int size = readArray(arr);

  int choice;
  do {
    // Copy original array so we can re-sort it each time
    memcpy(working, arr, size * sizeof(datatype));

    cout << "\n===== Select sorting method =====" << endl;
    cout << "1 - Bubble Sort" << endl;
    cout << "2 - Insertion Sort" << endl;
    cout << "3 - Selection Sort" << endl;
    cout << "0 - Exit" << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 0)
      break;

    cout << "\nBefore sorting:" << endl;
    show(working, size);

    switch (choice) {
    case 1:
      SortBubble(working, 0, size - 1);
      cout << "\n[Bubble Sort] After sorting:" << endl;
      break;
    case 2:
      SortInsertion(working, 0, size - 1);
      cout << "\n[Insertion Sort] After sorting:" << endl;
      break;
    case 3:
      SortSelection(working, 0, size - 1);
      cout << "\n[Selection Sort] After sorting:" << endl;
      break;
    default:
      cout << "Invalid choice, try again." << endl;
      continue;
    }

    show(working, size);

  } while (true);

  cout << "Goodbye!" << endl;
  return 0;
}
