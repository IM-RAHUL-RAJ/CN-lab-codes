#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i=1,p,a,w,nac,ack;
    printf("Enter the window size:\n");
    scanf("%d",&w);
    printf("Enter the packet size\n");
    scanf("%d",&a);
    printf("\nTransmission begins. Packet size is %d\n",a);
    while(i<=a)
    {
        printf("Sending packet from %d to %d",i,w+i-1);
        for(p=i;p<w+i;p++)
        printf("Transmitting packet %d\n",p);
        nac=i+rand()%w; 

        // for giving own value 
        // int nack=0;
        // scanf("%d",nack);
        // nac=nack;
        
        if(nac==i)
        {
            printf("ACK= %d\n",w+i);
            i=i+w;
            continue;
        }
        printf("NAC= %d\n",nac);
        printf("Sending packet %d\n",nac);
        printf("ACK=%d\n",nac+1);
        printf("ACK=%d\n",i+w);
        i=i+w;
    }
    printf("End of packet so ACK %d is discarded",i);
}