#include <stdio.h>
#include <string.h>
#define MAX_FLIGHTS 100
#define MAX_PASSENGERS 100

// System data structure
struct flight{
    int flightNumber;
    int availableSeats;
    char flightDate[50]; // DD/MM/YYYY
    char departureTime[20]; // HH:MM
    char departureCity[50];
    char arrivalTime[20]; // HH:MM
    char arrivalCity[50];

};

struct passenger{
    int ID;
    char Name[20];
    char Address[100];
    int phoneNumber;

};

struct ticket{
    int number;
    int passengerID;
    int flightNumber;
    char resDate       [20]; // DD/MM/YYYY

};

// Global Variables, Arrays & Objects
struct flight trip[MAX_FLIGHTS];
struct passenger pasngr[MAX_PASSENGERS];
struct ticket tkt[MAX_PASSENGERS];
int flightsExist = 0;
int passengersExist = 0;
int TicketExist = 0;




//Prototype Functions
void admin_Settings();
void passenger_Settings();
void loginSignup();
int New_Flight_Schedule(void);
void update_flight();
int New_Passenger_Resservation(void);
void modify_reservation();
//Testing Area



//Testing Area

/////////////////////////////////////////////////////////Functions' Code

int main()
{
    unsigned int choice;

    printf(" _ _______ _______ _______    _______ _       _______ _______ _     _ _______ ______  \n");
    printf("| (||)  (|)     (||)   (||_____ \\ \n");
    printf("| |_____   _____   _____      _____   _ _____ _______   __    _______ _______ _____) )\n");
    printf("| |  __) |  ___) |  ___)    |  ___) | ()  ___  | / /   |  ___  |  ___  |  __  / \n");
    printf("| | || || |_____   | || || |   | |/ /| |   | | |   | | |  \\ \\ \n");
    printf("||)))  |))|   |()|   |||   |||   |_|\n");

    printf("Airline Reservation System\n\n");
    printf("1. Admin settings\n");
    printf("2. Passenger settings\n");
    printf("3. Quit");

    invalid:
    printf("\n");
    printf("Enter a Number: ");
    if (scanf("%d", &choice) != 1){
        printf("Invalid Input!");
    }

    switch (choice) {
    case 1:
        admin_Settings();
        break;
    case 2:
        passenger_Settings();
        break;
    case 3:
        printf("Exiting Program...");
        return 0;
    default:
        printf("Invalid Input!");
        goto invalid;
    }

    return 0;
}

//////////////////////////////////////////////////////////Functions' Code
void admin_Settings(){
    unsigned int choice;
    unsigned int flight_num;//number of flight which will add or update or delete (mahmoud);

    printf("1. Add new flight\n");
    printf("2. Delete existing flight schedule\n");
    printf("3. Update existing flight schedule\n");
    printf("4. Main Menu\n");

    invalid:
    printf("\n");
    printf("Enter a Number: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        flightsExist=New_Flight_Schedule();
        break;
    case 2:

        break;
    case 3:
        printf("\n\nEnter flight number to UPDATE: ");
        scanf("%d",&flight_num);
        update_flight(flight_num);
        break;
    case 4:
        main();
        break;
    default:
        printf("Invalid Input!");
        goto invalid;
    }

}

void passenger_Settings(){
    unsigned int choice;

    printf("1. Login / Sign up\n");
    printf("2. Search Available Flights\n");
    printf("3. Add new reservation\n");
    printf("4. Cancel reservation\n");
    printf("5. Modify reservation\n");
    printf("6. Show reservation log\n");
    printf("7. Main Menu\n");

    invalid:
    printf("\n");
    printf("Enter a Number: \n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:

        break;
    case 2:

        break;
    case 3:
        passengersExist=New_Passenger_Resservation();
        break;
    case 4:

        break;
    case 5:
        modify_reservation();
        break;
    case 6:

        break;
    case 7:
        main();
        break;
    default:
        printf("Invalid Input!");
        goto invalid;
    }

}

void loginSignup(){
    unsigned int ID;
    printf("Enter your ID: ");
    scanf("%d", &ID);

}

