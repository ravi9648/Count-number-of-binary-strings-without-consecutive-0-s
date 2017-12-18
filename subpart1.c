#include<stdio.h>
int countStrings(int n)
{
	int a[n], b[n];
	a[0] = b[0] = 1;
	for (int i = 1; i < n; i++)
	{
		a[i] = a[i-1] + b[i-1];
		b[i] = a[i-1];
	}
	int r=a[n-1] + b[n-1];
	int M=1000000007;	 
    int f = r%M;
	
	printf("%d\n", f);
}

int main(){
	int t,i;
	scanf("%d", &t);
	long int h = 10^15;
	if(t <= 10^3 && t>=1)
	{
	long long int a[t];
	for(i=0;i<t;i++){
		scanf("%d", &a[i]);
		if(a[i]<= 10^15 && a[i]>=1){
			a[i]=a[i];
		}
		else{
			a[i]='\0';
			
		}
	}
		for(i=0;i<t;i++){
	
	if(a[i]!='\0'){
	
	countStrings(a[i]);

}
else{
 printf("fail");
}
}
}
else{
return 0;
}
}