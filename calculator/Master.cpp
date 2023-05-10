#include<iostream>
#include<string>
#include"ClientMD.cpp"
using namespace std;
void fun(string a[],int k){
    int s[k],m=0;
    for (int i = 0; i < k; i++)
    {
       s[i]=stoi(a[i]);
    }
    MDfun(s,k);
        
     
}
int main(){
   char y,condition='y';    //condition for while
    h:
    string a[20];
    int k=0;
    int s[20];
    int num=0,w;            //+ after condition
    string input,sep[20]; //
     while (y!=condition)
     {
         cout<<"__________________"<<endl;
         cin>>input;
         for (int i = 0; i <= input.length()-1; i++)
         {
             sep[i]=input.at(i);
         }
//----------------------------------------------------------------------------------------------------

        for (int i = 0; i <= input.length(); i++)
         {


             if(sep[i]=="0"||sep[i]=="1"||sep[i]=="2"||sep[i]=="3"||sep[i]=="4"||sep[i]=="5"||sep[i]=="6"||sep[i]=="7"||sep[i]=="8"||sep[i]=="9"){
                  if(num==0){
                      a[k]+=sep[i];  
                   }else if(num==1){
                    a[k]+=sep[i];  
                  }else if(num==2){
                     a[k]+=sep[i]; 
                  }else if(num==3){
                     a[k]+=sep[i]; 
                  }else if(num==4){
                     a[k]+=sep[i]; 
                  }

             }
            else {
                k++;
                if(sep[i]=="+"){
                     a[k]="1";
                     num++;
                     }
               else if(sep[i]=="-"){
                     a[k]="2";
                     num++;
                     }
              else  if(sep[i]=="*"){
                     a[k]="3";
                     num++;
                     }
              else  if(sep[i]=="/"){
                     a[k]="4";
                     num++;
                     }
               k++; 
            }
            
         }

          fun(a,k-1);
          
        
         cout << "\t\t\tif you want to close click y otherwise click any key "<<endl;
         cin>>y;
         goto h;
         
     }
     




}