//////////////////////////////Add New flight
int New_Flight_Schedule(void)
{
    int Numbers=flightsExist;
    printf("Enter The Flights Exist To The System\n");
    scanf("%i",&flightsExist);
    if(flightsExist<MAX_FLIGHTS)
    {
         printf("Enter The Flight Number:  \n");
         scanf("%i",&trip[flightsExist+1]. flightNumber );

         printf("Enter The Number of Seats:\n");
         scanf("%i",&trip[flightsExist+1].availableSeats);
         fflush(stdin);

         printf("Enter The Flight Date:   \n");
         gets(trip[flightsExist+1].flightDate           );

         printf("Enter The Departure_city:\n");
         gets(trip[flightsExist+1].departureCity        );

         printf("Enter The Departure_Time:\n");
         gets(trip[flightsExist+1].departureTime        );

         printf("Enter The Arrival_city:  \n");
         gets(trip[flightsExist+1].arrivalCity          );

         printf("Enter The Arrival_Time:  \n");
         gets(trip[flightsExist+1].arrivalTime         );
         fflush(stdin);
         printf("\n...You Add New Flight Schedule Successfully...\n");
         Numbers++;
         int choice=0;
         printf("\n(1) To Go To Admin Setting\n");
         printf("(2) To Quit\n");
         scanf("%i",&choice);
         switch(choice)
         {
               case 1 :
                  admin_Settings();
               case 2 :
                   return (0)   ;
         }
    }
    else
    {
        printf("\nSorry, You can't Add Anew_Flight. The System Is Full !!!\n");
        int choice=0;
        printf("\n(1) to Admin Setting\n");
        printf("(2) to Quit           \n");
        scanf("%i",&choice);
        switch(choice)
        {
            case 1 :
                 admin_Settings();
                 break;
            case 2 :
                return(0);
        }

    }
    return(Numbers);
}

int New_Passenger_Resservation(void)
{
    int Erorr_State=0;
    int Numbers=passengersExist;
    int ID;
    char Name[20];
    char Address[100];
    int phoneNumber;
    char Departure_City[20];
    char Arrival_City  [20];
    char Travilling_Date[50];
    int count;
        fflush(stdin  );

        printf("Enter Your Name:        \n");
        gets(Name     );


        printf("Enter your Adress:      \n");
        gets(Address  );

        printf("Enter you IDE:          \n");
        scanf("%i",&ID);

        fflush(stdin);
        printf("Enter Your Phone Number:\n");
        scanf("% i",&phoneNumber);

        Invalid :
        fflush(stdin);
        printf("Enter The Departure City:  \n");
        gets(Departure_City);
        printf("Enter The Arrival City :   \n");
        gets(Arrival_City  );
        printf("Enter The Date for Travel: \n");
        gets(Travilling_Date);
        for(count=0;count<flightsExist;count++)
        {
            if((trip[count].departureCity==Departure_City)&&
               (trip[count].arrivalCity  ==Arrival_City  )&&
               (trip[count].flightDate   ==Travilling_Date))
            {
                      if(passengersExist<MAX_PASSENGERS)
                {
                    int choice = 0;
                    Erorr_State=1;

                    strcpy(pasngr[passengersExist+1].Name       ,Name                     );
                    strcpy(pasngr[passengersExist+1].ID         ,ID                       );
                    strcpy(pasngr[passengersExist+1].Address    ,Address                  );
                    strcpy(pasngr[passengersExist+1].phoneNumber,phoneNumber              );


                    printf("There is Avalible Ticket For you                                  \n");
                    printf("\nThe Number of Your Flight is = %i      \n",trip[count].flightNumber);
                    printf("The Number of Your Ticket is = %i\n",tkt[TicketExist+1].number       );
                    printf("The Date For Your flight is = %c\n",trip[count].flightDate           );
                    printf("The Departure City is = %c      \n ",trip[count].departureCity       );
                    printf("The Arrival City is = %c        \n",trip[count].arrivalCity          );
                    printf("The Departure Time is = %c      \n",trip[count].departureTime        );
                    printf("The Arrival Time is = %c        \n",trip[count].arrivalTime          );
                    printf("Enter The Date of your Reservation:                               \n");
                    gets(tkt[TicketExist+1].resDate                                              );

                    printf("\n****Your Reservation is Accepted !!****1\n");
                    TicketExist++;
                    Numbers++;

                    printf("\n(1) To Passenger Seeting\n");
                    printf("(2) To Quit             \n");
                    scanf("%i",choice);

                    switch(choice)
                    {
                        case 1 :
                              passenger_Settings();
                        case 2 :
                              return (0);
                    }
                    break;
                }

            }
        }
        if(Erorr_State==0)
        {
            printf("\nSorry,There Is Not Avalible Reservation for This Place!!!\n");
            int choice=0;
            printf("\n(1) To Try Again\n");
            printf("(2) To Quit     \n");
            scanf("%i",&choice);
            switch(choice)
            {
                case 1 :
                     goto Invalid;
                     break;
                case 2 :
                    return (0);
            }
        }
    return(Numbers);
}


////////////////////////////////////////////////////////////////////////////update flight

