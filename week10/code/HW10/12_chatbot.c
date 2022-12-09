#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void strip(char *str) { str[strcspn(str, "\n")] = 0; }

int main() {
    srand(time(NULL));

    char name[100] = {0};
    char *ansName[3] = {
        "I'm sorry %s, I didn't understand what you said.\n",
        "%s, I'm listening, Keep Going!\n",
        "%s So what's the next story?\n",
    };
    char *ans[3] = {
        "I'm sorry, I didn't understand what you said.\n",
        "I'm listening, Keep Going!\n",
        "So what's the next story?\n",
    };

    int flag = 0, ansNum = 0;

    while (1) {
        printf("> ");
        char input[256];
        fgets(input, sizeof(input), stdin);
        strip(input);

        if (!strcmp(input, "hi")) {
            printf("Hello! How are you today?\n");
        } else if (!strcmp(input, "how are you")) {
            printf("I'm doing well, thank you for asking!\n");
        } else if (!strcmp(input, "what's your name")) {
            printf("My name is Assistant. I am a chatbot program.\n");
            printf("What's your name?\n> ");
            fgets(name, sizeof(name), stdin);
            strip(name);
            flag = 1;
            printf("Alright!\nAny Question?\n");
        } else if (!strcmp(input, "bye")) {
            printf("Goodbye!\n");
            break;
        } else {
            if (flag)
                printf(ansName[rand() % 3], name);
            else
                printf(ans[rand() % 3]);
        }
    }
}
