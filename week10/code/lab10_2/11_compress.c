#include <stdio.h>
#include <string.h>

int main() {
    int len;
    int count = 0;
    char arr[1000];
    printf("압축할 문장 입력: ");
    scanf("%s", arr);
    len = strlen(arr);

    for (int i = 0; i < len; i++) {
        count++;

        if (arr[i] != arr[i + 1]) {
            if (count == 1) {
                printf("%c", arr[i]);
            } else {
                printf("%d%c", count, arr[i]);
            }
            count = 0;
        }
    }
    return 0;
}