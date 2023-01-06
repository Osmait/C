#include <stddef.h>

int find_smallest_int(const int array[/* len */], size_t len)

{
    int min = array[0];
    for (int i = 0; i < len; i++)
    {

        if (array[i] < min)
            min = array[i];
    }

    return min;
}

int main(int argc, char const *argv[])
{
    int lista[] = {34, -345, -1, 100};
    int result = find_smallest_int(lista, 4);
    printf("%d", result);
    return 0;
}
