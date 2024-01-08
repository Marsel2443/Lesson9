/*
Пример №1
Данные на входе: 		C3 
Данные на выходе: 	BLACK 

Пример №2
Данные на входе: 		G8 
Данные на выходе: 	WHITE 
 */


#include <stdio.h>
void Scanf (char arr[])
{
	for(int i=0;i<2;i++){
		scanf("%c",&arr[i]);
	}
}

int main(void)
{
	int mass[8][8];
	int i,j;
	int a=0;
	int b=1;
	for(i=0;i<8;i++){                      
		for(j=0;j<8;j++){
			if((i+j)%2!=0){
				mass[i][j]=b;
			}
			else{
				mass[i][j]=a;
			}
		}
	}

	
	char arr[2];
	Scanf(arr);
	int cout=0;
	int KorGor;
	int KorVert;
	for(char c='A';c!='H';c++){            
		cout++;
		if (arr[0]==c){
			KorGor=cout;
		}
	}
	cout=0;
	for(char p='1';p!='9';p++){
		cout++;
		if (arr[1]==p){
			KorVert=cout;
		}
	}

	
	
	mass[KorGor][KorVert] ? printf("WHITE" ): printf("BLACK");      
	
	
	return 0;
}
