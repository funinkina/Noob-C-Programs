#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input(int n);
void choices();
void results(int x);
void f1();
void f2();
void f3();
void f4();

struct time{
    int hour;
    int minute;
};

struct trainsinfo{
    int tnum;
    char tname[15];
    struct time deptime;
    struct time arrtime;
    char startstation[4];
    char endstation[4];
}trains[20];

int n;

void main(){
    printf("How many train info you want to enter: ");
    scanf("%d", &n);
    input(n);
    choices();
}

void input(int n){
    int i;
    for(i=0; i<n; i++){
        printf("\n");
        printf("Enter %d train info:\n", i+1);
        printf("Enter train name: ");
        scanf("%s", &trains[i].tname);
        printf("Enter train number: ");
        scanf("%d", &trains[i].tnum);
        printf("Enter start station: ");
        scanf("%s", &trains[i].startstation);
        printf("Enter end station: ");
        scanf("%s", &trains[i].endstation);
        printf("Enter departure time (HH MM): ");
        scanf("%d %d", &trains[i].deptime.hour, &trains[i].deptime.minute);
        printf("Enter arrival time (HH MM): ");
        scanf("%d %d", &trains[i].arrtime.hour, &trains[i].arrtime.minute);
        printf("\n");
    }
}

void choices(){
    int s;
    printf("\n");
    printf("1. List all train that depart from a particular station.\n");
    printf("2. List all train that depart from a particular station at a particular time.\n");
    printf("3. List all trains that depart from a station in the next hour.\n");
    printf("4. List all trains between a pair of stations.\n");
    printf("5. EXIT PROGRAM!\n");
    printf("\n");
    printf("Enter your choice (1,2,3,4,5): ");
    scanf("%d", &s);
    switch(s){
        case 1:
        f1();
        break;
        case 2:
        f2();
        break;
        case 3:
        f3();
        break;
        case 4:
        f4();
        break;
        case 5:
        exit(0);
        default:
        printf("Wrong input given!\nTry again!");
        choices();
    }    
}

void results(int x){
    printf("\n");
    printf("Train name: %s\n", trains[x].tname);
    printf("Train number: %d\n", trains[x].tnum);
    printf("Departure time: %d:%d\n", trains[x].deptime.hour, trains[x].deptime.minute);
    printf("Arrival time: %d:%d\n", trains[x].arrtime.hour, trains[x].arrtime.minute);
    printf("Start station: %s\n", trains[x].startstation);
    printf("Last station: %s\n", trains[x].endstation);
    printf("\n");
}

void f1(){
    char sts[4];
    int i, c;
    printf("\n");
    printf("Enter station to search: ");
    scanf("%s", &sts);
    printf("Trains departing from %s station:\n", sts);
    for(i=0; i<n; i++){
        if(strcmp(trains[i].startstation, sts)==0){
            results(i);
            ++c;
        }
    }
    if(c==0){
        printf("NOT FOUND!!\n");
    }
    choices();
}

void f2(){
    char st[4];
    int i, c, dephour;
    printf("Enter departure station: ");
    scanf("%s", &st);
    printf("Enter hour: ");
    scanf("%d", &dephour);
    printf("Trains departing from %s at %d hour are:\n", st, dephour);
    for(i=0; i<n; i++){
        if((strcmp(trains[i].startstation, st)==0) && (dephour==trains[i].deptime.hour)){
            results(i);
            ++c;
        }
    }
    if(c==0){
        printf("NOT TRAINS FOUND!!\n");
    }
    choices();
}

void f3(){
    char st[4];
    int h, min, i, c;
    printf("Enter depart station: ");
    scanf("%s", &st);
    printf("Enter current hour: ");
    scanf("%d", &h);
    printf("Enter current minute: ");
    scanf("%d", &min);
    printf("Trains departing from %s in the next hour are:\n", st);
    for(i=0; i<n; i++){
        if((strcmp(trains[i].startstation, st)==0) &&
        (h >= trains[i].deptime.hour) ||
        (h <= trains[i].deptime.hour + 1) &&
        (min >= trains[i].deptime.minute ||
        min <= trains[i].deptime.minute + 60)){
            results(i);
            ++c;
        }
    }
    if(c==0){
        printf("NO TRAINS FOUND!!\n");
    }
    choices();
}

void f4(){
    char dst[4], ast[4];
    int i, c;
    printf("Enter departure station: ");
    scanf("%s", &dst);
    printf("Enter arrival station: ");
    scanf("%s", &ast);
    printf("Trains between %s and %s are:\n", dst, ast);
    for(i=0; i<n; i++){
        if((strcmp(trains[i].startstation, dst)==0) && (strcmp(trains[i].endstation, ast)==0)){
            results(i);
            ++c;
        }
    }
    if(c==0){
        printf("NO TRAINS FOUND!!\n");
    }
    choices();
}
