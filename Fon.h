float kare(float a) {
    return a*a;
}
float küp(float a) {
    return a*a*a;
}
float hacim(float a,float b,float c) {
    return a*b*c;
}
void fibo(int b) {
    int d=1;
    int c=0;
    printf("Olusan dizi:");
    for (int a=1;a<=b;a++) {
        c=d+c;
        d = c-d;
        printf("%d ",c);
    }
    printf("\nSon sayi. %d\n",c);
}
int fakto(int b) {
    int c=1;
    for (int a=1;a<=b;a++) {
        c=c*a;
    }
    return c;
}
void asal(int b) {

    if (b<=1) {
        printf("\nAsal degildir\n");
        return;
    }
    else if(b==2) {
        printf("\nAsaldir\n");
        return;
    }
    for (int a=2;a<b;a++) {
        if (b%a==0) {
            printf("\nasal degildir\n: ");
            return;
        }
    }
    printf("\nAsaldir\n");
}
void hesap2li(int a,int b,char c) {
    float d;
    switch(c) {
        case '+':
            d=(float)a+b;
            printf("\nsonuc:%f\n",d);
            break;
        case '-':
            d=(float)a-b;
            printf("\nsonuc:%f\n",d);
            break;
        case '*':
            d=(float)a*b;
            printf("\nsonuc:%f\n",d);
            break;
        case '/':
            d=(float)a/b;
            printf("\nsonuc:%f\n",d);
            break;
        default:
            printf("\nhatali islem\n");
    }
}
float alanhesap(float a,float b){
    return a*b;
}