#include "./malloc.h"
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
    NginxMalloc MemPool;
    int total = 0;
    for (int i=0; i<30240000; ++i)
    {
        int size = rand() % 200;
        total += size;
#if 0
        if (size  <= 128)
        std::cout << "current size is " << size
                  << " time is " << i+1 
                  << " total size is " << total << endl;
#endif
        char *p = (char *)MemPool.allocate(size);
        *p++ = 'a';
    }
    return 0;
}
