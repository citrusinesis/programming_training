#include <stdio.h>

char *gets_s(char *s, int size) {
    int ch, cnt = 0;
    char *p = s;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (cnt++ >= size)
            break;
        *s++ = (char)ch;
    }

    fflush(stdout);
    *s = '\0';
    return p;
}

void encrypt(char cipher[], int shift) {
    int i = 0;

    while (cipher[i] != '\0') {
        if (cipher[i] >= 'A' && cipher[i] <= 'z') {
            cipher[i] += shift;
            if (cipher[i] > 'z') {
                cipher[i] -= 26;
            }
        }
        i++;
    }
}

void main() {
    char cipher[50];
    int shift = 3;

    printf("암호화할 암호문 = ");
    gets_s(cipher, 50);
    encrypt(cipher, shift);

    printf("XOR KEY = 123456\n");
    printf("암호된 문장 = %s", cipher);
}
