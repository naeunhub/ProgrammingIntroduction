#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.141592

double integ(double a, double b,int n, double (*f)(double)){

	double integ1(double a, double b,int n, double (*f)(double));
	char *argv[4]={};
	scanf("%c %c %f %d", &argv[1], &argv[2], &argv[3], &argv[4]);
	
	double sum, x, x1, delta, area;
	int i;
	
	delta = (b-a)/n;
	for (i = 0; sum = 0.0; i <n ; i++){
		x = a + (i*delta);
		x1 = x + delta;
		area = delta * (sin(x) + sin(x1))/2;
		sum += area;
	}

	double integ2(double a, double b,int n, double (*f)(double));
	char *argv[4]={};
	scanf("%c %c %f %d", &argv[1], &argv[2], &argv[3], &argv[4]);
	
	double sum, x, x1, delta, area;
	int i;
	
	delta = (b-a)/n;
	for (i = 0; sum = 0.0; i <n ; i++){
		x = a + (i*delta);
		x1 = x + delta;
		area = delta * (cos(x) + cos(x1))/2;
		sum += area;
	}

	double integ3(double a, double b,int n, double (*f)(double));
	char *argv[4]={};
	scanf("%c %c %f %d", &argv[1], &argv[2], &argv[3], &argv[4]);
	
	double sum, x, x1, delta, area;
	int i;
	
	delta = (b-a)/n;
	for (i = 0; sum = 0.0; i <n ; i++){
		x = a + (i*delta);
		x1 = x + delta;
		area = delta * (tan(x) + tan(x1))/2;
		sum += area;
	}

	if (!strcmp(argv[2],"sin 0")){
		printf("usage:integ sin/cos/tan lower-limit upper-limit[no-of-steps]");
	}
	if (!strcmp(argv[2],"cos 0")){
		printf("usage:integ sin/cos/tan lower-limit upper-limit[no-of-steps]");
	}
	if (!strcmp(argv[2],"tan 0")){
		printf("usage:integ sin/cos/tan lower-limit upper-limit[no-of-steps]");
	}

	printf("int_%d %s = a wiht %d parts", argv[1], argv[2], argv[3], argv[4]);

	integ(atof(argv[2]), atof(argv[3]));
	atoi(argv[4]), argv[2]);
}