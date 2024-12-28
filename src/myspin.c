/*  
 * usage: myspin <x>
 * Sleeps for <x> seconds in 1-second chunks.
 *
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, secs;

    if (argc != 2) {
        // fprintf(stderr, "Usage 2: %s <x>\n", argv[0]);
        fprintf(stderr, "Usage 2: %s %s %s <x>\n", argv[0], argv[1], argv[2]);
        exit(0);
    }
    secs = atoi(argv[1]);
    for (i=0; i < secs; i++)
        sleep(1);
    exit(0);
}
