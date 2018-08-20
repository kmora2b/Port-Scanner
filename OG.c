
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>


int checkip(int [], int);               //FUNCTION PROTOTYPE: CHECK IP
int binconvert (int [], int);      //FUNCTION PROTOTYPE: CONVERTS IP TO BINARY FORMAT
int ipdecimal (int [], int);            //FUNCTION PROTOTYPE: CONVERTS FROM DOT TO DECIMAL


int main()
{

    int mchoice, gchoice;        //menu choice for switch //Geo menu choice

    int i,x;                     //count
    int seg[5];                  //IP Address in decimal format (segments)


    //Small Introduction to the user
    printf("Welcome to the BinDec Program!\n\n\n");

    //Display menu for options
    //1.IP Address 2.Binary 3.Quit

    do
    {
        printf("\nPlease input a number to indicate what you would like to find.\n");
        printf("\n1. IP Decimal Format");
        printf("\t2. Binary");
        printf("\t3. Quit\n\r");

        //Take user input
        scanf("%d", &mchoice);

        //Create switch with menu to read from options
        switch(mchoice)
        {

        //If 1: Ask for IP Address in specific format
        case 1:
            printf("\nWhat is the IP  address?");
            printf("\nInput IP Address in xxx.xxx.xxx.xxx format\n");

            scanf("%d.%d.%d.%d", &seg[1], &seg[2], &seg[3], &seg[4]);

            printf("", checkip(seg, i));
            printf("IP Long Decimal Format is: %f", ipdecimal(seg, i));
            break;

        //If 2: Ask for IP Address in specific format
        case 2:
            printf("\nWhat is the IP  address?");
            printf("\nInput IP Address in xxx.xxx.xxx.xxx format\n");

            scanf("%d.%d.%d.%d", &seg[1], &seg[2], &seg[3], &seg[4]);

            printf("", checkip(seg, i));

            printf("\nBinary is: ");
            printf("", binconvert(seg, i));

            break;

        //If 3: Quit and exit program
        case 3:
            printf("Thanks for your time!");
            break;

        //If incorrect number then display error message and repeat menu with DO WHILE
        default:
            printf("\nInvalid input. Please pick a number from the menu and try again.\n");
        }
    }

    while(mchoice != 1 & mchoice != 2 & mchoice != 3);

}

int checkip(int arr [], int i)
{
    int re = 0;


    for (i=1; i < 4 ; i++)
    {
        arr[i];
    }

    if ( (arr[i] <= 0 && arr[i] >= 256) || (arr[i] <= 0 || arr[i] >= 256) )
    {
        return re = printf("\nIncorrect IP Address");
    }

    else
    {
        return re = printf("\nIP Address: %d.%d.%d.%d\n", arr[1], arr[2], arr[3], arr[4]);
    }




}


int ipdecimal (int gar [], int i)
{
    int re = 0;
    double sum = 0;

    for (i=1; i <= 4 ; i++)
    {
        gar[i];
        sum = sum + gar [i] * pow(256, (4-i));
    }

    if ( (gar[i] <= 0 && gar[i] >= 256) || (gar[i] <= 0 || gar[i] >= 256))
    {
        return re = printf("\nIncorrect IP Address");
    }

    else
    {

        return sum;

    }
}


int binconvert (int car [], int i)
{
    int a[20];
    int j;
    int in =0;
    int re = 0;

    for (i=1; i < 4 ; i++)
    {
        car[i];

    }

    if ( (car[i] <= 0 && car[i] >= 256) || (car[i] <= 0 || car[i] >= 256))
    {
        return re = printf("\nIncorrect IP Address");
    }

    else
    {
        while(car[i] > 0)
        {
            a[in]= car[i] % 2;
            in++;
            car [i] = car[i] / 2;
        }

        for (i=1; i < 4   ; i++)
        {
            for(j=in-1 ; j>=0 ; j--)
            {
                printf("%d",a[j]);
            }
        }
    }

    return 0;

}




//General Notes on Binary Concepts:
/*

IP Addresses are read by humans as decimal format but computers need the address as binary

Converting from Decimal to Binary:
Bit Value Method:
x   x   x   x
8   4   2   1

Division Method:
1. Divide the dec # by 2 and write remainder (0 or 1)
2. Divide answer (quotient) by 2 and write remainder
3. Repeat until answer is 0

TCP/IP Addresses are 32 bit addresses
Use four decimal numbers as octets (8 bits)
(Dotted Decimal noation)

128 64  32  16  8   4   2   1
Decimalnumber goes up to 255
Ex. 131= 1000 0011

*/





