#include<stdio.h>
#include<conio.h>
#include<math.h>
//function prototype
void menu(void);
void inputArray(int a[],int *n);
void displayArray(int a[],int n);
void findMinEvenMaxOdd(int a[],int n,int *max,int *min);
int checkPrime(int num);
int countPrime(int a[],int n);
int checkSquare(int num);
int calcTotalSquare(int a[],int n);
void sortArray(int a[],int n);

void main(void)
{
//declare variable
int arr[100];
int n;
int count;
int max;
int min;
int total;
int choice;
//Clear screen

do{
menu();
scanf("%d",&choice);
switch(choice)
{
case 1:inputArray(arr,&n);
break;
case 2:displayArray(arr,n);
break;
case 3:findMinEvenMaxOdd(arr,n,&max,&min);
if(min==32767)
printf("\n There is not any even number inthe array");
else
printf("\n Min even in the array is:%d",min);
if(max==-32768)
printf("\n There is not any odd number in the array");
else printf("\n Max odd in the array is:%d",max);
break;
case 4:count=countPrime(arr,n);
if(count==0)
printf("\nThere is not any prime number in the array");
else
printf("\nThere are %d prime numbers in the array",count);
break;
case 5:total=calcTotalSquare(arr,n);
if(total==0)
printf("\nThere is not any square number in the array");
else
printf("\nTotal of all square numbers in the array is:%d",total);
break;
case 6: sortArray(arr,n);
displayArray(arr,n);
}
}while(choice!=7);
printf("\nPress any key to continue");
getch();//stop screen to view result
}
//Define functions
void menu(void)
{
printf("\n\t1.Enter the size and integer array from the keyboard");
printf("\n\t2.Display the given array to the screen");
printf("\n\t3.Find and display min even and max odd number");
printf("\n\t4.Count prime number in the array. Display the result to the screen ");
printf("\n\t5.Calculate and display total all square numbers in the array");
printf("\n\t6.Sort array ascending. Display array after sorting to the screen");
printf("\n\t7.Exit from program");
printf("\n\tEnter your choice please:");
}
void inputArray(int a[],int *n)
{
int i;//index of element
printf("\nEnter number of elements in a array please:");
scanf("%d",n);
//input array
for(i=0;i<*n;i++)
{
printf("\n Enter arr[%d]=",i+1);
scanf("%d",&a[i]);
}
}
void displayArray(int a[],int n)
{
int i;//index of element
printf("\nAll elements of the array are:");
for(i=0;i<n;i++)
printf("%5d",a[i]);
}void findMinEvenMaxOdd(int a[],int n,int *max,int *min)
{
int i;
*max=-32768;//-32768 is min of integer data type
*min=32767;//32767 is max of integer data type
for(i=0;i<n;i++)
{
if(a[i]%2!=0 && a[i]>*max)
*max=a[i];
if(a[i]%2==0 && a[i]<*min)
*min=a[i];
}
}
int checkPrime(int num)
{
int flag;
int i;
flag=0;
for(i=2;i<num;i++)
if(num%i==0)
{
flag=1;
break;
}
return 1-flag;
}
int countPrime(int a[],int n)
{
int count=0;
int i;
for(i=0;i<n;i++)if(checkPrime(a[i])==1)
count++;
return count;
}
int checkSquare(int num)
{
int flag=0;
if(num>=0&&(int)sqrt(num)*(int)sqrt(num)==num)
flag=1;
return flag;
}
int calcTotalSquare(int a[],int n)
{
int total=0;
int i;
for(i=0;i<n;i++)
if(checkSquare(a[i])==1)
total+=a[i];
return total;
}
void sortArray(int a[],int n)
{
int i;
int j;
int temp;
for(i=0;i<n-1;i++)
for(j=i;j<n;j++)
if(a[j]<a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;}
}