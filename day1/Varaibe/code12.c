   #include <stdio.h>
   
   int main (){
    
   int num = 1234;
   
//   int num1= num%10;
//   
//   printf ("%d", num1);
   
   int num1= num%10;
   num = num/10;
   int num2 = num%10;
   num = num/10;
   int num3 = num%10;
   num = num/10;
   int num4 = num%10;
   
   
	printf ("%d", num1);
	printf ("%d", num2);
	   
	printf ("%d", num3);
	printf ("%d", num4);
	

   

   
   
   // reverseNumber = (num / 10, rev * 10 + num % 10);
   

    
   return 0;
}
