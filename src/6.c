// Random math problem generator
int main() {
  // Generate two random numbers between 1 and 10
  int num1 = rand() % 10 + 1;
  int num2 = rand() % 10 + 1;

  // Ask the user to input the correct answer
  printf("What is %d x %d?\n", num1, num2);

  // Get the user's answer and compare it with the correct solution
  int answer;
  scanf("%d", &answer);
  if (answer == num1 * num2) {
    printf("Correct!\n");
  } else {
    printf("Incorrect. The correct answer is %d\n", num1 * num2);
  }

  return 0;
}
