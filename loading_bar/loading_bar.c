#include <stdio.h>
#include <assert.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void print_loading_bar(int count)
{
    assert(count >= 0);
    assert(count <= 10);

    printf("\r[");
    int max = 10;
    for (int i = 0; i < count; ++i)
    {
        printf("#");
    }
    for (int j = max; j > count; --j)
    {
        printf(" ");
    }
    printf("]");
    printf(" %.1f%%", (float)count * 10);
    fflush(stdout);
    sleep(1);
}

int main()
{
    for (int i = 0; i <= 10; ++i)
        print_loading_bar(i);

    puts("");

    return 0;
}