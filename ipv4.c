#include<stdlib.h>
#include <stdio.h>

void cal(char str[],int c){
    int i=0;
       char netID[20];
    char hostID[20];
    int count=0;
        while(1){
            if(str[i]==':'){
                count++;
                if(count==c){
                    i++;
                    break;
                }
                
            }
            netID[i]=str[i];
            i++;
            
            
        }
      int j=0;
        while(str[i]!='\0'){
          
            hostID[j]=str[i];
            j++;
            i++;
        }
        
        printf("\nnetwork id: %s",netID);
        printf("\nHost id:  %s",hostID);
    
    
}

int main()
{
    char str[20];
    
    scanf("%s",str);
    int i=0;
    
    char x[3];
    
    
    while(str[i]!=':'){
        x[i]=str[i];
        
        i++;
    }
    int res=0;
    for(int j=0;j<i;j++){
        res=res*10+(x[j]-'0');
    }
    printf("%d\n",res);
    i=0;
    int c;
    if(res>=0 && res<=127){
        
        printf("class A\n");
        c=3;
        cal(str,c);
        
        
    }
    else if(res>=128 && res<=191){
        c=2;
        printf("class B\n");
        cal(str,c);
    }
    else if(res>=192 && res<=223){
        c=1;
        printf("class C\n");
        cal(str,c);
        
    }
    else if(res>=224 && res<=239){
        printf("class D\n");
        printf("no network ID and Host ID");
        
    }
    else if(res>=240 && res<=255){
        printf("class E\n");
        printf("no network ID and Host ID");

    }
    
    // --------------------------------------------------------
    // get netID and host ID 
    
    
    
 
    
    return 0;
}




