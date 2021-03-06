#include <iostream>

template <typename T>
void selection_sort(T arr[], size_t size)
{
  size_t i, j, k;

  for (i = 0; i < size; i++) {
    j = k = i;

    while (j < size) {
      if (arr[j] > arr[k]) {
        k = j;
      }
      j++;
    }

    std::swap(arr[i], arr[k]);
  }
}

int main()
{
  int arr[] = {5, 1, 3, -10, 2, 4};
  size_t n = 6;

  selection_sort<int>(arr, n);

  return 0;
}
