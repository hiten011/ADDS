#include "BubbleSort.h"

vector<int> BubbleSort::sort(vector<int> list) {
  int count = 1;
  while (count > 0) {
    count = 0;
    for (int i = 1; i < list.size(); i++) {
      if (list[i - 1] > list[i]) {
        swap(list[i - 1], list[i]);
        count++;
      }
    }
  }

  return list;
}