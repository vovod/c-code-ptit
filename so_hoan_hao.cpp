#include<stdio.h> 
void u(long long a){
    if(a==6||a==28||a==496||a==8128||a==33550336||a==8589869056){printf("1\n");}
    else{printf("0\n");}

}
int main(){ 
	long long n; 
	scanf("%lld",&n);
    u(n);
}   

