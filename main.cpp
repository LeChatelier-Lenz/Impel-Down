#include <iostream>
#include "getMaze.h"
#include <math.h>
#include <stdio.h>
// #include "solve.cpp"
// #include "output.cpp"
#include "output.h"
#include "solve.h"
int start[2];
#define MAXLENGTH 15
char cell[MAXLENGTH][MAXLENGTH];
int step[MAXLENGTH * MAXLENGTH];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// void solve(int i0,int j0,int k0,int l0);
    // void output(int a,int b,int c,int d);
    int h, w, k = 1, l = 0;

    scanf("%d %d ", &h, &w); // blank is better to be omitted when scanf int variables
    getMaze(h, w);
    solve(start[0], start[1] + 1, k, l);
    output(start[0], start[1], h, w);
	return 0;
}
