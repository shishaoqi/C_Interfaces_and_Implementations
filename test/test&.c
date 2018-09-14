/* 
* @Author: shishao
* @Date:   2018-09-04 13:15:55
* @Last Modified by:   shishao
* @Last Modified time: 2018-09-04 13:32:48
*/

#include <stdio.h>

int main() {
    //测试数值  1953210368
    unsigned long h = 1953210368;//1953210367
    h &= 2048-1;

    printf("%ld\n", h);
    return 0;
}