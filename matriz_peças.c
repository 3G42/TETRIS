#include <stdio.h>
#include <conio2.h>
//matriz de todas pe�as e suas rota��es
void quadrado()
{
	int quadrado[8][12]=   {{0,0,0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0,0,0},
							{2,3,5,2,3,5,0,0,0,0,0,0},
							{1,3,4,1,3,4,0,0,0,0,0,0},
							{2,3,5,2,3,5,0,0,0,0,0,0},
							{1,3,4,1,3,4,0,0,0,0,0,0}};
}
void I()
{
	int I1[8][12]=  {{2,3,5,0,0,0,0,0,0,0,0,0},
					{1,3,4,0,0,0,0,0,0,0,0,0},
					{2,3,5,0,0,0,0,0,0,0,0,0},
					{1,3,4,0,0,0,0,0,0,0,0,0},
					{2,3,5,0,0,0,0,0,0,0,0,0},
					{1,3,4,0,0,0,0,0,0,0,0,0},
					{2,3,5,0,0,0,0,0,0,0,0,0},
					{1,3,4,0,0,0,0,0,0,0,0,0}};

	int I2[8][12]= {{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{2,3,5,2,3,5,2,3,5,2,3,5},
					{1,3,4,1,3,4,1,3,4,1,3,4},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0}};
}
void Ni()
{
	int Ni1[8][12]=  {{2,3,5,0,0,0,0,0,0,0,0,0},
			     	{1,3,4,0,0,0,0,0,0,0,0,0},
					{2,3,5,2,3,5,0,0,0,0,0,0},
					{1,3,4,1,3,4,0,0,0,0,0,0},
					{0,0,0,2,3,5,0,0,0,0,0,0},
					{0,0,0,1,3,4,0,0,0,0,0,0},	
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0}};
					
	int Ni2[8][12]= {{0,0,0,0,0,0,2,3,5,2,3,5},
					{0,0,0,0,0,0,1,3,4,1,3,4},
					{0,0,0,2,3,5,2,3,5,0,0,0},
					{0,0,0,1,3,4,1,3,4,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0}};
}
void N()
{
	int N1[8][12]= {{0,0,0,2,3,5,0,0,0,0,0,0},
					{0,0,0,1,3,4,0,0,0,0,0,0},
					{2,3,5,2,3,5,0,0,0,0,0,0},
					{1,3,4,1,3,4,0,0,0,0,0,0},
					{2,3,5,0,0,0,0,0,0,0,0,0},
					{1,3,4,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0}};
					
	int N2[8][12]= {{2,3,5,2,3,5,0,0,0,0,0,0},
					{1,3,4,1,3,4,0,0,0,0,0,0},
					{0,0,0,2,3,5,2,3,5,0,0,0},
					{0,0,0,1,3,4,1,3,4,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},};
}
void Li()
{
	int Li1[8][12]= {{0,0,0,0,0,0,0,0,0,0,0,0},
				  	 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,2,3,5,0,0,0,0,0,0},
					 {0,0,0,1,3,4,0,0,0,0,0,0},
					 {0,0,0,2,3,5,0,0,0,0,0,0},
					 {0,0,0,1,3,4,0,0,0,0,0,0},
					 {2,3,5,2,3,5,0,0,0,0,0,0},
					 {1,3,4,1,3,4,0,0,0,0,0,0}};
	
	int Li2[8][12]= {{2,3,5,2,3,5,2,3,5,0,0,0},
				 	 {1,3,4,1,3,4,1,3,4,0,0,0},
					 {0,0,0,0,0,0,2,3,5,0,0,0},
					 {0,0,0,0,0,0,1,3,4,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0}};
					 
	int Li3[8][12]= {{2,3,5,2,3,5,0,0,0,0,0,0},
					 {1,3,4,1,3,4,0,0,0,0,0,0},
					 {2,3,5,0,0,0,0,0,0,0,0,0},
					 {1,3,4,0,0,0,0,0,0,0,0,0},
					 {2,3,5,0,0,0,0,0,0,0,0,0},
					 {1,3,4,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0}};
					 
	int Li4[8][12]= {{2,3,5,0,0,0,0,0,0,0,0,0},
				  	 {1,3,4,0,0,0,0,0,0,0,0,0},
					 {2,3,5,2,3,5,2,3,5,0,0,0},
					 {1,3,4,1,3,4,1,3,4,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0}};
}
void L()
{
	int L1[8][12]=  {{0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,2,3,5,0,0,0,0,0,0},
					 {0,0,0,1,3,4,0,0,0,0,0,0},
					 {0,0,0,2,3,5,0,0,0,0,0,0},
					 {0,0,0,1,3,4,0,0,0,0,0,0},
					 {0,0,0,2,3,5,2,3,5,0,0,0},
					 {0,0,0,1,3,4,1,3,4,0,0,0}};
					 
	int L2[8][12]=  {{0,0,0,0,0,0,0,0,0,2,3,5},
					 {0,0,0,0,0,0,0,0,0,1,3,4},
					 {0,0,0,2,3,5,2,3,5,2,3,5},
					 {0,0,0,1,3,4,1,3,4,1,3,4},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
				  	 {0,0,0,0,0,0,0,0,0,0,0,0}};
					
	int L3[8][12]=  {{2,3,5,2,3,5,0,0,0,0,0,0},
					 {1,3,4,1,3,4,0,0,0,0,0,0},
					 {0,0,0,2,3,5,0,0,0,0,0,0},
					 {0,0,0,1,3,4,0,0,0,0,0,0},
					 {0,0,0,2,3,5,0,0,0,0,0,0},
					 {0,0,0,1,3,4,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0}};
					 
	int L4[8][12]=  {{2,3,5,2,3,5,2,3,5,0,0,0},
					 {1,3,4,1,3,4,1,3,4,0,0,0},
					 {2,3,5,0,0,0,0,0,0,0,0,0},
					 {1,3,4,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0}};				
}
void T()
{
	int T1[8][12]= {{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{2,3,5,0,0,0,0,0,0,0,0,0},
					{1,3,4,0,0,0,0,0,0,0,0,0},
					{2,3,5,2,3,5,0,0,0,0,0,0},
					{1,3,4,1,3,4,0,0,0,0,0,0},
					{2,3,5,0,0,0,0,0,0,0,0,0},
					{1,3,4,0,0,0,0,0,0,0,0,0}};
	
	int T2[8][12]=  {{0,0,0,0,2,3,5,0,0,0,0,0},
					 {0,0,0,0,1,3,4,0,0,0,0,0},
					 {0,2,3,5,2,3,5,2,3,5,0,0},
					 {0,1,3,4,1,3,4,1,3,4,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0,0,0}};
					 
	int T3[8][12]= {{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,2,3,5},
					{0,0,0,0,0,0,0,0,0,1,3,4},
					{0,0,0,0,0,0,2,3,5,2,3,5},
					{0,0,0,0,0,0,1,3,4,1,3,4},
					{0,0,0,0,0,0,0,0,0,2,3,5},
					{0,0,0,0,0,0,0,0,0,1,3,4},
					{0,0,0,0,0,0,0,0,0,0,0,0}};
	
	int T4[8][12]= {{2,3,5,2,3,5,2,3,5,0,0,0},
					{1,3,4,1,3,4,1,3,4,0,0,0},
					{0,0,0,2,3,5,0,0,0,0,0,0},
					{0,0,0,1,3,4,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0}};
}
int main()
{
	return 0;
}



