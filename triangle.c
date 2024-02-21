int main (){
    int a,b,c;
    printf ("enter the value of the fractional number a : ");
    scanf ("%d",&a);
    printf ("enter the value of the fractional number b : ");
    scanf ("%d",&b);
    printf ("enter the value of the fractional number c : ");
    scanf ("%d",&c);
    if ((a+b)<=c || (b+c)<=a || (c+a)<=b){
        printf ("Not Valid");
    }
    else if ((a+b)>c && (b+c)>a && (c+a)>b && (a==b) && (b==c)){
        printf ("Valiid Equilateral");
    }
    else if ((a+b)>c && (b+c)>a && (c+a)>b && (a==b) || (b==c) || (c==a)){
        printf ("Valid Isosceles");
    }
    else{
        printf ("Valid Scalene");
    }
    return 0;
}
