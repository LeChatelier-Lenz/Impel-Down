#include "solve.h"
void solve(int i0,int j0,int k0,int l0) // 函数体
{
	int i=i0,j=j0,k=k0,l=l0;
	if(cell[i][j]=='&')
	{
		l++;
		step[l]=k;
	}
	else if(cell[i][j]==' '&&abs(step[l]-k)!=2||cell[i][j]==' '&&l==0)
	{
		l++;
		step[l]=k;
		k=1;
		j++;
		solve(i,j,k,l);
	}
	else if((cell[i][j]=='#'||abs(step[l]-k)==2)&&k<4)
	{
		switch(k)
		{
			case 1:j--;break;
			case 2:i--;break;
			case 3:j++;break;
			
		}
		k++;
		switch(k)
		{
			case 1:j++;break;
			case 2:i++;break;
			case 3:j--;break;
			case 4:i--;break;
			
		}
		solve(i,j,k,l);
	}
	else if(k==4)
	{
		i++;
		do
		{
			switch(step[l])
		{
			case 1:j--;break;
			case 2:i--;break;
			case 3:j++;break;
			case 4:i++;break;
			
		}
		    k=step[l]+1;   //回溯到第一个能够有另一条通路的位置 
		    step[l]=0;//因为最后是靠step[l]!=0来循环的，所以还是要清除 
			l--;
		}while(k>4);
		switch(k)
		{
			case 1:j++;break;
			case 2:i++;break;
			case 3:j--;break;
			case 4:i--;break;
	    }
		solve(i,j,k,l);
	}
	
	
}

