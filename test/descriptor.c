/* 
* @Author: shishao
* @Date:   2018-09-13 11:05:18
* @Last Modified by:   shishao
* @Last Modified time: 2018-09-14 11:37:01
*/

#include <stdio.h>

int main() {
    static struct descriptor {
        struct descriptor *free;
        struct descriptor *link;
        const void *ptr;
        long size;
        const char *file;
        int line;
    } *htab[2048];

    static struct descriptor freelist = { &freelist };//static struct descriptor freelist = { .free = &freelist, };//初始化第一个变量

    struct descriptor *bp;

    bp = freelist.free;

    if(bp){
        printf("bp is not NUll, it's address is: %p\n", bp);
    }else{
        printf("bp is not NUll\n");
    }


    return 0;
}