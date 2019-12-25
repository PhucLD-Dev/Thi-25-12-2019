#include<stdio.h>
#include<math.h>
double chuvi(double a,double b,double c){
	double p=a+b+c;
return p;
}
double dientich(double a,double b,double c){
    double m= chuvi(a,b,c)/2;
    double t= m*(m-a)*(m-b)*(m-c);
    double s= sqrt(t);
    return s;
}
int main(){
	double a;
    double b;
    double c;
	do{
		printf("Hay nhap 3 canh cua 1 tam giac:\n");
		printf("Hay nhap canh a:\n");
		scanf("%lf",&a);
		printf("Hay nhap canh b:\n");
		scanf("%lf",&b);
		printf("Hay nhap canh c:\n");
		scanf("%lf",&c);
			if(a<=0||b<=0||c<=0)
			{
			printf("3 canh deu phai lon hon 0, vui long nhap lai!\n");
			}
			else if (a+b<=c||a+c<=b||b+c<=a)
			{
			printf("\nday ko phai tam giac, vui long nhap lai!\n");
			}
		}
	while (a+b<=c||a+c<=b||b+c<=a);
	
	printf("chu vi cua tam giac do la : %lf\n",chuvi(a,b,c));
    printf("dien tich cua tam giac do la : %lf",dientich(a,b,c));
	return 0;
}
