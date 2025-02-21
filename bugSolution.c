int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  if (sizeof(arr) / sizeof(arr[0]) > 0) {
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}