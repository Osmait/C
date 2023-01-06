#include <stdio.h>
#include <stdlib.h>

int hex_to_dec(const char *source)
{
    return (int)strtol(source, NULL, 16);
}

int main(int argc, char const *argv[])
{
    int result = hex_to_dec("a");
    printf("%d", result);

    return 0;
}
