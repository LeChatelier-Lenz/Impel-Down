// 一般 .h 文件把.cpp文件中要用到的非函数体部分都放进来，然后对应.cpp文件 include 一下它的.h文件
// 为了避免 .h 文件重复 include，可能会用到一个 #ifdef，不知道你们学了没
#include <stdio.h>

#define MAXLENGTH 15
extern char cell[MAXLENGTH][MAXLENGTH];
extern int step[MAXLENGTH*MAXLENGTH];
void output(int a,int b,int c,int d);