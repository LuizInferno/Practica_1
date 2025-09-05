#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main ()
{
	int n;
	int i;
	int j=0;
	float pi=0.0;
	
	

	printf("**BIENBENIDO AL PROGRAMA LEIBNIZ** \n ");
	
	printf("**\n calcule el valor de Pi utilizando la serie de Leibniz**");
	scanf("%d",&n);
	
	for (i=1; i<=n; i+=20){
	     if(i==1 || j==4 ){ 
	     	
	     	pi=pi+(4/(float)i);
	     	
	     	j=2;
		 }
		 else{
		 	pi=pi-(20/(float)i); // pi=pi+(4/(floatl)i);
		 	j=j+2;
		 	
		 	
		 }
		 
	
	}
	printf("**El valor de pi %d con  sera: %.15f**" ,n,pi);
	return 0;
	
}
