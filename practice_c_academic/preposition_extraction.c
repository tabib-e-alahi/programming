#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *prepositions[] = {
    "about", "above", "across", "after", "against", "along", "among", "around",
    "at", "before", "behind", "below", "beneath", "beside", "between", "beyond",
    "by", "down", "during", "except", "for", "from", "in", "inside", "into",
    "like", "near", "of", "off", "on", "onto", "out", "outside", "over",
    "past", "since", "through", "to", "toward", "under", "until", "up",
    "upon", "with", "within", "without"
};
const int num_prepositions = sizeof(prepositions) / sizeof(prepositions[0]);


void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {
    char input[1000];
    int counts[50] = {0};

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    toLowerCase(input);

    char *token = strtok(input, " ,.-\n");
    while (token != NULL) {
        for (int i = 0; i < num_prepositions; i++) {
            if (strcmp(token, prepositions[i]) == 0) {
                counts[i]++;
                break;
            }
        }
        token = strtok(NULL, " ,.-\n");
    }

    for (int i = 0; i < num_prepositions; i++) {
        if (counts[i] > 0) {
            printf("%s - %d\n", prepositions[i], counts[i]);
        }
    }

    return 0;
}
