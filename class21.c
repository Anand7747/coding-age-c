#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter student marks\n");
    scanf("%d",&a);
     printf("Enter student marks\n");
    scanf("%d",&b);
     printf("Enter student marks\n");
    scanf("%d",&c);
     printf("Enter student marks\n");
    scanf("%d",&d);
     printf("Enter student marks\n");
    scanf("%d",&e);
     printf("Enter student marks\n");
    scanf("%d",&f);
     printf("Enter student marks\n");
    scanf("%d",&g);
     printf("Enter student marks\n");
    scanf("%d",&h);
     printf("Enter student marks\n");
    scanf("%d",&i);
     printf("Enter student marks\n");
    scanf("%d",&j);
    float average;
    average=(a+b+c+d+e+f+g+h+i+j) / 10;
    printf("%.2f\n",average);
    if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j){
        printf("the maximum marks is %d\n",a);
    }
        else if(b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j){
        printf("the maximum marks is %d\n",b);
        }
        else if(c>a && c>b && c>d && c>e && c>f && c>g && c>h && c>i && c>j){
        printf("the maximum marks is %d\n",c);
         }
         else if(d>a && d>b && d>c && d>e && d>f && d>g && d>h && d>i && d>j){
        printf("the maximum marks is %d\n",d);
        }
        else if(e>a && e>b && e>c && e>d && e>f && e>g && e>h && e>i && e>j){
        printf("the maximum marks is %d\n",e);
        }
        else if(f>a && f>b && f>c && f>d && f>e && f>g && f>h && f>i && f>j){
        printf("the maximum marks is %d\n",f);
        }
        else if(g>a && g>b && g>c && g>d && g>e && g>f && g>h && g>i && g>j){
        printf("the maximum marks is %d\n",g);
        }
        else if(h>a && h>b && h>c && h>d && h>e && h>f && h>g && h>i && h>j){
        printf("the maximum marks is %d\n",h);
        }
        else if(i>a && i>b && i>c && i>d && i>e && i>f && i>g && i>h && i>j){
        printf("the maximum marks is %d\n",i);
        }
        else{
        printf("the maximum marks is %d\n",j);
        }

        if(a<b && a<c && a<d && a<e && a<f && a<g && a<h && a<i && a<j){
        printf("the minimum marks is %d\n",a);
    }
        else if(b<a && b<c && b<d && b<e && b<f && b<g && b<h && b<i && b<j){
        printf("the minimum marks is %d\n",b);
        }
        else if(c<a && c<b && c<d && c<e && c<f && c<g && c<h && c<i && c<j){
        printf("the minimum marks is %d\n",c);
         }
         else if(d<a && d<b && d<c && d<e && d<f && d<g && d<h && d<i && d<j){
        printf("the minimum marks is %d\n",d);
        }
        else if(e<a && e<b && e<c && e<d && e<f && e<g && e<h && e<i && e<j){
        printf("the minimum marks is %d\n",e);
        }
        else if(f<a && f<b && f<c && f<d && f<e && f<g && f<h && f<i && f<j){
        printf("the minimum marks is %d\n",f);
        }
        else if(g<a && g<b && g<c && g<d && g<e && g<f && g<h && g<i && g<j){
        printf("the minimum marks is %d\n",g);
        }
        else if(h<a && h<b && h<c && h<d && h>e && h<f && h<g && h<i && h<j){
        printf("the minimum marks is %d\n",h);
        }
        else if(i<a && i<b && i<c && i<d && i<e && i<f && i<g && i<h && i<j){
        printf("the minimum marks is %d\n",i);
        }
        else{
        printf("the minimum marks is %d",j);
        }

    return 0;
}