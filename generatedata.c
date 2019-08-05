
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(int argc, char* argv[])
{
    srand(time(NULL));

    double amount;

    for(int i = 0; i < 64; i++)
    {
        amount = ((rand() % 200) - 100);

        printf("%lf\n", amount);
    }

    fprintf(stderr, "%s\n", "data generated");

    return EXIT_SUCCESS;
}
