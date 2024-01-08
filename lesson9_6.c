/*
Пример
Данные на входе: 		4 6 1 2 3 4 5 6 7 8 9 10.
Данные на выходе: 	3 
 */


#include <stdio.h>

void Input(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
}

int count_between (int from, int to, int size, int arr[])
{
	int a,b=0;
	for (int i=2;i<size;i++){
		if (arr[i]==from){
			a=i;
		}
		if(arr[i]==to){
			b=i;
		}
	}
	int cout;
	a<b ? cout=b-a+1 : (cout=a-b+1);
	
	return cout;
}

int main(void)
{
	int N=30;
	int mass[N];
	Input(mass,N);
	int a=mass[0];
	int b=mass[1];
	printf("%d", count_between(a,b,N,mass));

	
	return 0;
}

