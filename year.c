#include <stdio.h>
void isLeap(int year){
	
	if (year % 4 == 0 && (year % 100 !=0 || year % 400 == 0)){
			printf("%d is a leap year.", year);
		}
		else{
			printf("%d is not a leap year.", year);
		}
	}
		
void whenIsEaster(year){
	
	printf("\n");
	   int a,b,c,d,e,dayOfEaster;
	   
	   a = year % 19;
	   b = year % 4;
	   c = year % 7;
	   d = (19*a + 16) % 30;
	   e = (2*b + 4*c+6*d) % 7;
	   dayOfEaster = 3 + d + e;
	   if(dayOfEaster <= 30){
	   	printf("Easter is in %d april %d \n", dayOfEaster,year);
	   	printf("\n");
	   	printf("\n");
	   }
	   else{
	   	dayOfEaster -= 30;
	   	printf("Easter is in %d may %d \n", dayOfEaster,year);
	   	printf("\n");
	   	printf("\n");
	   }
}

void programStart(){
	int year;
for(year = 2010; year <= 2030; year++){
		isLeap(year);
		whenIsEaster(year);
	}
}

int main() {
   programStart();
}
