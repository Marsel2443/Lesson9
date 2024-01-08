/*
Пример №1
Данные на входе: 		1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 
Данные на выходе: 	NO 

Пример №2
Данные на входе: 		1 2 1 4 5 
Данные на выходе: 	YES 
 */
#include <stdio.h>

int Input(int arr[], int n)
{
int i,num;                          
	while(scanf("%d",&num)==1){
		arr[i++] = num;
	}  
    return i;
}

int is_two_same(int arr[], int n)
{
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=n;j!=i;j--){
			if (arr[j]==arr[i]){
				flag=1;
			}
		}
	}
	return flag;
}

int main(int argc, char **argv)
{
	int N=100;
	int mass[N];
	int cout = Input (mass,N);
	is_two_same(mass,cout)? printf("YES"):printf("NO");
	
	return 0;
}
