#include<stdio.h>
#include<math.h>
#define MAXLENGTH 15
extern char cell[MAXLENGTH][MAXLENGTH];
extern int step[MAXLENGTH*MAXLENGTH];
void solve(int i0,int j0,int k0,int l0); // 函数声明