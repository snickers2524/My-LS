
#include <string.h> // For strlen()
#include "optionsStruct.h"

void arguements_handler(Options *options, int numArgs,char *args[]) {
    for (int i = 0; i < numArgs; ++i) {
        if (args[i][0] == '-') {
            for (int j = 1; j < strlen(args[i]); ++j) {
                if (args[i][j] == 'i') {
                    options->i = true;
                }

                if (args[i][j] == 'l') {
                    options->l = true;
                }

                if (args[i][j] == 'R') {
                    options->R = true;
                }
            }
        }
    }
}