void update_flight(int flight_num){
    int flag = 0;
    int choice,confirm;
    char check[20];
    trip[0].flightNumber=1;

    for(int i = 0 ; i < flightsExist ; i++){
        if(trip[i].flightNumber == flight_num){
            flag = 1;
            invalid:
            all:
            printf("\n1. update departure city\n");
            printf("2. update departure time\n");
            printf("3. update arrival city\n");
            printf("4. update arrival time\n");
            printf("5. update flight date\n");
            printf("6. update all\n");
            printf("7. back\n");
            printf("\n\nEnter your choice: ");
            scanf("%d",&choice);

            switch (choice) {
            case 1:

                printf("Enter new departure city: ");
                scanf("%s",& check);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    strcpy(trip[i].departureCity , check);
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }





            case 2:
                printf("Enter new departure time: ");
                scanf("%s",& check);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    strcpy(trip[i].departureTime , check);
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }




            case 3:
                printf("Enter new arrival city: ");
                scanf("%s",& check);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    strcpy(trip[i].arrivalCity , check);
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }


            case 4:
                printf("Enter new arrival time: ");
                scanf("%s",& check);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    strcpy(trip[i].arrivalTime , check);
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }



            case 5:
                printf("Enter new flight date: ");
                scanf("%s",& check);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    strcpy(trip[i].flightDate , check);
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }


            case 6:
                printf("\n\nEnter new departure city: ");
            scanf("%s",&trip[i].departureCity);

            printf("Enter new departure time: ");
            scanf("%s",&trip[i].departureTime);

            printf("Enter new arrival city: ");
            scanf("%s",&trip[i].arrivalCity);

            printf("Enter new arrival time: ");
            scanf("%s",&trip[i].arrivalTime);

            printf("Enter new flight date: ");
            scanf("%s",&trip[i].flightDate);

            printf("\n\n***Flight schedule updated successfully!***\n\n");
            goto all;

                case 7:
                admin_Settings();
                break;


            default:
                printf("Invalid Input!");
                goto all;

        }
        }



    }
     if(!flag) {
        printf("\nFlight schedule not found!\n\n");
        admin_Settings();
    }



}
///////////////////////modify reservation
void modify_reservation(){
    unsigned int flag = 0,choice,confirm ,ticket_num;
    char check[100];
    long long checkint;
    printf("\n\nEnter the number of ticket: ");
        scanf("%d",&ticket_num);
    for(int i = 0 ; i < passengersExist ; i++){
        if(tkt[i].number == ticket_num){
            flag = 1;
            all:

            printf("\n1. update passenger name\n");
            printf("2. update passenger address\n");
            printf("3. update phoneNumber\n");
            printf("4. update passenger ID\n");
            printf("5. update flight number\n");
            printf("6. update ALL\n");
            printf("7. Back\n");
            printf("\nEnter your choice: ");
            scanf("%d",&choice);

            switch(choice){
            case 1:
                printf("Enter new passenger name: ");
                scanf("%s",& check);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    strcpy(pasngr[i].Name , check);
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }



            case 2:
                printf("Enter new passenger address: ");
                scanf("%s",& check);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    strcpy(pasngr[i].Address , check);
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }

            case 3:
                printf("Enter new phone number: ");

                scanf("%d",& checkint);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    pasngr[i].phoneNumber = checkint;
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }


            case 4:
                printf("Enter new passenger ID: ");
                scanf("%lld",& checkint);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    pasngr[i].ID = checkint;
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }



            case 5:
                printf("Enter new flight number: ");

                scanf("%d",& checkint);
                printf("1. confirm\n");
                printf("2. back\n");
                printf("\nEnter your choice: ");
                scanf("%d",& confirm);
                switch(confirm){
                case 1:
                    tkt[i].flightNumber = checkint;
                    printf("\n******updated successfully******\n\n");
                    goto all;

                case 2:
                    printf("\n***NO changes occurred***\n");
                    goto all;
                }

            case 6:
                printf("\nEnter new passenger name: ");
                scanf("%s",&pasngr[i].Name);

                printf("Enter new passenger address: ");
                scanf("%s",&pasngr[i].Address);

                printf("Enter new phone number: ");
                scanf("%d",&pasngr[i].phoneNumber);

                printf("Enter new passenger ID: ");
                scanf("%lld",&pasngr[i].ID);

                printf("Enter new flight number: ");
                scanf("%d",&tkt[i].flightNumber);
                printf("\n\n***updated successfully!***\n\n");
                goto all;

            case 7:
                passenger_Settings();

            }

        }

            }

    if(!flag){
                printf("\nReservation not exist!\n\n");

                passenger_Settings();

}
}

