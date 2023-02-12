#include <stdio.h>
#include <math.h>
int main(){
float x1,x2,ip,rp,d,a,b,c;
printf("a=");
scanf("%f",&a);
printf("\nb=");
scanf("%f",&b);
printf("c=");
scanf("%f",&c);

d=(b*b)-4*a*c;
if(d>0){
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("x1=%.If and x2= %.If", x1,x2);
}
else if(d==0){
x1=(-b)/ (2*a);
printf("x1=x2= %.If" ,x1);
}
else{
rp=-b/(2*a):
ip=sqrt(d)/(2*a);
printf("%. If + %.Ifi",rp,ip);
printf("\n%.If - %.Ifi"rp,ip);
}
return 0;
}
}

    

