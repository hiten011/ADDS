#include "QuickSort.h"

vector<int> QuickSort::sort(vector<int> list) {
  this->list = list;

  // Recursion
  // recursion(0, this->list.size());

  // Loop
  loop();
  return this->list;
}

void QuickSort::recursion(int start, int end) {
  if (start >= end) {
    return;
  }

  int ptr = helper(end - 1, start - 1, start, end);

  recursion(start, ptr);
  recursion(ptr + 1, end);
}

void QuickSort::loop() {
  queue<vector<int>> q;

  // intialising starting
  vector<int> temp = {0, (int)this->list.size()};
  q.push(temp);

  while (!q.empty()) {
    vector<int> temp = q.front();
    q.pop();

    int start = temp[0];
    int end = temp[1];

    if (start >= end) {
      continue;
    }

    int ptr = helper(end - 1, start - 1, start, end);

    // entring in queue
    vector<int> st = {start, ptr};
    q.push(st);

    vector<int> en = {ptr + 1, end};
    q.push(en);
  }
}

int QuickSort::helper(int pivot, int ptr, int start, int end) {
  for (int i = start; i < end; i++) {
    if (this->list[i] <= this->list[pivot]) {
      ptr++;
      swap(this->list[ptr], this->list[i]);
    }
  }

  return ptr;
}
