// /**********************MY BANK MANAGING********************/

// #include<stdio.h>
// int main(){

//     int i, option, pin=1234, balance=1000,withd,depo;

//     printf("/************* WELCOM TO MY BANK ************/");
//     printf("Press 1> For check the Balance:");
//     printf("Press 2> For Withdraw the Amount:");
//     printf("Press 3> For Deposite the Amount:");
//     printf("Press 4> For Exit");
//     printf("/************* THANKYOU ************/");
//     printf(" Enter the any option:");
//     scanf("%d",&option);

//  switch(option){
// case 1:
//        printf("Enter the Pin number:");
//        scanf("%d",&pin);

//        if(pin == 1234){
//            printf("Your Balance is:%d",balance);
//        }
//        else{
//         printf("Invalid pin");
//        }
//        break;
//  case 2:
//         printf("Enter the Withdraw Amount:");
//         scanf("%d",&withd);
//         printf("Withdrawing amount is %d and the Balacnce of Amount is:%d",withd,(withd-balance));
//         break;

//  case 3:
//         printf("Enter the Deposite Amount:");
//         scanf("%d",&depo);    
//         printf("Deposite amount is %d and the Total Amount is:%d",depo,(depo+balance)); 
//         break;
//  case 4:
//         printf("Thank you for Visiting");          
//  }
//     return 0;
// } 

/***********************HOSTEL ROOMS ALLOTED****************************/

#include <stdio.h>
#include <stdlib.h>  // Include the necessary header for rand() and srand()

typedef struct hostel {
    int rno;
    char name[30];
    char location[30];
    char gender[30];
    int roomno;
} hostel;

int lower = 1, upper = 5;

void create() {
    srand(time(NULL));  // Seed the random number generator
    int randomNumber = ((rand() % (upper - lower + 1)) + lower);
    printf("Random Number: %d\n", randomNumber);

    hostel h;
    FILE *fp = fopen("hostel.txt", "a+");
    
printf("Enter RollNo:");
scanf("%d", &h.rno);
printf("Enter Name:");
scanf("%s", h.name);
printf("Enter Location:");
scanf("%s", h.location);
printf("Enter Gender:");
scanf("%s", h.gender);
h.roomno = ((rand() % (upper - lower + 1)) + lower);
fwrite(&h,sizeof(hostel),1,fp);

    fclose(fp);
}

int getRoomNo(int room, int lower, int upper) {
    FILE *fp = fopen("hostel.txt", "r");
    hostel h1;
    int allocated = 0;

    while (fread(&h1, sizeof(hostel), 1, fp)) {
        if (h1.roomno == room) {
            allocated = 1;
            break;  // No need to continue checking once a match is found
        }
    }
    fclose(fp);

    if (allocated == 0)
        return room;
    else
        return getRoomNo((rand() % (upper - lower + 1)) + lower, lower, upper);
}

void display() {
    hostel h1;
    FILE *fp = fopen("hostel.txt", "r");
    printf("-------------------------------------------------------------------------------------");
    printf("%-10s%-20s%-15s%-10s%-5s\n", "RollNo","Name","Location","Gender","RoomNo");
    printf("-------------------------------------------------------------------------------------");
    while (fread(&h1, sizeof(hostel), 1, fp)) {
        printf("%-10d%-20s%-15s%-10s%-5d\n", h1.rno, h1.name,h1.location,h1.gender,h1.roomno);
    }
    fclose(fp);
}


int main() {
    int ch;

    do {
        printf("\n1.ALLOCATE NEW ROOM");
        printf("\n2.DISPLAY");
        printf("\n0.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            create();  // Call the create function when option 1 is selected
            break;
        case 2:
            display();  // Add code to display information
            break;
        case 0:
            printf("\nThank you....");
            break;
        default:
            printf("\nInvalid choice. Please enter a valid option.");
        }
    } while (ch != 0);

    return 0;
}
