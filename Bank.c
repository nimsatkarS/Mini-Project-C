/**********************MY BANK MANAGING********************/

#include<stdio.h>
int main(){

    int i, option, pin=1234, balance=1000,withd,depo;

    printf("/************* WELCOM TO MY BANK ************/");
    printf("Press 1> For check the Balance:");
    printf("Press 2> For Withdraw the Amount:");
    printf("Press 3> For Deposite the Amount:");
    printf("Press 4> For Exit");
    printf("/************* THANKYOU ************/");
    printf(" Enter the any option:");
    scanf("%d",&option);

 switch(option){
case 1:
       printf("Enter the Pin number:");
       scanf("%d",&pin);

       if(pin == 1234){
           printf("Your Balance is:%d",balance);
       }
       else{
        printf("Invalid pin");
       }
       break;
 case 2:
        printf("Enter the Withdraw Amount:");
        scanf("%d",&withd);
        printf("Withdrawing amount is %d and the Balacnce of Amount is:%d",withd,(withd-balance));
        break;

 case 3:
        printf("Enter the Deposite Amount:");
        scanf("%d",&depo);    
        printf("Deposite amount is %d and the Total Amount is:%d",depo,(depo+balance)); 
        break;
 case 4:
        printf("Thank you for Visiting");          
 }
    return 0;
} 