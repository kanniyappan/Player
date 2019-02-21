#include <stdio.h>
#include<math.h>
main() {
	int n;
	float res,pi=3.14;
	scanf("%d",&n);
	res=sin(n*pi/180);
	printf("%.1f",res);
}
