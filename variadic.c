#include<stdio.h>
#include<stdarg.h> //vairadic function library

// int getSum (int a, int b){
// 	return a+b;
// };

 int getSum (int n,...){
 	va_list list;
 	int sum=0;
 	va_sum(list, n);
 	
 	for(int i=0; i<n; i++){
 		int a= va_arg(list, int);
 		sum=sum+a;
	 }
	va_end(list);
	return sum;
 };
 
 int main(){
// 	int a=10,b=10;
// 	int sum=getSum(a,b);
// 	printf("%d",sum);

	int res = getSum(3, 10, 10, 12);
 }
