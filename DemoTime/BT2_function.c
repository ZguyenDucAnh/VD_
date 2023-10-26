//BT2.
/*
Exercise 2: Write functions perform tasks below:
1. Input three integers from the keyboard
2. Find min and max of three given integers.
3. Calculate minus of square max and square min
4. Find and display to the screen all divisors of three given integers.

*/
#include <stdio.h>
#include <math.h>
void nhap(){
	int *a,*b,*c;
	printf("\nNhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	printf("\nNhap c: ");
	scanf("%d",&c);
}
//Max
void tim_max_3_so(){
	int a,b,c,max;
	
	if(a >= b && a >= c){
		max = a;
		printf("\nMax: %d",max);
	}else if(b >= a && b >= c){
		max = b;
		printf("\nMax: %d",max);
	}else if(c >= a && c >= b){
		max = c;
		printf("\nMax: %d",max);
	}
	
}
//Min
void tim_min_3_so(){
	int a,b,c,min;
	
	if(a <= b && a <= c){
		min = a;
		printf("\nMin: %d",min);
	}else if(b <= a && b <= c){
		min = b;
		printf("\nMin: %d",min);
	}else if(c <= a && c <= b){
		min = c;
		printf("\nMin: %d",min);
	}

	
}


void TimUoc1(int *a){
	
	printf("\nUoc so cua %d la:\n",a);
	for(int i = 1; i<=*a; i++){
		if(*a%i==0){
			printf("%d ",i);
		}
	}
	printf("\n");
	return;
}
int main(){
	int *a,b,c,max,min;
	nhap();
	tim_max_3_so();
	tim_min_3_so();

	
	
	TimUoc1(&a);
	//TimUoc1(b);
	//TimUoc1(c);
	

	return 0;
}







