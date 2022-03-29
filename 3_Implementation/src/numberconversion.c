#include<numberconversion.h>
int decimaltobinary(long int n){
  long int r[50],i=0,len=0;
  while(n>0){
    r[i]=n%2;
    n=n/2;
    i++;
    len++;
  }
  for(i=len-1;i>=0;i--)
     return r[i];
}
int decimaltooctal(long int num){
  long int r[50],i=0,a=0;
  while(num>0){
    r[i]=num%8;
    num=num/8;
    i++;
    a++;
  }
  for(i=a-1;i>=0;i--)
     return r[i];
}
int decimaltohexadecimal(long int num){
   long int rem[50],i=0,length=0;
   while(num>0){
      rem[i]=num%16;
      num=num/16;
      i++;
      length++;
   }
  for(i=length-1;i>=0;i--){
    switch(rem[i]){
      case 10:
          printf("A");
          break;
      case 11:
          printf("B");
          break;
      case 12:
          printf("C");
          break;
      case 13:
          printf("D");
          break;
      case 14:
          printf("E");
          break;
      case 15:
          printf("F");
          break;
      default :
         return rem[i];
    }
  }
}
int binarytodecimal(long int num) {
    int decimal = 0, base = 1, rem;
    while(num> 0){
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10;
        base = base * 2;
    }
    return decimal;
}
int binarytooctal(long int n){
  int a=1,dec=0,i=1,j,b,octal=0;
	for (j=n;j>0;j=j/10){  
     b= j % 10;
     if(i==1)
       a=a*1;
     else
       a=a*2;
	   dec=dec+(b*a);
	   i++;
	}
  i=1;
  for(j=dec;j>0;j=j/8){
     octal=octal+(j % 8)*i;
     i=i*10;
     n=n/8;
  }
  return octal;
}
int binarytohexa(long int bin){
  long int hexa = 0, i = 1, rem;
  while(bin != 0){
     rem = bin % 10;
     hexa = hexa + rem * i;
     i = i * 2;
     bin = bin / 10;
  }
  return hexa;
}
