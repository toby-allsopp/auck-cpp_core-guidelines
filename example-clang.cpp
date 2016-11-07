int f(int *a, int i) {
  return a[i];
}

int main() {
  int a[] = {1, 2, 3};
  const int *p = a;
  (void) a[f((int*)p, 0)];
}
