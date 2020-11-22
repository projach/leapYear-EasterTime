#include <stdio.h>
//this is a method to see if the year is leap or no
void isLeap(int year){
	
	if (year % 4 == 0 && (year % 100 !=0 || year % 400 == 0)){
			printf("%d is a leap year.", year);
		}
		else{
			printf("%d is not a leap year.", year);
		}
	}
//this is a method to find what date is the easter in every year
void whenIsEaster(int year){
	
	printf("\n");
	   int a,b,c,d,e,dayOfEaster;
	   //this is the formula to find easter
	   a = year % 19;
	   b = year % 4;
	   c = year % 7;
	   d = (19*a + 16) % 30;
	   e = (2*b + 4*c+6*d) % 7;
	   dayOfEaster = 3 + d + e;
	   //this is to see if the easter is in april or may
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
//this is the method who constructs the program
void programStart(){
	int year;
	// this is a for loop to go through 2010-2030
for(year = 2010; year <= 2030; year++){
		isLeap(year);
		whenIsEaster(year);
	}
}

int main() {
   programStart();
}
