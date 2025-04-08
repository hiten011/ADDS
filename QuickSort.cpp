#include "QuickSort.h"

vector<int> QuickSort::sort(vector<int> list) { 
    this->list = list;
    helper(0, this->list.size());
    return this->list;
}

void QuickSort::helper(int start, int end) {
   if (start >= end) {
     return;
   }

   int ptr =  start - 1;
   int pivot = end - 1;

   for (int i = start; i < end; i++) {
       if (this->list[i] <= this->list[pivot]) {
        ptr++;
        swap(this->list[ptr], this->list[i]);
       }
   }

   helper(start, ptr);
   helper(ptr + 1, end);
}
