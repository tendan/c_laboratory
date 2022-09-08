#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void* work_of_thread(void* raw_no)
{
    int no = (int)raw_no;
    for (int i = 0; i < 10; ++i)
    {
        printf("This is my working thread #%d with message: %d\n", no, i);
        sleep(1);
    }
}

int main(int argc, char **argv)
{
    pthread_t my_thread1, my_thread2, my_thread3;

    pthread_create(&my_thread1, NULL, work_of_thread, (void*)1);
    pthread_create(&my_thread2, NULL, work_of_thread, (void*)2);
    pthread_create(&my_thread3, NULL, work_of_thread, (void*)3);

    pthread_join(my_thread1, NULL);
    pthread_join(my_thread2, NULL);
    pthread_join(my_thread3, NULL);

    return 0;
}