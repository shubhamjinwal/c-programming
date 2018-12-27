int max (int num1, int num2) {
  if (num1>num2){
    printf("your answer is %d", num1);
  }
  else {
    printf("your answer is %d", num2);
  };
}

int main(void) {
  printf("max(42, -69) is %d\n", max(42, -69));
  printf("max(33, 0) is %d\n", max(33, 0));
  printf("max(0x123456, 123456) is %d\n", max(0x123456, 123456));
  printf("max(0x451215AF, 0x913591AF) is %d\n", max(0x451215, 0x913519AF));
  return 0;
}


