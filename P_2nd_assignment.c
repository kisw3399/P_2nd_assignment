#include<stdio.h>
#include<math.h>

 int checkPrimeNumber(int n){
 int i,flag=1;
 for(i=2; i<= n/2; i++){
 if(n%i== 0){
 flag =0;
 break;}
 }
 return flag;
 }

 int checkArmstrongNumber(int number){
 int originalNumber,remainder,result=0,n=0,flag=0;

 originalNumber=number;
 while(originalNumber!=0){
 originalNumber=originalNumber/10;
 n++;
} 
 originalNumber=number;
 while(originalNumber!=0){
 remainder=originalNumber%10;
 result=result+ pow(remainder,n);
 originalNumber=originalNumber/10;
}
 originalNumber=number;
 if(originalNumber==result)
 flag=1;
 else flag=0;

 return flag;
}


int main(){
  int checkPrimeNumber(int n);
  int checkArmstrongNumber(int n);

  int Push; 
  printf("Push one of 1,2,3\n1. Display Prime Numbers Between Intervals Using Function.\n2. Check Prime or Armstrong Number Using User-defined Function.\n3. Check Whether a Number can be Expressed as Sum of Two Prime Numbers. ");
  scanf("%d", &Push);

  if(Push==1){
  int n1,n2,i,flag;
  int checkPrimeNumber(int n);
  printf("Enter two positive integers: ");
  scanf("%d %d", &n1, &n2);
  printf("Prime numbers between %d and %d are: ", n1,n2);
  
  for(i=n1+1; i<n2; i++){
  flag=checkPrimeNumber(i);
  if(flag==1){
  printf("%d\t", i);
  }
  }
  }

  if(Push==2){
  int n,flag;
  int checkPrimeNumber(int n);
  int checkArmstrongNumber(int n);
  printf("Enter a positive integer: ");    
  scanf("%d", &n);

  flag = checkPrimeNumber(n);    
  if (flag == 1)    
  printf("%d is a prime number.\n", n);
  else printf("%d is not a prime number.\n", n);
  
  flag = checkArmstrongNumber(n);    
  if (flag == 1)        
  printf("%d is an Armstrong number.\n", n);    
  else printf("%d is not an Armstrong number.\n",n);
  }

  if(Push==3){
  int n,i,flag=0;
  int checkPrimeNumber(int n);
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for(i=2; i<=n/2; i++){
  if(checkPrimeNumber(i) ==1){
  if(checkPrimeNumber(n-i)==1){
  printf("%d = %d + %d\n", n, i, n-i);
  flag=1;
  }
  }
  }
  if(flag == 0)
  printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
  }
	return 0;
}