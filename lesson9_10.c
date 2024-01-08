/*
Пример
Данные на входе: 		1 1 1 1 1 
                        2 2 2 2 2
                        3 3 3 3 3 
                        4 4 4 4 4 
                        5 5 5 5 5 
Данные на выходе: 	15 
 */


#include <stdio.h>

int main(void)
{
	int mass[5][5];
	int sum=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&mass[i][j]);
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if (i==j){
				sum=sum+mass[i][j];
			}
		}
	}
	printf("%d",sum);
	
	return 0;
}
