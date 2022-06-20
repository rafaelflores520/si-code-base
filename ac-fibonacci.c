#include <stdio.h>
int main()
{

    int i, n_pos = 8;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    for (i = 3; i <= n_pos; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    if (n_pos == 1)
    {
        printf("El fibonacci en la %d pos es: %d", n_pos, t2);
    }
    else
    {
        printf("El fibonacci en la %d pos es: %d", n_pos, nextTerm);
    }

    return 0;
}
