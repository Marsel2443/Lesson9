/*
Пример
Данные на входе: 		Hello123 world77. 
Данные на выходе: 	1 1 2 1 3 1 7 2 
 */


#include <stdio.h>
int Scanf (char arr[])
{
	char c;
	int i=0;
	while((c=getchar()) != '.'){
		arr[i++]=c;
	}
	arr[i]='\0';
	return i;
}

void print_digit(char s[])
{
	char digit;
	for (digit ='1';digit<='9';digit++){
		int i=0,cout=0;
		while(s[i]!=0){
			if(s[i]==digit){
				cout++;
			}
			i++;
		}
		if (cout>0){
			printf("%c %d ",digit,cout);
		}
	}

}

int main(void)
{
	int N=20;
	char mass[N];
	Scanf(mass);
	print_digit(mass);
	
	
	return 0;
}
