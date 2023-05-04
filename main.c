#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define True 1
#define False 0

int main () {
    char * coins[] = {"WW", "WB", "WW", "BW", "BB", "BB"}; 
    long long samples=0, white_draws=0, all_white = 0;
    srand(getpid());
    while (True) {
        samples++;
        int i = rand() % 6;
        if (i < 3) {    // ["WW", "WB", "WW"]
            white_draws++;
            if (i == 0 || i == 2) // ["WW", "WW"]
                all_white++;
        }
        printf("Samples: %ld, White Draws: %ld, All White: %ld, P(W|W): %f \r", samples, white_draws, all_white, (double)all_white/white_draws);
    }
    return 0;
}

