void trim_right(char str[]) {
    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == '\r') {
            str[i] = '\0';
            len--;
        } else {
            break;
        }
    }
}
