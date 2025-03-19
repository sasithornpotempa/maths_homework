
int main(void) {
  int num1 = rand() % 10 + 1;
  int num2 = rand() % 10 + 1;
  int sum = num1 + num2;
  printf("%d + %d = %d\n", num1, num2, sum);
  return 0;
}