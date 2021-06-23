#include<iostream>
using namespace std;
char input[]="1+2*1";
char *lookahead=input;
void e();
void ePrime();
void t();
void tPrime();
void f();
void match(char value);

int main(){

e();
return 0;
}

void e(){
        t();ePrime();
    }
void ePrime(){
    if(*lookahead=='+'){match('+');t();cout<<'+';ePrime();}
    else if (*lookahead=='-'){match('-');t();cout<<'-';ePrime();}

}
void t(){
    f();tPrime();
}
void tPrime(){
    if(lookahead==''){match('');f();cout<<'';tPrime();
    }
    else if(*lookahead=='/'){match('/');f();cout<<'/';tPrime();}
}
void f(){
    if(isdigit(*lookahead)){cout<<*lookahead;lookahead++;}
    else if(*lookahead=='('){match('(');e();match(')');}
}

void match(char value){
    if(*lookahead==value)lookahead++;
}
