/*
Пример №1
Данные на входе: 		2 3 1 4 7 6 9 8 10 0 
Данные на выходе: 	5 

Пример №2
Данные на входе: 		41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0 
Данные на выходе: 	35
 */


#include <stdio.h>

int Input(int arr[], int n)              
{	int i=0;
	int c=0;
	do{
		scanf("%d",&arr[i]);
		c=arr[i];
		i++;
	}while(c!=0);
    return i-1;
}

void digit(int arr[], int len)              
{
	int digit =0;
	int Min=1000;
	int Max=0;
    for (int i = 0; i < len; i++){         
		if(arr[i]>Max){
			Max=arr[i];
		}
		if(arr[i]<Min){
			Min=arr[i];
		}
	}
	for(int j=Min; j!=Max;j++){             
		int cout=0;
		for(int k=0; k<len; k++){
			if(arr[k]==j){
				cout++;
			}
		}
		if(cout==0){
			digit=j;
		}	
	}
	
    printf("%d", digit);
}

int main(int argc, char **argv)
{
	int N=30;
	int mass[N];
	int cout=Input(mass,N);
	digit(mass,cout);
	
	return 0;
}

