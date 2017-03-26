int main() {
    int a,b,w;
    scanf("%d%d", &a,&b);
    if(b<=9 && b>=1){
        //printf("1");
        w=1;
        a=a*10;
    }
    if(b<=99 && b>=10){
        //printf("2");
        w=2;
        a=a*100;
    }
    if(b<=999 && b>=100){
        //printf("3");
        w=3;
        a=a*1000;
    }
    if(b<=9999 && b>=1000){
        //printf("4");
        w=4;
        a=a*10000;
    }
    if(b<=99999 && b>=10000){
        //printf("5");
        w=5;
        a=a*100000;
    }
    //printf("%d\n%d\n%d\n",a,b,w);
    printf("%d",a+b);







    return 0;
}
