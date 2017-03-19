int main() {
    //int a,b;
    //scanf("%d%d", &a,&b);
    //if(a==b){
    //    printf("a=b");
    //}
    //else {
    //    printf("a!=b");
    //}

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    //b is largest
    if (b>a && b>c){
        printf("%d\n",b);
    }
    //c is largest
    else if (c>a && c>b){
        printf("%d\n",c);
    }
    //a is smallest
    else if (a<b && b==c){
        printf("%d\n",c);
    }
    else {
        printf("%d\n",a);
    }


    return 0;
}
