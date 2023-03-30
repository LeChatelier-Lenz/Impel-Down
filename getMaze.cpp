#include "getMaze.h"
void getMaze(int height,int width)
{
	int i,j;
	for(i=1;i<=height;i++){
		for(j=1;j<=width;j++)
		{
			scanf("%c",&cell[i][j]);
			if(cell[i][j]=='$')
			{
				start[0]=i;
				start[1]=j;
			}
			if(cell[i][j]=='\n')
			j--;
		}
		
	}
	return;
}
