/*
* @Author: shishao
* @Date:   2018-09-11 22:49:46
* @Last Modified by:   shishao
* @Last Modified time: 2018-09-11 23:24:15
*/

#include <stdio.h>
#include "mem.h"

int main() {
    union align {
    #ifdef MAXALIGN
        char pad[MAXALIGN];
    #else
        int i;
        long l;
        long *lp;
        void *p;
        void (*fp)(void);
        float f;
        double d;
        long double ld;
    #endif
    };

    #define NALLOC ((4096 + sizeof (union align) - 1)/ \
    (sizeof (union align)))*(sizeof (union align))

    long nbytes = 49;
    //Mem_alloc 首先将nbytes向上舍入，使得其返回的每个指针都对齐到 联合align大小的位数
    nbytes = ((nbytes + sizeof (union align) - 1)/
        (sizeof (union align)))*(sizeof (union align));
    printf("align size: %ld %ld\n", sizeof (union align), nbytes);
    printf("NALLOC size: %ld\n", NALLOC);
    return 0;
}