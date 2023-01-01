#include<stdio.h>
#include<stdlib.h>


void print(int v1,int c2,int m3,int p4,int sp5);

void print(int v1,int c2,int m3,int p4,int sp5)
{
      int sum=v1+c2+m3+p4+sp5;
      int qn=v1/250+c2/300+m3/500+p4/450+sp5/550;
      int dis=0;
      float d=0.0;
      if(sum>=2000 && sum<2500)
        d=0.20;
        else if(sum>=2500 && sum<3500)
          d=0.25;
             else if(sum>=3500)  
               d=0.30;
                else
                   d=0.0;  
      if(sum>=2000 && sum<2500)
        dis=sum-(d*sum);
          else if(sum>=2500 && sum<3500)
            dis=sum-(d*sum);
             else if(sum>=3500)  
                dis=sum-(d*sum);
                  else
                    dis=sum;  
    printf("\n\n<-----------------ABC PIZZA SHOP---------------->\n");
    printf("contact details:\n");
    printf("-----------------------------------------\n");
    printf("Add: khudiram nagar,Haldia,Purbi Medinapure,WB\n");
    printf("Tax id: 89044637\nPh.no: 9459299493\nE.Mail id: abcpizza@gmail.com\n");
   printf("-----------------------------------------\n\n");  

   printf("| S.no.||          Item name         || Quantity ||  price  || Total(Rs)    |\n");
   printf("|   1. ||   Veg pizza                ||   %d     ||    %d   ||   %d         |\n",v1/250,250,v1);
   printf("|   2. ||   Chicken pizza            ||   %d     ||    %d   ||   %d         |\n",c2/300,300,c2);
   printf("|   3. ||   Mutton pizza             ||   %d     ||    %d   ||   %d         |\n",m3/500,500,m3);
   printf("|   4. ||   Paneer special pizza     ||   %d     ||    %d   ||   %d         |\n",p4/450,450,p4);
   printf("|   5. ||   ABC special pizza        ||   %d     ||    %d   ||   %d         |\n",sp5/550,550,sp5);
   printf("\n");
   printf("=======================================================================================\n");
   printf("                                           Grand Total (Rs.)           %d\n",sum);
   printf("                                           Total Quantity              %d\n",qn);
   printf("                                           Disc.(in percent)           %.2f\n",d);
   printf("                                           To Pay(In Rs.)              %d\n\n\n",dis);
   printf("       ********* THANK YOU VISIT AGAIN TO OUR SHOP *****************");


}

void main()
{
    int v1=0,c2=0,m3=0,p4=0,sp5=0;
    printf("\n\n");
    printf("<-----------------ABC PIZZA SHOP---------------->\n\n");
    printf("Contact Details:\n");
    printf("-----------------------------------------\n");
    printf("Add: khudiram nagar,Haldia,Purbi Medinapure,WB\n");
    printf("Tax id: 89044637\nPh.no: 9459299493\nE.Mail id: abcpizza@gmail.com\n");
   printf("-----------------------------------------\n");  
    int choice=1,n;
    while (choice)
    {
        printf("\n\nDEAR CUSTOMER, HERE IS OUR PIZZA DETAILS:\n\n");
        printf("--------------------------------------------\n");
        printf("1.|| Veg pizza:              || 250 Rs \n");
        printf("2.|| Chicken pizza:          || 300 Rs \n");
        printf("3.|| Mutton pizza:           || 500 Rs \n");
        printf("4.|| Paneer special pizza:   || 450 Rs\n");
        printf("5.|| ABC special pizza:      || 550 Rs\n");
        printf("----------------------------------------------\n");
        printf("6. and any numeric key TO GENERATE BILL\n");
        printf("7. and any numeric when Order is Finish\n\n ");
        printf("----------------------------------------------\n");
        printf("Dear Customer, Here we have some SPECIAL OFFER for you !!!!!!\n");
        printf(" 1. On purchase Of (2000 - 2500)Rs   ---  20(in percent)  \n ");
        printf("2. On purchase Of (2500 - 3500)Rs   ---  25(in percent) \n ");
        printf("3. On purchase Of ( above 3500)Rs   ---  30(in percent) \n ");

        printf("Enter your choice and quantity\n");
        scanf("%d%d",&choice,&n);
        switch (choice)
        {
        case 1:
             v1=v1+250*n;
            break;
        case 2:
             c2=c2+300*n;
             break;
        case 3:
              m3=m3+500*n;
             break;
        case 4:
              p4=p4+450*n;
              break;
        case 5:
              sp5=sp5+550*n;
              break; 
        case 6:
               print(v1,c2,m3,p4,sp5);   
               break;
        case 7:
               exit(0);                                    
        default:
              printf("please enter valid choice:\n");
        }
    }
    

}