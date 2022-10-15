#include <stdio.h>

int main() {
    int income;
    printf("과세 표준을 입력하시오(만원): ");
    scanf("%d", &income);

    if (income <= 1000)
        printf("소득세는 %.0f만원 입니다.\n", income * 0.08);
    else if (income > 1000 && income <= 4000)
        printf("소득세는 %.0f만원 입니다.\n",
               (income - 1000) * 0.17 + 1000 * 0.08);
    else if (income > 4000 && income <= 8000)
        printf("소득세는 %.0f만원 입니다.\n",
               (income - 1000) * 0.17 + 1000 * 0.26);
    else
        printf("소득세는 %.0f만원 입니다.\n",
               (income - 1000) * 0.17 + 1000 * 0.35);
}