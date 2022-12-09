void trim_left(char str[]) {
    int len = strlen(str);
    int offset = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == '\r') {
            offset++;
        } else {
            break;
        }
    }

    if (offset > 0) {
        for (int i = 0; i < len; i++) {
            str[i] = str[i + offset];
        }
    }
}
