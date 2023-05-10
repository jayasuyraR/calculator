#include<iostream>
#include"ClientNL.cpp"
using namespace std;
bool checkD(int a[],int len){
    bool n=false;
    for (int i = 1; i < len; i+=2)
    {
        if(a[i]==4){
           n=true;
        }
    }
    return n;
}
bool checkM(int a[],int len){
    bool n=false;
    for (int i = 1; i < len; i+=2)
    {
        if(a[i]==3){
           n=true;
        }
    }
    return n;
}
void MDfun(int a[],int len){
    
    int v=0;
    while (checkD(a,len))
    {
        for (int i = 1; i < len; i+=2)
        {
            if(a[i]==4){
               a[i-1]/=a[i+1];
               a[i]=0;
               a[i+1]=0;
               break;
            }
        }
        for (int i = 0; i < len; i++)
        {
            if(a[i]==0){
                continue;
            }
            else{
                a[v]=a[i];
                v++;
            }
        }
        len=v;
        v=0;       
    }
    while (checkM(a,len))
    {
        for (int i = 1; i < len; i+=2)
        {
            if(a[i]==3){
               a[i-1]*=a[i+1];
               a[i]=0;
               a[i+1]=0;
               break;
            }
        }
        for (int i = 0; i < len; i++)
        {
            if(a[i]==0){
                continue;
            }
            else{
                a[v]=a[i];
                v++;
            }
        }
        
        len=v;
        v=0;  
               
    }
    NL(a,len);
    
}