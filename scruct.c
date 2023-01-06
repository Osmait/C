#include <stdio.h>
#include <string.h>

struct Person
{
    int age;
};

int main(int argc, char const *argv[])
{
    int edad = 10;
    int *edad2 = &edad;
    printf("%d\n", edad2);
    printf("%d", (edad2 + 1));
    return 0;
}
