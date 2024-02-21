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
    else if ((a+b)>c && (c+a)>b && (b+c)>a && (a*a + b*b == c*c) || (c*c + b*b == a*a) || (a*a + c*c == b*b)){
        printf ("Valid Right Angeled");
    }
    else{
        printf ("Valid Not Right Angled");
    }
    return 0;
}
