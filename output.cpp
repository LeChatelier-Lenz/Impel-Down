#include "output.h"
void output(int a,int b,int c,int d)
{
	int i,j;
	int x=a,y=b;
	for(i=1;step[i]!=0;i++)
	{
		switch(step[i])
		{
			case 1:y++;break;
			case 2:x++;break;
			case 3:y--;break;
			case 4:x--;break;
			
		}
		if(cell[x][y]!='&')
		cell[x][y]='*';
	}
	
	printf("\nThe solution is:\n"); 
	for(i=1;i<=c;i++)
	{
	
    	for(j=1;j<=d;j++)
    	{
	        printf("%c",cell[i][j]);
	    }   
	    printf("\n");
	}
	
}
