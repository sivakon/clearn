import core.stdc.stdio;

extern (C):

/** Primes  */
int primes(int iterations) {

    int count;
    __gshared bool[8191] flags;

    printf("10 iterations\n");
    foreach (iter; 1 .. iterations) {
        count = 0;
        flags[] = true;
        foreach (i; 0 .. flags.length) {
            if (flags[i]) {
                const prime = i + i + 3;
                auto k = i + prime;
                while (k < flags.length) {
                    flags[k] = false;
                    k += prime;
                }
                count += 1;
            }
        }
    }
    printf("%d primes\n", count);
    return count;
}