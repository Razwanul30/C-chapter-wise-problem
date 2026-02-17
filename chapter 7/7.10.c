#include <stdio.h>

int main() {
  int arr[100], n, i, key, low, high, mid, result = -1;
  
  printf("Enter the number of elements in the sorted array: ");
  scanf("%d", &n);
  
  printf("Enter the elements of the sorted array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("Enter the key value to search for: ");
  scanf("%d", &key);
  
  low = 0;
  high = n - 1;
  
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] == key) {
      result = mid;
      break;
    } else if (arr[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  
  if (result == -1) {
    printf("Key not found in the array\n");
  } else {
    printf("Key found at index %d\n", result);
  }
  
  return 0;
}