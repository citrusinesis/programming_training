#include <stdio.h>

int main() {
    int age;
    printf("나이를 입력하시오: ");
    scanf("%d", &age);
    printf("나이: %d\n", age);

    short id;
    printf("직원 아이디를 입력하시오: ");
    scanf("%hi", &id);
    printf("아이디: %hi\n", id);

    long produceCapacity;
    printf("생산량을 입력하시오: ");
    scanf("%ld", &produceCapacity);
    printf("생산량: %ld\n", produceCapacity);

    double numOfStars;
    printf("별의 개수를 입력하시오: ");
    scanf("%lf", &numOfStars);
    printf("별의 개수: %e\n", numOfStars);

    char character;
    printf("글자를 입력하시오: ");
    getchar();
    character = getchar();
    printf("글자: %c\n", character);
}