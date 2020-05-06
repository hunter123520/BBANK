/*
############################################################

This Project Made By :
              Sellami Mohamed Abd Elhadi
Facebook :
              Missing Breath
Email :
              philippe.fernandez.2002@gmail.com

This Project Made For The TP PROJECT OF First Year MI  2019 / 2020 In University of Kasdi Merbeh Ourgla - Algeria
Supervised By The Teacher :
              Dr.AMEUR Khadidja
Email :
              dr.ameur.k@gmail.com
#############################################################

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "BBankStructers.h"
#include "CoresDraw.h"
#include "MovementCond.h"
#include "PrintingMod.h"

/*
int Col1=15,Col2=14,Col3=12,Col4=10;
int BackGround_Color=1,Green_Color,Gold_Color,White_Color,Red_Color,RedGround_Color;
int User_Col1=15,User_Col2=14,User_Col3=12,User_Col4=10;
int User_BackGround_Color=1,User_Green_Color,User_Gold_Color,User_White_Color,User_Red_Color,User_RedGround_Color;

*/
char *CColor(int i){ // This Function Is Used To Return The Names Of The Colors That The Color Function Color The Latters With
if(i==0){
    return ("Black"); // The Black Returns When The Color Is 0 And It Reference To The Black Color
}else if(i==1){
    return ("D_Blue"); // The D_Blue Returns When The Color Is 1 And It Reference To The Dark Blue Color
}else if(i==2){
    return ("D_Green"); // The D_Green Color Returns When The Color Is 2 And It Reference To The Dark Green Color
}else if(i==3){
    return ("D_Light Blue"); // The D_Light Color Returns When The Color Is 3 And It Reference To The Dark Light Blue Color
}else if(i==4){
    return ("D_Red"); // The D_Red Color Returns When The Color Is 4 And It Reference To The Dark Red Color
}else if(i==5){
    return ("D_Purple"); // The D_Purple Color Returns When The Color Is 5 And It Reference To The Dark Purple Color
}else if(i==6){
    return ("D_Gold"); // The D_Gold Color Returns When The Color Is 6 And It Reference To The Dark Gold Yellow Color
}else if(i==7){
    return ("D_White"); // The D_White Color Returns When The Color Is 7 And It Reference To The Dark White Color
}else if(i==8){
    return ("Grey"); // The Grey Color Returns When The Color Is 8 And It Reference To The Grey Color
}else if(i==9){
    return ("Blue"); // The Blue Color Returns When The Color Is 9 And It Reference To The Blue Color
}else if(i==10){
    return ("Green"); // The Green Color Returns When The Color Is 10 And It Reference To The Green Color
}else if(i==11){
    return ("Light Blue"); // The Light Blue Color Returns When The Color Is 11 And It Reference To The Blue Light Color
}else if(i==12){
    return ("Red"); // The Red Color Returns When The Color Is 12 And It Reference To The Red Color
}else if(i==13){
    return ("Purple"); // The Purple Color Returns When The Color Is 13 And It Reference To The Purple Color
}else if(i==14){
    return ("Gold"); // The Gold Color Returns When The Color Is 14 And It Reference To The Gold Yellow Color
}else if(i==15){
    return ("White"); // The White Color Returns When The Color Is 15 And It Reference To The White Color
}
return NULL; // The NULL RETURNS IF THE ENTERED Number Was Not Be In The List Of The Colors
}

void TheReallTime(){// This Function print The Real User Time
    time_t currentTime;
    time(&currentTime);
    struct tm *myTime = localtime(&currentTime); // This Struct tm Is A struct from the time.h lib included year and mount ...
    printf("%i/%i/%i\n",myTime->tm_mday, myTime->tm_mon +1 ,myTime->tm_year+1900);// We Add 1 For The month becouse the programe count from 0  and we add 1900 for the years becouse the programe starts counting with 1900 year delaing
}


Client Clients[1000];
Compte Comptes[1000];
User Users[1000];
Company Companys[1000];
NOTE Notes[1000];
Colors Colores[1000];

struct Historique *FULLCashhead=NULL;
struct Historique *FULLHistoHead=NULL;
struct Money *FULLDiagramhead=NULL;

char Name[255],Password[255];
int ID;
int ADELWRKERHEPER=0,ADELTYPESENDINGHELPER=0;
char ADMINCODE[50]="admin",NoteHelper[255];

void Note(int Type,int Uid){
/*
Type : 1 -> Login To User Account
Type : 2 -> User Entered To Create Account Place
Type : 3 -> User Entered To Upgrade Account Place
Type : 4 -> User Entered To The Company Place
Type : 5 -> User Entered To Cash Operations Place
Type : 6 -> User LogOut From His Account
Type : 7 -> User Entered To View Informations Place
Type : 8 -> User Entered To Edit And Modify  Place
Type : 9 -> User Entered To Color Options Place
Type : 10 -> User Entered To Blocking Place
Type : 11 -> User Entered To Deleting Place
Type : 12 -> User Create His Personal Account
Type : 13 -> User Create His Minor Account
Type : 14 -> User Create His Commercial Account
Type : 15 -> User Upgraded His Account
Type : 16 -> User Entered The User Informations Lab
Type : 17 -> User Entered The Account Informations Lab
Type : 18 -> User Entered The User Account Information Lab
Type : 19 -> User Entered The Cash History List  Lab
Type : 20 -> User Entered The Cash Diagram List  Lab
Type : 21 -> User Entered The ALL History List Lab

Type : 22 -> Company Entered The Cash Operation Lab
Type : 23 -> Company Entered The Viewing Workers Lab
Type : 24 -> Company Entered The View Informations Lab
Type : 25 -> Company Entered The Cash Add Workers Lab
Type : 26 -> Company Entered The Cash Delete Workers Lab
Type : 27 -> Company Entered The Boss Informations Lab
Type : 28 -> Company Entered The Account Informations Lab
Type : 29 -> Company Entered The Boss Account Informations Lab
Type : 30 -> Company Entered The Cash History List Lab
Type : 31 -> Company Entered The Cash Diagram Lab
Type : 32 -> Company Entered The History List Lab

*/
char Rep[25];
itoa(Uid,Rep,10);
if(Type < 22 ){
strcpy(NoteHelper,"The User With The ID : .....< ");
}else if (Type >=22 && Type <=32){
strcpy(NoteHelper,"The Boss Of The Company : ..< ");
strcat(NoteHelper,Companys[FindIDinTable(7,Uid)].CompanyName);
strcat(NoteHelper," > That Own The ID : ..< ");
}
strcat(NoteHelper,Rep);

if(Type == 1){
strcat(NoteHelper," > Has Opened His Account");
}else if(Type == 2){
strcat(NoteHelper," >Has Entered The Creating Account Option");
}else if(Type == 3){
strcat(NoteHelper," > Has Entered The Upgrading Account Option");
}else if(Type == 4){
strcat(NoteHelper," > Has Entered The Company Option");
}else if(Type == 5){
strcat(NoteHelper," > Has Entered The Cash Operations Option");
}else if(Type == 6){
strcat(NoteHelper," > Has LogOut From His Account");
}else if(Type == 7){
strcat(NoteHelper," > Has Entered The View Informations Option");
}else if(Type == 8){
strcat(NoteHelper," > Has Entered The Modify Option");
}else if(Type == 9){
strcat(NoteHelper," > Has Entered The Color Options Option");
}else if(Type == 10){
strcat(NoteHelper," > Has Entered The Blocking Option");
}else if(Type == 11){
strcat(NoteHelper," > Has Entered The Deleting Option");
}else if(Type == 12){
strcat(NoteHelper," > Has Created A New Personal Account");
}else if(Type == 13){
strcat(NoteHelper," > Has Created A New Minor Account");
}else if(Type == 14){
strcat(NoteHelper," > Has Created A New Commercial Account");
}else if(Type == 15){
strcat(NoteHelper," > Has Upgraded His Account From Minor To Personal Type");
}else if(Type == 16 || Type == 27){
strcat(NoteHelper," > Has Entered The User Personal Informations Lab");
}else if(Type == 17 || Type == 28){
strcat(NoteHelper," > Has Entered The Account Informations Lab");
}else if(Type == 18 || Type == 29){
strcat(NoteHelper," > Has Entered The User Account Informations Lab");
}else if(Type == 19 || Type == 30){
strcat(NoteHelper," > Has Entered The Cash History List Lab");
}else if(Type == 20 || Type == 31){
strcat(NoteHelper," > Has Entered The Cash Diagram Lab");
}else if(Type == 21 || Type == 32){
strcat(NoteHelper," > Has Entered The History List Lab");
}else if(Type == 22){
strcat(NoteHelper," > Has Entered The Cash Operation Lab");
}else if(Type == 23){
strcat(NoteHelper," > Has Entered The Workers List Lab");
}else if(Type == 24){
strcat(NoteHelper," > Has Entered The View Informations Lab");
}else if(Type == 25){
strcat(NoteHelper," > Has Add Workers Lab");
}else if(Type == 26){
strcat(NoteHelper," > Has Delete Workers Lab");
}
}

void NoteOfCredit(int Type,int Uid,int OtherUid,int Money){
/*
Type : 1 -> Sending Money  From Account To Another Account
Type : 2 -> Receipt Money From Account To The Personal Account
Type : 3 -> Send Money From Company To Account
Type : 4 -> Receipt Money From Company To Personal Account
Type : 5 -> Send Money From Account To Company
Type : 6 -> Receipt Money In Company From Account
Type : 7 -> Send Money From  Company TO Another Company
Type : 8 -> Receipt Money From Company In Personal Company
Type : 9 -> Send Salary To Workers
Type : 10 -> Receipt Salary From Company
Type : 11 -> Enter Money To Company
Type : 12 -> Get Out Money From Company
Type : 13 -> Get Out Money From Personal Account
Type : 14 -> Enter Money To Personal Account
Type : 15 -> Add Worker
Type : 16 -> Added To Company
Type : 17 -> Delete Worker
Type : 18 -> Deleted From Company
*/
char Rep[25],Rep1[25],Mn[25];
itoa(Uid,Rep,10);
itoa(OtherUid,Rep1,10);
itoa(Money,Mn,10);

if(Type == 1 || Type == 2 || Type == 4 || Type == 5 || Type == 10 || Type == 13 || Type == 14 || Type == 16 || Type == 18){
strcpy(NoteHelper,"The User With The ID : .....< ");
}else if (Type == 3 || Type == 6 || Type ==  7 || Type == 8 || Type == 9 || Type == 11 || Type == 12 || Type == 15 || Type == 17){
strcpy(NoteHelper,"The Boss Of The Company : ..< ");
strcat(NoteHelper,Companys[FindIDinTable(7,Uid)].CompanyName);
strcat(NoteHelper," > That Own The ID : ..< ");
}
strcat(NoteHelper,Rep);

if(Type == 1 || Type == 3){
strcat(NoteHelper," > Has Send ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ To The Account With The User ID : ");
strcat(NoteHelper,Rep1);
}else if(Type == 2 || Type == 6){
strcat(NoteHelper," > Has Receipt ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ From The Account With The User ID : ");
strcat(NoteHelper,Rep1);
}else if(Type == 4 || Type == 8){
strcat(NoteHelper," > Has Receipt ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ From The Boss Of The Company : ");
strcat(NoteHelper,Companys[FindIDinTable(7,OtherUid)].CompanyName);
strcat(NoteHelper," That Own The ID : ");
strcat(NoteHelper,Rep1);
}else if(Type == 5 || Type == 7){
strcat(NoteHelper," > Has Send ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ To The Company : ");
strcat(NoteHelper,Companys[FindIDinTable(7,OtherUid)].CompanyName);
}else if(Type == 9){
strcat(NoteHelper," > Has Send Salary Worth ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ To The Workers On His Company");
}else if(Type == 10){
strcat(NoteHelper," > Has Receipt Salary Worth ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ From The Boss Of The Company : ");
strcat(NoteHelper,Companys[FindIDinTable(7,OtherUid)].CompanyName);
strcat(NoteHelper," That Own The ID : ");
strcat(NoteHelper,Rep1);
}else if(Type == 11){
strcat(NoteHelper," > Has Entered ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ To His Personal Company ");
}else if(Type == 12){
strcat(NoteHelper," > Has Withdraw ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ To His Personal Company ");
}else if(Type == 13){
strcat(NoteHelper," > Has Withdraw ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ To His Personal Account ");
}else if(Type == 14){
strcat(NoteHelper," > Has Entered ");
strcat(NoteHelper,Mn);
strcat(NoteHelper," $ To His Personal Account ");
}else if(Type == 15){
strcat(NoteHelper," > Has ADD A New Worker To His Company That Have The ID : <");
strcat(NoteHelper,Rep1);
strcat(NoteHelper,">");
}else if(Type == 16){
strcat(NoteHelper," > Has Been Added By The Boss Of The Company : ..<");
strcat(NoteHelper,Companys[FindIDinTable(7,OtherUid)].CompanyName);
strcat(NoteHelper,"> That Own The ID : ..<");
strcat(NoteHelper,Rep1);
strcat(NoteHelper,">");
}else if(Type == 17){
strcat(NoteHelper," > Has Delete A Worker From His Company That Have The ID : <");
strcat(NoteHelper,Rep1);
strcat(NoteHelper,">");
}else if(Type == 18){
strcat(NoteHelper," > Has Been Deleted By The Boss Of The Company : ..<");
strcat(NoteHelper,Companys[FindIDinTable(7,OtherUid)].CompanyName);
strcat(NoteHelper,"> That Own The ID : ..<");
strcat(NoteHelper,Rep1);
strcat(NoteHelper,">");
}
}

void NoteFromTo(int Type,int Uid,char From[255],char To[255]){
/*
Type : 1 -> Edit First Name
Type : 2 -> Edit Last Name
Type : 3 -> Edit Birth Day
Type : 4 -> Edit ADRESS
Type : 5 -> Edit Phone
Type : 6 -> Edit UserName
Type : 7 -> Edit Password
Type : 8 -> Edit ADMIN Code
*/
char Rep[25];
itoa(Uid,Rep,10);

if(Type != 8){
strcpy(NoteHelper,"The User With The ID : <");
strcat(NoteHelper,Rep);
}

if(Type == 1){
strcat(NoteHelper,"> Has Changed His First Name Successfully From <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}else if(Type == 2){
strcat(NoteHelper,"> Has Changed His Last Name Successfully From <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}else if(Type == 3){
strcat(NoteHelper,"> Has Changed His Birth Day Successfully From <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}else if(Type == 4){
strcat(NoteHelper,"> Has Changed His Adress Successfully From <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}else if(Type == 5){
strcat(NoteHelper,"> Has Changed His Phone Number Successfully From <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}else if(Type == 6){
strcat(NoteHelper,"> Has Changed His User_Name Successfully From <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}else if(Type == 7){
strcat(NoteHelper,"> Has Changed His Password Successfully From <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}else if(Type == 8){
strcpy(NoteHelper,"The ADMIN CODE Has Been Changed Successfully From : <");
strcat(NoteHelper,From);
strcat(NoteHelper,"> To <");
strcat(NoteHelper,To);
strcat(NoteHelper,">");
}
}

int ecount(struct Historique *n){ // This Function Used To Count How Much Elements In A Historique Type List
int num=0; // Here We Define The Variable num That Represent The Number Of The Elements And Give Him 0 By Default
while(n!=NULL){// While We Are Not In The End Of The List We Continue
num++;// Here We Add 1 To  The Variable num
/*
if(n->next==NULL){// If The Next Element From The List Is Null Thats Mean That We Are In The End Of The List We Enter Here
        break;// Their  Is No More Elements In The List So We Break
}*/
n=n->next;// We Move To The Next Element In The List
}
return num;// We Return The Final Value Of The Variable num That Represents The Number Of The Elements In The List
}

int ecountMoney(struct Money *n){ // This Function Used To Count How Much Elements In A Money Type List
int num=0; // Here We Define The Variable num That Represent The Number Of The Elements And Give Him 0 By Default
while(n!=NULL){// While We Are Not In The End Of The List We Continue
num++;// Here We Add 1 To  The Variable num
if(n->next==NULL){// If The Next Element From The List Is Null Thats Mean That We Are In The End Of The List We Enter Here
        break;// Their  Is No More Elements In The List So We Break
}
n=n->next;// We Move To The Next Element In The List
}
return num;// We Return The Final Value Of The Variable num That Represents The Number Of The Elements In The List
}

void ResColor(int Type){
/*
Type : 1 -> The Program Colors
Type : 2 -> The User Colors
*/
if(Type == 1){
if(Col1 == BackGround_Color-1 || Col1 == Col2 || Col1 == Col3 || Col1 == Col4 || Col1 == Col5 || Col1 == Col6){
    for(int i=0;i<16;i++){
        if(i != BackGround_Color-1 && i != Col2 && i != Col3 && i != Col4 && i == Col5 && i != Col6){
            Col1=i;
        break;
        }
    }
}
if(Col2 == BackGround_Color-1 || Col2 == Col1 || Col2 == Col3 || Col2 == Col4 || Col2 == Col5 || Col2 == Col6){
    for(int i=0;i<16;i++){
        if(i != BackGround_Color-1 && i != Col1 && i != Col3 && i != Col4 && i == Col5 && i != Col6){
            Col2=i;
        break;
        }
    }
}
if(Col3 == BackGround_Color-1 || Col3 == Col1 || Col3 == Col2 || Col3 == Col4 || Col3 == Col5 || Col3 == Col6){
    for(int i=0;i<16;i++){
        if(i != BackGround_Color-1 && i != Col1 && i != Col2 && i != Col4 && i == Col5 && i != Col6){
            Col3=i;
        break;
        }
    }
}
if(Col4 == BackGround_Color-1 || Col4 == Col1 || Col4 == Col2 || Col4 == Col3 || Col4 == Col5 || Col4 == Col6){
    for(int i=0;i<16;i++){
        if(i != BackGround_Color-1 && i != Col1 && i != Col2 && i != Col3 && i == Col5 && i != Col6){
            Col4=i;
        break;
        }
    }
}
if(Col5 == BackGround_Color-1 || Col5 == Col1 || Col5 == Col2 || Col5 == Col3 || Col5 == Col4 || Col5 == Col6){
    for(int i=0;i<16;i++){
        if(i != BackGround_Color-1 && i != Col1 && i != Col2 && i != Col3 && i != Col4 && i != Col6){
            Col5=i;
        break;
        }
    }
}
if(Col6 == BackGround_Color-1 || Col6 == Col1 || Col6 == Col2 || Col6 == Col3 || Col6 == Col4 || Col6 == Col5 ){
    for(int i=0;i<16;i++){
        if(i != BackGround_Color-1 && i != Col1 && i != Col2 && i != Col3 && i != Col4 && i == Col5 ){
            Col6=i;
        break;
        }
    }
}
}else if (Type == 2){
if(User_Col1 == User_BackGround_Color-1 || User_Col1 == User_Col2 || User_Col1 == User_Col3 || User_Col1 == User_Col4){
    for(int i=0;i<16;i++){
        if(i != User_BackGround_Color-1 && i != User_Col2 && i != User_Col3 && i != User_Col4){
            User_Col1=i;
        break;
        }
    }
}
if(User_Col2 == User_BackGround_Color-1 || User_Col2 == User_Col1 || User_Col2 == User_Col3 || User_Col2 == User_Col4){
    for(int i=0;i<16;i++){
        if(i != User_BackGround_Color-1 && i != User_Col1 && i != User_Col3 && i != User_Col4){
            User_Col2=i;
        break;
        }
    }
}
if(User_Col3 == User_BackGround_Color-1 || User_Col3 == User_Col1 || User_Col3 == User_Col2 || User_Col3 == User_Col4){
    for(int i=0;i<16;i++){
        if(i != User_BackGround_Color-1 && i != User_Col1 && i != User_Col2 && i != User_Col4){
            User_Col3=i;
        break;
        }
    }
}
if(User_Col4 == User_BackGround_Color-1 || User_Col4 == User_Col1 || User_Col4 == User_Col2 || User_Col4 == User_Col3){
    for(int i=0;i<16;i++){
        if(i != User_BackGround_Color-1 && i != User_Col1 && i != User_Col2 && i != User_Col3){
            User_Col4=i;
        break;
        }
    }
}
}
}

void BColor(int Back_G,int Type){ // Here We Give The Real Value Of The Number Of The Color By The BackGround Color
    /*
    Type : 1 -> THE ADMIN
    Type : 2 -> THE USER < CLIENT >
    */
if(Type == 1){ //  If We Are In ADMIN Mode We Enter Here
ResColor(1);
BackGround_Color=Back_G;// We Give The Variable Of The BackGround Color The Back_G Value
if(Back_G == 1){ // If The BackGround Color Is Black We Entered Here
Green_Color=Col4; // We Give The Variable Of The Green Color The Col4 Value
Gold_Color=Col2; // We Give The Variable Of The Gold Color The Col2 Value
White_Color=Col1; // We Give The Variable Of The White Color The Col1 Value
Red_Color=Col3; // We Give The Variable Of The Red Color The Col3 Value
LightBlue_Color=Col5; // We Give The Variable Of The LightBlue Color The Col5 Value
Blue_Color=Col6; // We Give The Variable Of The Blue Color The Col6 Value
RedGround_Color=207;// This Is The Red Back Line Color Its Still Like That By Default
}else { // If The BackGround Color Is Not Black We Entered Here
Green_Color=Col4+(16*(BackGround_Color-1)); // We Give The Variable Of The Green Color The Col4 Value Depending On The Background Color
Gold_Color=Col2+(16*(BackGround_Color-1)); // We Give The Variable Of The Gold Color The Col2 Value Depending On The Background Color
White_Color=Col1+(16*(BackGround_Color-1)); // We Give The Variable Of The White Color The Col1 Value Depending On The Background Color
Red_Color=Col3+(16*(BackGround_Color-1)); // We Give The Variable Of The Red Color The Col3 Value Depending On The Background Color
LightBlue_Color=Col5+(16*(BackGround_Color-1)); // We Give The Variable Of The LightBlue Color The Col5 Value Depending On The Background Color
Blue_Color=Col6+(16*(BackGround_Color-1)); // We Give The Variable Of The Blue Color The Col6 Value Depending On The Background Color
RedGround_Color=207;// This Is The Red Back Line Color Its Still Like That By Default
}
}else if (Type == 2){  //  If We Are In The USER Mode We Enter Here
ResColor(2);
User_BackGround_Color=Back_G;// We Give The Variable Of The BackGround Color The Back_G Value
if(Back_G == 1){// If The BackGround Color Is Black We Entered Here
User_Green_Color=User_Col4; // We Give The Variable Of The Green Color The User_Col4 Value
User_Gold_Color=User_Col2; // We Give The Variable Of The Gold Color The User_Col2 Value
User_White_Color=User_Col1; // We Give The Variable Of The White Color The User_Col1 Value
User_Red_Color=User_Col3; // We Give The Variable Of The Red Color The User_Col3 Value
User_RedGround_Color=207;// This Is The Red Back Line Color Its Still Like That By Default
}else { // If The BackGround Color Is Not Black We Entered Here
User_Green_Color=User_Col4+(16*(User_BackGround_Color-1)); // We Give The Variable Of The Green Color The User_Col4 Value Depending On The Background Color
User_Gold_Color=User_Col2+(16*(User_BackGround_Color-1)); // We Give The Variable Of The Gold Color The User_Col2 Value Depending On The Background Color
User_White_Color=User_Col1+(16*(User_BackGround_Color-1));// We Give The Variable Of The White Color The User_Col1 Value Depending On The Background Color
User_Red_Color=User_Col3+(16*(User_BackGround_Color-1));// We Give The Variable Of The Red Color The User_Col3 Value Depending On The Background Color
User_RedGround_Color=207;// This Is The Red Back Line Color Its Still Like That By Default
}
}
}

void PutReallTimeInStruct(FullTime *str){// This Function Used To Put  The Real Time In A Variable Of The Type FullTime
time_t currentTime;
time(&currentTime);
struct tm *myTime = localtime(&currentTime);

str->sec=myTime->tm_sec;// Here We Put The Value Of The Real Second In The Variable sec From str
str->min=myTime->tm_min;// Here We Put The Value Of The Real Minute In The Variable min From str
str->hour=myTime->tm_hour;// Here We Put The Value Of The Real Hour In The Variable hour From str
str->Day=myTime->tm_mday;// Here We Put The Value Of The Real Day In The Variable Day From str
str->Month=myTime->tm_mon+1;// Here We Put The Value Of The Real Month +1 In The Variable Month From str
str->Year=myTime->tm_year+1900;// Here We Put The Value Of The Real Year + 1900 In The Variable Year From str
}

void EqualingFULLTIME(struct Historique **First , FullTime Second){//This Function Is Used To Equaling Between The OperationDate Of A List Type  Historique And Another Variable Type  FullTime
  struct Historique *Helper=(*First);// Here We Define Another List Have The Same Elements Of The First List To Help Us Latter
  if(*First==NULL){}else{// Here We Check If The List Is  Null Or Not < Have No Elements >
while(Helper!=NULL){ // This Is A While Loop Continue Working While We  doesn't Holding In The End Of The List
    if(Helper->next==NULL){ // If The Next Element  Of The Helper List Is Null We Entered Here
        break; // We Break From The Loop So Our Job To Find The Last Element In The List Is Done
    }
    Helper=Helper->next;// We Move TO The Next Element In The List
}
}
Helper->OperationDate.sec=Second.sec;// Here We Put The Value Of The sec Of The Second Variable In The Variable sec From OperationDate In The Element Helper
Helper->OperationDate.min=Second.min;// Here We Put The Value Of The min Of The Second Variable In The Variable min From OperationDate In The Element Helper
Helper->OperationDate.hour=Second.hour;// Here We Put The Value Of The hour Of The Second Variable In The Variable hour From OperationDate In The Element Helper
Helper->OperationDate.Day=Second.Day;// Here We Put The Value Of The Day Of The Second Variable In The Variable Day From OperationDate In The Element Helper
Helper->OperationDate.Month=Second.Month;// Here We Put The Value Of The Month Of The Second Variable In The Variable Month From OperationDate In The Element Helper
Helper->OperationDate.Year=Second.Year;// Here We Put The Value Of The Year Of The Second Variable In The Variable Year From OperationDate In The Element Helper

}

void EqualingMoneyFULLTIME(struct Money **First , FullTime Second){//This Function Is Used To Equaling Between The OperationDate Of A List Type  Money And Another Variable Type  FullTime
  struct Money *Helper=(*First);// Here We Define Another List Have The Same Elements Of The First List To Help Us Latter
  if(*First==NULL){}else{// Here We Check If The List Is  Null Or Not < Have No Elements >
while(Helper!=NULL){ // This Is A While Loop Continue Working While We  doesn't Holding In The End Of The List
    if(Helper->next==NULL){ // If The Next Element  Of The Helper List Is Null We Entered Here
        break; // We Break From The Loop So Our Job To Find The Last Element In The List Is Done
    }
    Helper=Helper->next;// We Move TO The Next Element In The List
}
}
Helper->Date.sec=Second.sec;// Here We Put The Value Of The sec Of The Second Variable In The Variable sec From Date In The Element Helper
Helper->Date.min=Second.min;// Here We Put The Value Of The min Of The Second Variable In The Variable min From Date In The Element Helper
Helper->Date.hour=Second.hour;// Here We Put The Value Of The hour Of The Second Variable In The Variable hour From Date In The Element Helper
Helper->Date.Day=Second.Day;// Here We Put The Value Of The Day Of The Second Variable In The Variable Day From Date In The Element Helper
Helper->Date.Month=Second.Month;// Here We Put The Value Of The Month Of The Second Variable In The Variable Month From Date In The Element Helper
Helper->Date.Year=Second.Year;// Here We Put The Value Of The Year Of The Second Variable In The Variable Year From Date In The Element Helper

}

void CreateHisto(struct Historique **head,int Uid,char  AccType,char Type,char Notes[255]){// This Function Creates A New Element In A List Of The Time Historique By Input Informations
struct Historique *NewInList=NULL; // Here We Create a Pointer Called NewInList Of The Type Historique STRUCT And We Give It The NULL
NewInList = (struct Historique *)malloc(sizeof(Historique)); // Here We Reserve A Place In The Memoir By  the Size Of The Historique STRUCT
PutReallTimeInStruct(&NewInList->OperationDate);// Here We Put The Real Time In  This  New Element By The Function PutReallTimeInStruct
NewInList->Uid=Uid;// Here We The ID That We Entered In The New Element
NewInList->AccType=AccType;// Here We The Account Type That We Entered In The New Element
NewInList->OperationType=Type;// Here We The OperationType That We Entered In The New Element
strcpy(NewInList->Note,Notes);// Here We The Note That We Entered In The New Element
NewInList->next=NULL;// Here We Connect The New Element With The NULL From The Next

if(*head==NULL){// If The List That We Entered Is Null < Empty >
    *head=NewInList; // We Equaling The Pointer *head With The New Element
    (*head)->back=NULL;//  Here We Connect The New Element With The NULL From The Back
}else{ // If The List Is Not Empty
struct Historique *Helper=(*head); // Here We Created A Copy Of The List That We Entered To Help Us Latter
while(Helper!=NULL){ // While We Are Not In The End Of The Element We Continue  Working  This Loop Is To Find The Last Element In The Loop
    if(Helper->next==NULL){ // if The Next Element Is Null We Entered Here
        break; // Here We Break Because We Find The Last Element In The List
    }
    Helper=Helper->next; // We Move To The Next Element In The List
}
Helper->next=NewInList; // We Connect The Last Element In The List From The Next With The New Element That We Create
NewInList->back=Helper; // We Connect The New Element That We Create From The Back With The Last Element In The List
}
}

void CreateMoney(struct Money **head,int Uid,char AccType,int M){// This Function Creates A New Element In A List Of The Time Money By Input Informations
struct Money *NewInList=NULL; // Here We Create a Pointer Called NewInList Of The Type Money STRUCT And We Give It The NULL
NewInList = (struct Money *)malloc(sizeof(Money)); // Here We Reserve A Place In The Memoir By  the Size Of The Money STRUCT
PutReallTimeInStruct(&NewInList->Date);// Here We Put The Real Time In  This  New Element By The Function PutReallTimeInStruct
NewInList->Uid=Uid;// Here We The ID That We Entered In The New Element
NewInList->AccType=AccType;// Here We The Account Type That We Entered In The New Element
NewInList->mon = M;// Here We The Money Value That We Entered In The New Element
NewInList->next=NULL;// Here We Connect The New Element With The NULL From The Next

if(*head==NULL){// If The List That We Entered Is Null < Empty >
    *head=NewInList; // We Equaling The Pointer *head With The New Element
    (*head)->back=NULL;//  Here We Connect The New Element With The NULL From The Back
}else{ // If The List Is Not Empty
struct Money *Helper=(*head); // Here We Created A Copy Of The List That We Entered To Help Us Latter
while(Helper!=NULL){ // While We Are Not In The End Of The Element We Continue  Working  This Loop Is To Find The Last Element In The Loop
    if(Helper->next==NULL){ // if The Next Element Is Null We Entered Here
        break; // Here We Break Because We Find The Last Element In The List
    }
    Helper=Helper->next; // We Move To The Next Element In The List
}
Helper->next=NewInList; // We Connect The Last Element In The List From The Next With The New Element That We Create
NewInList->back=Helper; // We Connect The New Element That We Create From The Back With The Last Element In The List
}
}

void Separate(struct Historique **n,int Uid,char AccType,int Type){// This Function Is Used To Separate A List To A New List By The ID And The Account Type For The Historique Type Lists
    /*
    Type : 1 -> The Full History Mode
    Type : 2 -> The Cash History Mode
    */
    struct Historique *Helper=NULL; // Here We Create A Pointer Of The Type Historique And Give Him The Null Value
    if(Type == 1){ // If We Are  In The Full History Mode We Entered Here
        Helper = FULLHistoHead;  // We Make A Copy Of The FULLHistoHead List On The Helper Variable
    }else if(Type == 2){ // If We Are  In The Cash History Mode We Entered Here
        Helper = FULLCashhead;  // We Make A Copy Of The FULLCashhead List On The Helper Variable
    }
    while(Helper!=NULL){// If We Are Not In The End Of The List We Continue
        if(Helper->Uid == Uid && Helper->AccType == AccType){ // If We Find An Element With The Same ID  And The Same Account That We Enter Before We Enter Here
            CreateHisto(&(*n),Uid,AccType,Helper->OperationType,Helper->Note);// We Create A New Element In The New List By The Informations Of The element That We Find
           EqualingFULLTIME(&(*n),Helper->OperationDate);// We Equal The Time Of The New Element With The Element That We Find Because When We Create A New Element It Gets The Real Time Of The Program
        }
        if(Helper->next==NULL){// If The Next Element Is NULL We Entered Here
        break;// We Are In The End Of The List So Our Job Is Ended SO We Break
        }
        Helper=Helper->next; // We Move To The Next Element In The List
    }
}

void Separate2(struct Money **n,int Uid,char AccType,int Type){// This Function Is Used To Separate A List To A New List By The ID And The Account Type For The Money Type Lists
    struct Money *Helper=FULLDiagramhead; // Here We Create A Pointer Of The Type Money And Give Him The Null Value
    while(Helper!=NULL){// If We Are Not In The End Of The List We Continue
        if(Helper->Uid == Uid && Helper->AccType == AccType){ // If We Find An Element With The Same ID  And The Same Account That We Enter Before We Enter Here
            CreateMoney(&(*n),Uid,AccType,Helper->mon);// We Create A New Element In The New List By The Informations Of The element That We Find
        }
        if(Helper->next==NULL){// If The Next Element Is NULL We Entered Here
        break;// We Are In The End Of The List So Our Job Is Ended SO We Break
        }
        Helper=Helper->next; // We Move To The Next Element In The List
    }
}

void DelElmFrmAllList(struct Historique *head,int Type){
/*
Type : 1 -> FULLHISTOHEAD
Type : 2 -> FULLCASHHEAD
*/
struct Historique *Helper=NULL;
if(Type == 1){
    Helper=FULLHistoHead;
}else if (Type == 2){
    Helper=FULLCashhead;
}
while(Helper != NULL){
    if(Helper->Uid == head->Uid && Helper->OperationDate.Day == head->OperationDate.Day
       && Helper->OperationDate.Month == head->OperationDate.Month
       && Helper->OperationDate.Year == head->OperationDate.Year
       && Helper->OperationDate.sec == head->OperationDate.sec
       && Helper->OperationDate.min == head->OperationDate.min
       && Helper->OperationDate.hour == head->OperationDate.hour
       && Helper->AccType == head->AccType ){
        if(Helper->next == NULL){
        Helper=NULL;
        break;
        }
       if(Helper->back != NULL){
       Helper=Helper->back;
       Helper->next->back=NULL;
       if(Helper->next->next != NULL){
       Helper->next=Helper->next->next;
       Helper->next->back=Helper;
       }else{
       Helper->next=NULL;
       }
       }else {
        if(Type == 1){
        FULLHistoHead=FULLHistoHead->next;
        FULLHistoHead->back=NULL;
        }else if (Type == 2){
        FULLCashhead=FULLCashhead->next;
        FULLCashhead->back=NULL;
        }
       }
       break;
       }
    if(Helper ->next == NULL){
        break;
    }
Helper=Helper->next;
}
}

void DelElmFrmList(int Type,struct Historique **head,struct Historique **head2,int ElementNumber){
/*
Type : 1 -> FULL History Elements
Type : 2 -> Cash History Elements
*/
struct Historique *Helper=(*head2);
for(int i=1;i<ElementNumber-1;i++){
    Helper=Helper->next;
}
if(ElementNumber == ecount(*head2)){
if(Type == 1){
DelElmFrmAllList(Helper->next,1);
}else if(Type == 2){
DelElmFrmAllList(Helper->next,2);
}
Helper->next->back=NULL;
Helper->next=NULL;
}else{
if(Type == 1){
DelElmFrmAllList(Helper->next,1);
}else if(Type == 2){
DelElmFrmAllList(Helper->next,2);
}
Helper->next->next->back=Helper;
Helper->next=Helper->next->next;
}
head=head2;
}

void ResHistoTime(struct Historique *n,FullTime OperationDate){ // This Function Used As Fixing To The OperationDate Always The Same Problem And Its For The Historique Type
while(n!=NULL){ // If The Element That We Are Holding In Is Not Null
    if(n->next == NULL){ // If The Next Element Of The List Is Null < We Are In The End Of The List > We Entered Here
         EqualingFULLTIME(&n,OperationDate);// We Use The EqualingFULLTIME To Equal The Time Of The Element With The OperationDate That we Entered
        break;// We Finish Our Job Here So We Break
    }
    n=n->next;// We Move To The Next Element In The  List
}
}

void ResMoneyTime(struct Money *n,FullTime OperationDate){ // This Function Used As Fixing To The OperationDate Always The Same Problem And Its For The Money Type
while(n!=NULL){ // If The Element That We Are Holding In Is Not Null
    if(n->next == NULL){ // If The Next Element Of The List Is Null < We Are In The End Of The List > We Entered Here
        EqualingMoneyFULLTIME(&n,OperationDate);// We Use The EqualingFULLTIME To Equal The Time Of The Element With The OperationDate That we Entered
        break;// We Finish Our Job Here So We Break
    }
    n=n->next;// We Move To The Next Element In The  List
}
}

void printList(struct Historique *n){ // This Function Used To Print The Full Time < Hour:Minute:Second _In Day/Month/Year > For The Historique Type

printf(" %d : %d : %d _IN_ %d / %d / %d",n->OperationDate.hour,n->OperationDate.min,n->OperationDate.sec,n->OperationDate.Day,n->OperationDate.Month,n->OperationDate.Year);// Here We Just Print The Informations Of The Date < Hour:Minute:Second _In Day/Month/Year >

}

void printList2(struct Money *n){ // This Function Used To Print The Full Time < Hour:Minute:Second _In Day/Month/Year > For The Money Type

printf(" %d : %d : %d _IN_ %d / %d / %d",n->Date.hour,n->Date.min,n->Date.sec,n->Date.Day,n->Date.Month,n->Date.Year);// Here We Just Print The Informations Of The Date < Hour:Minute:Second _In Day/Month/Year >

}

void hprinter(struct Historique *n){// This Function Used To Print The Information Element From The List For The History Function

    FILE *f;
     char d[255];
     int p=0,liner=0;

       gotoxy(50,6);
       if(n->OperationType == 'S'){
        printf("Salary");
       }else if(n->OperationType == 'E'){
        printf("Reserve");
       }else if(n->OperationType == 'W'){
        printf("Withdraw");
       }else if(n->OperationType == 'V'){
        printf("Sending");
       }else if(n->OperationType == 'R'){
        printf("Receipt");
       }else if(n->OperationType == 'A'){
        printf("In_Account");
       }else if(n->OperationType == 'M'){
        printf("Modifying");
       }
       gotoxy(40,11);
       printList(n);
       gotoxy(42,15);

       f=fopen("HELPER.text","w");
       fprintf(f,"%s",n->Note);
       fclose(f);
       f=fopen("HELPER.text","r");
       while(fscanf(f,"%s",d)!=EOF){
        p+=strlen(d)+1;
       if(p>=30){
        gotoxy(42,16+liner);
       liner++;
        p=0;
        p+=strlen(d)+1;
       }
        printf("%s ",d);

       }
       fclose(f);
}

void YesNo(char Message[50],int *WantToReturnBack,int CType){ // This Function  Helps On The Yes / No Q So We Enter  A Message To The User And We Recover A Value From The Function
    int ii1=1,ii2=0,ii3=0;// We Define 3 Variables Represents 3 Boxes
   while(1){ // While 1 So Its Non Ending Loop

     YesNoMvmntCond(&ii1,&ii2,&ii3);

    YseNoCore(CType,ii1,ii2,ii3);// Here We Print The Core Of The Function
    gotoxy(18,8);// We GO To The Position 18 In The Line 8
    printf("%s",Message); // We Print The Message That We Entered Before
    gotoxy(25,14);// We Go To The Position 25 In The Line 14
    printf("Yes");// We Pint Yes In The Mid Of The  Yes Box
    gotoxy(48,14);// We Go To The Position 48 In The Line 14
    printf("No");// We Pint No In The Mid Of The  No Box
    if(_getch()==13){// If The User Pressed OK We Entered Here
        if(ii2==1){// If We Are In The Yes Box We Entered Here
            break;// We Break From The Loop
        }
        if(ii3==1){// If We Are In The No Box We Entered Here
            ii3=0;// We Recover The  Value Of ii3 To The Zero For Some Problems
            *WantToReturnBack=1; // We Give The Pointer The Value 1
            break;// We Break From The Loop
        }
    }
   }
}

int Two(char First[50],char Sec[50]){// This Function Is Used To Make User Choose Between Two Choices
system("CLS");// We Just CLEAR The Screen If Their Is  Still Anything On IT
int i1=1,i2=0,i3=0;// We Create The 3 Variables That Represents The Boxes Of The Choosing
  while(1){ // While 1 So Its Non Ending Loop

    TwoMvmntCond(&i1,&i2,&i3);
    TwoBoxes(i1,i2,i3);// Here We Print The Core Of The Function

    gotoxy(20,11);// Here We Move TO The Position 20 In The Line 11
    printf("%s",First);// Here We Print The Tile Of The First Choice Inside The First Choice Box
    gotoxy(44,11);// Here We Move TO The Position 44 In The Line 11
    printf("%s",Sec);// Here We Print The Tile Of The Second Choice Inside The Second Choice Box
    gotoxy(35,17);// Here We Move TO The Position 17 In The Line 11
    printf("BACK");// Here We PRint Back Inside The Back Box

    if(_getch()==13){// If The User Pressed OK Button
        break;// We Break From The Loop
    }

  }
  if(i1==1){// If The User Choose The First Choice We Entered Here
    return 1;// We Return 1 Representing To The First Choice
  }else if(i2==1){// If The User Choose The Second Choice We Entered Here
    return 2;// We Return 2 Representing To The Second Choice
  }else if(i3==1){// If The User Choose The Back Choice We Entered Here
    return 3;// We Return 3 Representing To The Back Choice
  }
  return 0;// We Return 0 As Default
}

void Zeros(int n,int Table[n]){
for(int i=0;i<n;i++){
    Table[i]=0;
}
}

void ResetFiles(){// This Function Used To Recover All The Information That Saved In The File Before
  FILE *C,*U,*P;
  char d[255];
  int i=0;
  int usfl=0;
  U=fopen("Client_Storage.text","r");
  while(fscanf(U,"%s",d)!=EOF){
    if(strcmp(d,"UserID:")==0){
        fscanf(U,"%s",d);
        Clients[i].Id=atoi(d);
        fscanf(U,"%s",d);
        while(1){
            fscanf(U,"%s",d);
            if(strcmp(d,"User_LastName:")==0){
                break;
            }else if(usfl!=0){
            strcat(Clients[i].Nom," ");
            }
            strcat(Clients[i].Nom,d);
            usfl++;
        }
        usfl=0;
        while(1){
            fscanf(U,"%s",d);
            if(strcmp(d,"User_BirthDay:")==0){
                break;
            }else if(usfl!=0){
            strcat(Clients[i].Prenom," ");
            }
            strcat(Clients[i].Prenom,d);
            usfl++;
        }
        usfl=0;
        fscanf(U,"%s",d);
        Clients[i].Date_nais.Day = atoi(d);
        fscanf(U,"%s",d);
        fscanf(U,"%s",d);
        Clients[i].Date_nais.Month = atoi(d);
        fscanf(U,"%s",d);
        fscanf(U,"%s",d);
        Clients[i].Date_nais.Year = atoi(d);
        fscanf(U,"%s",d);
        while(1){
            fscanf(U,"%s",d);
            if(strcmp(d,"User_Phone:")==0){
                break;
            }else if(usfl!=0){
            strcat(Clients[i].Adresse," ");
            }
            strcat(Clients[i].Adresse,d);
            usfl++;
        }
        usfl=0;
        while(1){
            if(fscanf(U,"%s",d)!=EOF){
            if(strcmp(d,"Start")==0){
                break;
            }else if(usfl!=0){
            strcat(Clients[i].Tel," ");
            }
            strcat(Clients[i].Tel,d);
            usfl++;
        }else {
        break;
        }
        }
        usfl=0;
        i++;
    }
  }
  fclose(U);
  i=0;
  C=fopen("Comptes_Storage.text","r");
  while(fscanf(C,"%s",d)!=EOF){
    if(strcmp(d,"UserID:")==0){
        fscanf(C,"%s",d);
        Comptes[i].Id_client=atoi(d);
        fscanf(C,"%s",d);fscanf(C,"%s",Comptes[i].Type_compte);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Comptes[i].create_time.hour = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Comptes[i].create_time.min = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Comptes[i].create_time.sec = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Comptes[i].create_time.Day = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Comptes[i].create_time.Month = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Comptes[i].create_time.Year = atoi(d);

        fscanf(C,"%s",d);
        fscanf(C,"%s",d);
        Comptes[i].Solde = atoi(d);
        fscanf(C,"%s",d);fscanf(C,"%s",Comptes[i].Bloquer);
        i++;
    }
  }
  fclose(C);
  i=0;
  P=fopen("User_Pass_Storage.text","r");
  while(fscanf(P,"%s",d)!=EOF){
    if(strcmp(d,"UserName:")==0){
        fscanf(P,"%s",Users[i].User_Name);
        fscanf(P,"%s",d);fscanf(P,"%s",Users[i].Password);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Users[i].User_ID =atoi(d);
        i++;
    }
  }
  fclose(P);
  i=0;
  usfl=0;
  int j=0;
  P=fopen("Companies_Storage.text","r");
  while(fscanf(P,"%s",d)!=EOF){
    if(strcmp(d,"CompanyName:")==0){
        while(1){
            fscanf(U,"%s",d);
            if(strcmp(d,"BOSSID:")==0){
                break;
            }else if(usfl!=0){
            strcat(Companys[i].CompanyName," ");
            }
            strcat(Companys[i].CompanyName,d);
            usfl++;
        }
        usfl=0;
        fscanf(P,"%s",d);
        Companys[i].BOSSID=atoi(d);
        j=0;
        while(fscanf(P,"%s",d)!=EOF){
            if(strcmp(d,"Start")==0){
                break;
            }
            fscanf(P,"%s",d);
            Companys[i].ClientsIDs[j]=atoi(d);
            j++;
        }
        i++;

    }
  }
  fclose(P);

  i=0;
  P=fopen("Colors_Storage.text","r");
  while(fscanf(P,"%s",d)!=EOF){
    if(strcmp(d,"UserID:")==0){
        fscanf(P,"%s",d);
        Colores[i].Uid=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Colores[i].User_BackGround_Color=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Colores[i].User_Col1=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Colores[i].User_Col2=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Colores[i].User_Col3=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Colores[i].User_Col4=atoi(d);
        i++;
    }
  }
  fclose(P);

  P=fopen("Admin_Settings.text","r");
  while(fscanf(P,"%s",d)!=EOF){
    if(strcmp(d,"ADMINCODE:")==0){
        fscanf(P,"%s",ADMINCODE);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        BackGround_Color=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Col1=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Col2=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Col3=atoi(d);
        fscanf(P,"%s",d);fscanf(P,"%s",d);
        Col4=atoi(d);
    }
  }
  fclose(P);

  i=0;
   usfl=0;
  U=fopen("Messages_Storage.text","r");
  while(fscanf(U,"%s",d)!=EOF){
    if(strcmp(d,"UserID:")==0){
        fscanf(U,"%s",d);
        Notes[i].USERID=atoi(d);
        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Notes[i].Date.hour = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Notes[i].Date.min = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Notes[i].Date.sec = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Notes[i].Date.Day = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Notes[i].Date.Month = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        Notes[i].Date.Year = atoi(d);

        fscanf(U,"%s",d);
        usfl=0;
        while(1){
            fscanf(U,"%s",d);
            if(strcmp(d,"Note2:")==0){
                break;
            }else if(usfl!=0){
            strcat(Notes[i].Note1," ");
            }
            strcat(Notes[i].Note1,d);
            usfl++;
        }
        usfl=0;
        while(1){
            fscanf(U,"%s",d);
            if(strcmp(d,"Note3:")==0){
                break;
            }else if(usfl!=0){
            strcat(Notes[i].Note2," ");
            }
            strcat(Notes[i].Note2,d);
            usfl++;
        }
        usfl=0;
        while(1){
            fscanf(U,"%s",d);
            if(strcmp(d,"Note4:")==0){
                break;
            }else if(usfl!=0){
            strcat(Notes[i].Note3," ");
            }
            strcat(Notes[i].Note3,d);
            usfl++;
        }
        usfl=0;
        while(1){
            if(fscanf(U,"%s",d)!=EOF){
            if(strcmp(d,"Start")==0){
                break;
            }else if(usfl!=0){
            strcat(Notes[i].Note4," ");
            }
            strcat(Notes[i].Note4,d);
            usfl++;
        }else{
        break;
        }
        }
        usfl=0;
        i++;
    }
  }
  fclose(U);

  int Uid;
  char OpType[50]="",AccType[50]="",Noote[255]="";
  FullTime OpTime;
  i=0;
   usfl=0;
  U=fopen("AllHistory_Storage.text","r");
  while(fscanf(U,"%s",d)!=EOF){
    if(strcmp(d,"UserID:")==0){
        fscanf(U,"%s",d);
        Uid=atoi(d);
        fscanf(U,"%s",d);fscanf(U,"%s",d);
        strcpy(AccType,d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.hour = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.min = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.sec = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Day = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Month = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Year = atoi(d);

        fscanf(U,"%s",d);fscanf(U,"%s",d);
        strcpy(OpType,d);

        fscanf(U,"%s",d);
        usfl=0;
        while(1){
            if(fscanf(U,"%s",d)!=EOF){
            if(strcmp(d,"Start")==0){
                break;
            }else if(usfl!=0){
            strcat(Noote," ");
            }
            strcat(Noote,d);
            usfl++;
        }else{
        break;
        }
        }
        usfl=0;
        CreateHisto(&FULLHistoHead,Uid,AccType[0],OpType[0],Noote);
        ResHistoTime(FULLHistoHead,OpTime);
        strcpy(Noote,"");
    }
  }
  fclose(U);

  i=0;
   usfl=0;
  U=fopen("CashHistory_Storage.text","r");
  while(fscanf(U,"%s",d)!=EOF){
    if(strcmp(d,"UserID:")==0){
        fscanf(U,"%s",d);
        Uid=atoi(d);
        fscanf(U,"%s",d);fscanf(U,"%s",d);
        strcpy(AccType,d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.hour = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.min = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.sec = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Day = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Month = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Year = atoi(d);

        fscanf(U,"%s",d);fscanf(U,"%s",d);
        strcpy(OpType,d);

        fscanf(U,"%s",d);
        usfl=0;
        while(1){
            if(fscanf(U,"%s",d)!=EOF){
            if(strcmp(d,"Start")==0){
                break;
            }else if(usfl!=0){
            strcat(Noote," ");
            }
            strcat(Noote,d);
            usfl++;
        }else{
        break;
        }
        }
        usfl=0;
        CreateHisto(&FULLCashhead,Uid,AccType[0],OpType[0],Noote);
        ResHistoTime(FULLCashhead,OpTime);
        strcpy(Noote,"");
    }
  }
  fclose(U);

  i=0;
   usfl=0;
   int Money;
  U=fopen("DiagramHistory_Storage.text","r");
  while(fscanf(U,"%s",d)!=EOF){
    if(strcmp(d,"UserID:")==0){
        fscanf(U,"%s",d);
        Uid=atoi(d);
        fscanf(U,"%s",d);fscanf(U,"%s",d);
        strcpy(AccType,d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.hour = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.min = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.sec = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Day = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Month = atoi(d);

        fscanf(C,"%s",d);fscanf(C,"%s",d);
        OpTime.Year = atoi(d);

        fscanf(U,"%s",d);fscanf(U,"%s",d);
        Money=atoi(d);

        CreateMoney(&FULLDiagramhead,Uid,AccType[0],Money);
        ResMoneyTime(FULLDiagramhead,OpTime);
        strcpy(Noote,"");
    }
  }
  fclose(U);

}

void SaveinFiles(){
    FILE *f;
    int k=0;
    f=fopen("Client_Storage.text","w");
for(int i=0;i<1000;i++){
    if(Clients[i].Id==0){}else{
    fprintf(f,"\nStart Client Number %d :\n",k+1);
    fprintf(f,"UserID: %d\n",Clients[i].Id);
    fprintf(f,"User_FirstName: %s\n",Clients[i].Nom);
    fprintf(f,"User_LastName: %s\n",Clients[i].Prenom);
    fprintf(f,"User_BirthDay: %d / %d / %d\n",Clients[i].Date_nais.Day,Clients[i].Date_nais.Month,Clients[i].Date_nais.Year);
    fprintf(f,"User_Adresse: %s\n",Clients[i].Adresse);
    fprintf(f,"User_Phone: %s\n",Clients[i].Tel);
    k++;
    }
}
fclose(f);

    k=0;
    f=fopen("Comptes_Storage.text","w");
for(int i=0;i<1000;i++){
    if(Comptes[i].Id_client==0){}else{
    fprintf(f,"\nStart Account Number %d :\n",k+1);
    fprintf(f,"UserID: %d\n",Comptes[i].Id_client);
    fprintf(f,"Account_Type: %s\n",Comptes[i].Type_compte);
    fprintf(f,"DateOfAccountCreate: %d : %d : %d _In_ %d / %d / %d\n",Comptes[i].create_time.hour,Comptes[i].create_time.min,Comptes[i].create_time.sec,Comptes[i].create_time.Day,Comptes[i].create_time.Month,Comptes[i].create_time.Year);
    fprintf(f,"Solde: %d \n",Comptes[i].Solde);
    fprintf(f,"Blocked: %s\n",Comptes[i].Bloquer);
    k++;
    }
}
fclose(f);

    k=0;
    f=fopen("User_Pass_Storage.text","w");
for(int i=0;i<1000;i++){
    if(Users[i].User_ID==0){}else{
    fprintf(f,"\nStart User Number %d :\n",k+1);
    fprintf(f,"UserName: %s\n",Users[i].User_Name);
    fprintf(f,"Password: %s\n",Users[i].Password);
    fprintf(f,"UserID: %d \n",Users[i].User_ID);
    k++;
    }
}
fclose(f);

k=0;
    f=fopen("Companies_Storage.text","w");
for(int i=0;i<1000;i++){
    if(Companys[i].BOSSID==0){}else{
    fprintf(f,"\nStart Company Number %d :\n",k+1);
    fprintf(f,"CompanyName: %s\n",Companys[i].CompanyName);
    fprintf(f,"BOSSID: %d\n",Companys[i].BOSSID);
    for(int j=0;j<255;j++){
       if(Companys[i].ClientsIDs[j]==0){}else{
        fprintf(f,"Worker%d: %d \n",j+1,Companys[i].ClientsIDs[j]);
       }
    }
    k++;
    }
}
fclose(f);

k=0;
    f=fopen("Colors_Storage.text","w");
for(int i=0;i<1000;i++){
    if(Colores[i].Uid==0){}else{
    fprintf(f,"\nStart Color Number %d :\n",k+1);
    fprintf(f,"UserID: %d\n",Colores[i].Uid);
    fprintf(f,"BackGround: %d\n",Colores[i].User_BackGround_Color);
    fprintf(f,"Col1: %d\n",Colores[i].User_Col1);
    fprintf(f,"Col2: %d\n",Colores[i].User_Col2);
    fprintf(f,"Col3: %d\n",Colores[i].User_Col3);
    fprintf(f,"Col4: %d\n",Colores[i].User_Col4);
    k++;
    }
}
fclose(f);

    f=fopen("Admin_Settings.text","w");
    fprintf(f,"\nADMINCODE: %s\n",ADMINCODE);
    fprintf(f,"BackGround: %d\n",BackGround_Color);
    fprintf(f,"Col1: %d\n",Col1);
    fprintf(f,"Col2: %d\n",Col2);
    fprintf(f,"Col3: %d\n",Col3);
    fprintf(f,"Col4: %d\n",Col4);
fclose(f);

k=0;
    f=fopen("Messages_Storage.text","w");
for(int i=0;i<1000;i++){
    if(Notes[i].Date.Year==0){}else{
    fprintf(f,"\nStart Note Number %d :\n",k+1);
    fprintf(f,"UserID: %d\n",Notes[i].USERID);
    fprintf(f,"Date: %d : %d : %d _IN_ %d / %d / %d\n",Notes[i].Date.hour,Notes[i].Date.min,Notes[i].Date.sec,Notes[i].Date.Day,Notes[i].Date.Month,Notes[i].Date.Year);
    fprintf(f,"Note1: %s\n",Notes[i].Note1);
    fprintf(f,"Note2: %s\n",Notes[i].Note2);
    fprintf(f,"Note3: %s\n",Notes[i].Note3);
    fprintf(f,"Note4: %s\n",Notes[i].Note4);
    k++;
    }
}
fclose(f);


struct Historique *HistoHelper=FULLHistoHead;
k=0;
    f=fopen("AllHistory_Storage.text","w");
for(int i=0;i<ecount(FULLHistoHead);i++){
    if(HistoHelper->OperationDate.Year==0){}else{
    fprintf(f,"\nStart History Number %d :\n",k+1);
    fprintf(f,"UserID: %d\n",HistoHelper->Uid);
    fprintf(f,"AccountType: %c\n",HistoHelper->AccType);
    fprintf(f,"OpDate: %d : %d : %d _IN_ %d / %d / %d\n",HistoHelper->OperationDate.hour,HistoHelper->OperationDate.min,HistoHelper->OperationDate.sec,HistoHelper->OperationDate.Day,HistoHelper->OperationDate.Month,HistoHelper->OperationDate.Year);
    fprintf(f,"OperationType: %c\n",HistoHelper->OperationType);
    fprintf(f,"Note: %s\n",HistoHelper->Note);
    HistoHelper=HistoHelper->next;
    k++;
    }
}
fclose(f);

struct Historique *CashHelper=FULLCashhead;
k=0;
    f=fopen("CashHistory_Storage.text","w");
for(int i=0;i<ecount(FULLCashhead);i++){
    if(CashHelper->OperationDate.Year==0){}else{
    fprintf(f,"\nStart CashHistory Number %d :\n",k+1);
    fprintf(f,"UserID: %d\n",CashHelper->Uid);
    fprintf(f,"AccountType: %c\n",CashHelper->AccType);
    fprintf(f,"OpDate: %d : %d : %d _IN_ %d / %d / %d\n",CashHelper->OperationDate.hour,CashHelper->OperationDate.min,CashHelper->OperationDate.sec,CashHelper->OperationDate.Day,CashHelper->OperationDate.Month,CashHelper->OperationDate.Year);
    fprintf(f,"OperationType: %c\n",CashHelper->OperationType);
    fprintf(f,"Note: %s\n",CashHelper->Note);
    CashHelper=CashHelper->next;
    k++;
    }
}
fclose(f);

struct Money *DiaHelper=FULLDiagramhead;
k=0;
    f=fopen("DiagramHistory_Storage.text","w");
for(int i=0;i<ecountMoney(FULLDiagramhead);i++){
    if(DiaHelper->Date.Year==0){}else{
    fprintf(f,"\nStart DiagramHistory Number %d :\n",k+1);
    fprintf(f,"UserID: %d\n",DiaHelper->Uid);
    fprintf(f,"AccountType: %c\n",DiaHelper->AccType);
    fprintf(f,"OpDate: %d : %d : %d _IN_ %d / %d / %d\n",DiaHelper->Date.hour,DiaHelper->Date.min,DiaHelper->Date.sec,DiaHelper->Date.Day,DiaHelper->Date.Month,DiaHelper->Date.Year);
    fprintf(f,"Money: %d\n",DiaHelper->mon);
    DiaHelper=DiaHelper->next;
    k++;
    }
}
fclose(f);
}

int FindIDinTable(int type,int IDD){
for(int k=0;k<1000;k++){
    if(type == 1){//Client Table
        if(IDD==Clients[k].Id){
            return k;
        }
    }else if(type == 2){
        if(IDD==Comptes[k].Id_client){
            return k;
        }
    }else if(type == 3){
       if(IDD==Users[k].User_ID){
            return k;
        }
    }else if(type == 4){
       if((IDD==Comptes[k].Id_client)&&(strcmp(Comptes[k].Type_compte,"Particular")==0)){
           return k;
       }
    }else if(type == 5){
       if((IDD==Comptes[k].Id_client)&&(strcmp(Comptes[k].Type_compte,"Minor")==0)){
           return k;
       }
    }else if(type == 6){
       if((IDD==Comptes[k].Id_client)&&(strcmp(Comptes[k].Type_compte,"Commercial")==0)){
           return k;
       }
    }else if(type == 7){
      if(IDD == Companys[k].BOSSID){
        return k;
      }
    }else if(type == 8){
      if(IDD == Colores[k].Uid){
        return k;
      }
    }else if(type == 9){
      if(IDD == Notes[k].USERID && Notes[k].Date.Year == 0){
        return k;
      }
    }
}
 return -1;
}

int FINDWORKER(int Com,int IDD){
for(int i=0;i<255;i++){
    if(IDD == Companys[Com].ClientsIDs[i]){
        return i;
    }
}
return -1;
}

void PrintInformations(int type,int Position){
if(type==1){
printf("USER ID : %d \n",Clients[Position].Id);
printf("USER FIRST NAME : %s\n",Clients[Position].Nom);
printf("USER LAST NAME  : %s\n",Clients[Position].Prenom);
printf("USER BirthDay : %d / %d / %d\n",Clients[Position].Date_nais.Day,Clients[Position].Date_nais.Month,Clients[Position].Date_nais.Year);
printf("USER Adresse : %s\n",Clients[Position].Adresse);
printf("USER Phone : %s\n",Clients[Position].Tel);
}else if(type==2){
printf("USER ID : %d \n",Comptes[Position].Id_client);
printf("Account Type : %s \n",Comptes[Position].Type_compte);
printf("Account Created In : %d:%d:%d _In_ %d/%d/%d  \n",Comptes[Position].create_time.hour,Comptes[Position].create_time.min,Comptes[Position].create_time.sec,Comptes[Position].create_time.Day,Comptes[Position].create_time.Month,Comptes[Position].create_time.Year);
printf("The Money In The Account : %d \n",Comptes[Position].Solde);
printf("Blocked : %s \n",Comptes[Position].Bloquer);
}else if(type==3){
printf("USER ID : %d \n",Users[Position].User_ID);
printf("Account USER Name : %s \n",Users[Position].User_Name);
printf("Account Password : %s \n",Users[Position].Password);
}

}

int Age(Client Cli,int ReturnType){
time_t currentTime;
    time(&currentTime);
    struct tm *myTime = localtime(&currentTime);
int Local_Age=0,Local_Time=0,Agee;

    Local_Age += (Cli.Date_nais.Day + (Cli.Date_nais.Month*30)+(Cli.Date_nais.Year*356));

   Local_Time += ( myTime->tm_mday)+((myTime->tm_mon +1 )*30)+((myTime->tm_year+1900)*356);

   Agee = Local_Time - Local_Age;
   if(Agee<18*356){
    if(ReturnType==1){
        return 1;//MINOR
    }
   }else if((Agee>=18*356)&&(Agee<20*356)){
    if(ReturnType==1){
    return 2;//PERSIENAL
    }
   }else{
    if(ReturnType==1){
    return 3;//COMERCIAL
    }
   }
   if(ReturnType==2){
    return Agee;
   }
   return 0;
}

void StartMenu(int *Strtch){
Color(White_Color);
system("CLS");
int ip=0,i0=1,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0;
int ipp1=0,ip1=0,ip12=0,ipp2=0,i11=0,i12=0,i13=0,i22=0,i33=0,i55=0,i66=0;
         char c[255],Pas[255];

while(1){

StartMenuMvmntCond(&i0,&i1,&i11,&i12,&i13,&ip1,&ip12,&i2,&i22,&i3,&i33,&i4,&i5,&i55,&i6,&i66);


StartCore(i1,i2,i3,i4,i5,i6);

StartMenuTitels(i1,i2,i3,i4,i5,i6,ip);

ip=1;

    if(i0==1){
    StartMenuBBANKPrining();
    }else if(i1==1){
    StartMenuLoginPrining();
    StartMenuLoginUsPasEntering(&i11,&i12,&i13,&ip1,&ip12,&ipp1,&ipp2,c,Pas);
    }else if(i2==1){
    StartMenuSignUpPrinting(i22);
    }else if(i3==1){
    StartMenuAdminPrinting(i33);
    }else if(i4==1){
    StartMenuEventPrinting();
    }else if (i5==1){
    StartMenuSuportPrinting(i55);
    }else if(i6==1){
    StartMenuExitPrinting(i66);
    }
    if((_getch()==13)&&((i11==1)||(i12==1)||(i13==1)||(i22==1)||(i33==1)||(i66==1)||(i55==1))){
    if((i11==1)){
        ip1=1;
        ipp1=0;
    }
    else if((i12==1)){
        ip12=1;
        ipp2=0;
    }else if(i13==1){
    for(int k=0;k<1000;k++){
            if(strcmp(c,Users[k].User_Name)==0){
              if(strcmp(Pas,Users[k].Password)==0){
                ID=Users[k].User_ID;
              goto exit4;
                break;
              }
            }
         }
    }else{
    goto exit4;
    }
   }
   system("CLS");

}
exit4:

    system("CLS");

    if(i13==1){
    strcat(Password,Pas);
    strcat(Name,c);
    *Strtch=1;
    }else if(i22==1){
    *Strtch=2;
    }else if(i33==1){
    *Strtch=3;
    }else if(i55==1){
    *Strtch=5;
    }else if(i66==1){
    *Strtch=6;
    }

}

int UserLog();
void CreateAcc(int Style);
void Upgrade();
int Comp(int Type);
void Workers();
int ADELPKER(int Type);
void Cash();
int ViewInfo(int Type);
void PINFORMATIONS(int Type,int t);
void CashHistorique(int AccType);
void CashDiagram(int AccType);
void AllHistorique(int AccType);
void EditAcc();
void UOptions();
void LineOptionColor(int Type);
void Blocking();
void Deleting();
void CreateUser();
int Admin(int Type);
void Message(int Uid);

int main(){

ResetFiles();

BColor(BackGround_Color,1);

   STARTING();

CreateHisto(&FULLHistoHead,ID,'A','P',"The BBANK Program Has Been Running");

    int Strtch;
while(1){
    BColor(BackGround_Color,1);
    StartMenu(&Strtch);
    switch(Strtch){
    case 1:{
    Note(1,ID);
    CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
    int M = UserLog();
    if(M == 3){
        goto EX;
    }
    };break;
    case 2:{
    CreateHisto(&FULLHistoHead,ID,'A','P',"A New Customer Entered The Creating New User Lab");
    CreateUser();
    };break;
    case 3:{
    CreateHisto(&FULLHistoHead,ID,'A','P',"The ADMIN Code Checking Lab Is Opened");
    int W = ADELPKER(25);
    if(W == 3){
        goto EX;
    }
    };break;
    case 5:{
    CreateHisto(&FULLHistoHead,ID,'A','P',"The Sending Message Lab Is Opened");
    ADELPKER(26);
    };break;
    case 6:{
    int E=0;
    YesNo("Are You SureTo Exit The BBANK Program ??",&E,2);
    if(E != 1){
    goto EX;
    }
    };break;
    }
    SaveinFiles();
}

EX:
    EXITING();
    return 0;
}

int UserLog(){

    int t;
    int i0=0,i1=0,i11=0,i2=0,i22=0,i3=0,i33=0,i4=0,i44=0,i5=0,i55=0,i6=0,i66=0,i7=0,i77=0,i8=0,i88=0,i9=1;
    int Minor=0,Pers=0,Comerc=0;
    Pers=FindIDinTable(4,ID);
    Minor=FindIDinTable(5,ID);
    Comerc=FindIDinTable(6,ID);
    t=FindIDinTable(1,ID);
    int Type=Age(Clients[t],1);
    int PriCr=0;//PRINT CREATE CHOOSE OR NOT.....
    if((Type==1 && Minor == -1)||(Type == 2 && Pers == -1)||(Type == 3 && (Pers == -1 || Comerc == -1 ))){
        PriCr=1;
    }

while(1){
        t=FindIDinTable(8,ID);
    User_BackGround_Color=Colores[t].User_BackGround_Color;
    User_Col1=Colores[t].User_Col1;
    User_Col2=Colores[t].User_Col2;
    User_Col3=Colores[t].User_Col3;
    User_Col4=Colores[t].User_Col4;

        BColor(User_BackGround_Color,2);
if(FindIDinTable(1,ID)== -1){
return 2;
}
Pers=FindIDinTable(4,ID);
Minor=FindIDinTable(5,ID);
Comerc=FindIDinTable(6,ID);
t=FindIDinTable(1,ID);
    Type=Age(Clients[t],1);
    PriCr=0;//PRINT CREATE CHOOSE OR NOT.....
    if((Type==1 && Minor == -1)||(Type == 2 && Pers == -1)||(Type == 3 && (Pers == -1 || Comerc == -1 ))){
        PriCr=1;
    }

system("CLS");
while(1){
time_t currentTime;
time(&currentTime);
struct tm *myTime = localtime(&currentTime);

UserLogMvmntCond(&i0,&i1,&i11,&i2,&i22,&i3,&i33,&i4,&i44,&i5,&i55,&i6,&i66,&i7,&i77,&i8,&i88,&i9);

Color(User_White_Color);
   system("CLS");

   LoginChooseCore(i0,i1,i2,i3,i4,i5,i6,i7,i8,i9);

   UserLogTitels(PriCr,Minor,Comerc);

  Color(User_Gold_Color);
  gotoxy(64,2);
  printf("HELLO");
  t=FindIDinTable(1,ID);
  gotoxy(64,4);
  if(strlen(Clients[t].Nom)<15){
  printf("%s",Clients[t].Nom);
  }else if(strlen(Clients[t].Prenom)<15){
  printf("%s",Clients[t].Prenom);
  }
  Color(User_White_Color);

  if(i0==1){
    UserLogCCBprinting(PriCr,Minor,Comerc);
    }
    if(i1==1){
    UserLogCashOpPrinting(i11);
    }
    if(i2==1){
    UserLogLogoutPrinting(i22);
    }
    if(i3==1){
    UserLogViewInfoPrinting(i33);
    }
    if(i4==1){
    UserLogEditPrinting(i44);
    }
    if(i5==1){
    UserLogOptionPrinting(i55);
    }
    if(i6==1){
    UserLogBlockPrinting(i66);
    }
    if(i7==1){
    UserLogDeletePrinting(i77);
    }
    if(i8==1){
    UserLogExitPrinting(i88);
    }
    if(i9==1){
    int wordtallfix=0;
    if(strlen(Clients[t].Nom)>20){
        wordtallfix=1;
    }
    gotoxy(32,9);
    printf("HELLO!!");
    if(wordtallfix==1){
        gotoxy(30,10);
        printf("How Are You");
    }else {
    gotoxy(28,10);
    printf("How Are You %s",Clients[t].Nom);
    }
    if(wordtallfix==1){
        gotoxy(26,11);
        printf("%s",Clients[t].Nom);
    }
    gotoxy(28,11+wordtallfix);
    printf("Hope You Are Fine");
    gotoxy(28,13+wordtallfix);
    printf("Today Is : ");
    gotoxy(30,14+wordtallfix);
    printf("%i / %i / %i \n",myTime->tm_mday, myTime->tm_mon +1 ,myTime->tm_year+1900);
    gotoxy(28,16+wordtallfix);
    printf("The Time Is :");
    gotoxy(30,17+wordtallfix);
    printf("%i : %i : %i \n",myTime->tm_hour, myTime->tm_min ,myTime->tm_sec);
    gotoxy(26,19+wordtallfix);
    printf("Hope You Have A GooD Time ");
    gotoxy(30,20+wordtallfix);
    printf("In The Bank");

    }


if(_getch()==13){
if((i0==1)||(i11==1)||(i22==1)||(i33==1)||(i44==1)||(i55==1)||(i66==1)||(i77==1)||(i88==1)){
    break;
}
}

logrturn:

  system("CLS");
}
system("CLS");
if(i0==1){
if((PriCr==1 && Minor == -1)){
Note(2,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
CreateAcc(1);
}else if(Minor >= 0){
Note(3,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
  Upgrade();
}else if(Comerc >= 0){
    int Bl=FindIDinTable(6,ID);
if(strcmp(Comptes[Bl].Bloquer,"True")==0){

UserLogCompBlockedPrinting();

}else{
Note(4,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
while(1){
int E = Comp(1);
if(E == 3){
    break;
}
}
}
}
}else if(i1==1){
Note(5,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
Cash();
}else if(i2==1){
int rturn=0;
YesNo("Are You Sure You Want To LogOut Now ??",&rturn,1);
if(rturn==1){
    goto logrturn;
}else{
Note(6,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
    system("CLS");
    return 1;
}
}else if(i3==1){
Note(7,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
while(1){
int E = ViewInfo(1);
if(E == 3){
    break;
}
}
}else if(i4==1){
Note(8,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
EditAcc();
}else if(i5==1){
Note(9,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
UOptions();
BColor(BackGround_Color,1);
}else if(i6==1){
Note(10,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
Blocking();
}else if(i7==1){
Note(11,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
Deleting();
}else if(i8==1){
int E=0;
YesNo("Are You SureTo Exit The BBANK Program ??",&E,1);
if(E != 1){
return 3;
}
}
SaveinFiles();
}
return 0;
}

void CreateAcc(int Style){

    int t,Op,ip=1,i0=1,i1=0,i2=0,i3=0,i4=0;
    time_t currentTime;// This Commands Is For The Real User Time
    time(&currentTime);
    struct tm *myTime = localtime(&currentTime);// The Two Last Commands Is Used To Create a New Pointer Struct Called myTime

    int Minor=0,Pers=0,Comerc=0;
     Pers=FindIDinTable(4,ID);
     Minor=FindIDinTable(5,ID);
     Comerc=FindIDinTable(6,ID);
    t=FindIDinTable(1,ID);
    int Type=Age(Clients[t],1);


while(1){

   CreateAccMvmntCond(&i0,&i1,&i2,&i3,&i4,Style,Type,Pers,Minor,Comerc);


   Color(User_White_Color);
    system("CLS");
   TheChooseCore(i0,i1,i2,i3,i4); // This Part Is For Choosing The Type Of The  Account

   CreateAccTiteles(i0,i1,i2,i3,i4,ip);

    Color(User_Gold_Color);
    if((Style==1 &&((Type==1) ||(Type == 3 && Pers >= 0))) || (Style >= 2 && Pers == -1)){
    for(int j=14;j<35;j+=5){
    for(int i=0;i<5;i++){
    gotoxy(j-i,7+i);
    printf("/");
    }
    }
    }
    if((Style == 1 &&((Type==2) ||(Type ==1)||(Type == 3 && Pers == -1))) || (Style >= 2 && Comerc == -1)){
    for(int j=24;j<50;j+=5){
    for(int i=0;i<5;i++){
    gotoxy(j-i,12+i);
    printf("/");
    }
    }
    }
    if((Style == 1 &&(Type==2 || Type==3)) || (Style >= 2 && Minor == -1)){
    for(int j=42;j<65;j+=5){
    for(int i=0;i<5;i++){
    gotoxy(j-i,7+i);
    printf("/");
    }
    }
    }
    Color(User_White_Color);
    if((_getch()==13)&&(i0!=1)){
    goto exit5;
   }

 ip=0;
   system("CLS");
    }

exit5:

    if(i0==1){}
    else if(i1==1){
    Op=1;
    }else if(i2==1){
    Op=2;
    }else if(i3==1){
    Op=3;
    }else if(i4==1){
    Op=4;
    }
    if(Style == 1){
    if(Op==1){
        system("CLS");
      t=FindIDinTable(1,ID);
  t=FindIDinTable(2,0);
  Comptes[t].Id_client=ID;
  strcat(Comptes[t].Type_compte,"Particular");
  Comptes[t].create_time.hour=myTime->tm_hour;
  Comptes[t].create_time.min = myTime->tm_min;
  Comptes[t].create_time.sec = myTime->tm_sec;
  Comptes[t].create_time.Day = myTime->tm_mday;
  Comptes[t].create_time.Month = myTime->tm_mon +1 ;
  Comptes[t].create_time.Year = myTime->tm_year+1900;
  Comptes[t].Solde=00;
  strcat(Comptes[t].Bloquer,"False");
  Note(12,ID);
  CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);

  CreateAccCongForPersPrinting();

    }else if(Op==2){
        system("CLS");
        i1=1;i2=0;
    int ip1=0,ip2=0,ipp1=0,ipp2=0,Correct1=0,Correct2=0;
    char DADID[255]=" ",DADNAME[255]=" ";
    while(1){
       CreateAccMinorMvmntCond(&i1,&i2,&i3,&i4);

    MinorCore(0,i1,i2,i3,i4,0,0,0,0);

    CreateAccDadMinorPrinting();

    if(ipp1==1 && ipp2==1){
    if(atoi(DADID)<=0){
    Color(User_Red_Color);
    gotoxy(30,12);
    printf("%s",DADID);
    gotoxy(30,16);
    printf("%s",DADNAME);
    Color(User_White_Color);
    }else{
    int t=FindIDinTable(1,atoi(DADID));
    if(Clients[t].Id >0 && Clients[t].Id != ID){
        Color(User_Green_Color);
        Correct1=1;
      }else {
      Color(User_Red_Color);
      Correct1=0;
      }
    gotoxy(30,12);
    printf("%s",DADID);
    Color(User_White_Color);
    if(strcmp(Clients[t].Nom,DADNAME)==0){
        Color(User_Green_Color);
        Correct2=1;
    }else{
       Color(User_Red_Color);
       Correct2=0;
    }
    gotoxy(30,16);
    printf("%s",DADNAME);
    Color(User_White_Color);
    }
    }else {
    gotoxy(30,12);
    printf("%s",DADID);
    gotoxy(30,16);
    printf("%s",DADNAME);
    }


    if(ip1==1){
      gotoxy(30,12);
      printf("                         ");
      gotoxy(30,12);
      gets(DADID);
      ip1=0;
      ipp1=1;
    }else if(ip2==1){
     gotoxy(30,16);
     printf("                          ");
     gotoxy(30,16);
     gets(DADNAME);
     ip2=0;
     ipp2=1;
    }




    if(_getch()==13){
      if(i1==1){
        ip1=1;
      }else if(i2==1){
        ip2=1;
      }else if(i3==1){
      break;
      }else if(i4==1 && Correct1 == 1 && Correct2 == 1){
      break;
      }
    }

    system("CLS");
    }
    system("CLS");
    if(i4==1){
    t=FindIDinTable(2,0);
    Comptes[t].Id_client=ID;
    strcat(Comptes[t].Type_compte,"Minor");
    Comptes[t].create_time.hour=myTime->tm_hour;
    Comptes[t].create_time.min = myTime->tm_min;
    Comptes[t].create_time.sec = myTime->tm_sec;
    Comptes[t].create_time.Day = myTime->tm_mday;
    Comptes[t].create_time.Month = myTime->tm_mon +1 ;
    Comptes[t].create_time.Year = myTime->tm_year+1900;
    Comptes[t].Solde=00;
    strcat(Comptes[t].Bloquer,"False");
    Note(13,ID);
    CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);

    CreateAccCongForMinorPirting();

    }



    }else if(Op==3){
    system("CLS");
        i1=1;i2=0;i3=0;
    int ip1=0,ip2=0,ipp1=0,ipp2=0,Correct1=0,Correct2=0;
    char CNAME[255]=" ",CMONEY[255]=" ";
    while(1){
       CreateAccMinorMvmntCond(&i1,&i2,&i3,&i4);

    MinorCore(0,i1,i2,i3,i4,0,0,0,0);

    CreateAccComercCondPrinting();

    if(ipp1 == 1 && ipp2 == 1){
        int t=0;
        for(int i=0;i<255;i++){
            if(strcmp(CNAME,Companys[i].CompanyName)==0){
                t=1;
                break;
            }
        }
       if(t==0){
        Color(User_Green_Color);
        Correct1=1;
       }else {
       Color(User_Red_Color);
       Correct1=0;
       }
       gotoxy(30,12);
      printf("%s",CNAME);

      if(atoi(CMONEY)>=200){
        Color(User_Green_Color);
        Correct2=1;
      }else {
        Color(User_Red_Color);
        Correct2=0;
      }
      gotoxy(30,16);
       printf("%s",CMONEY);
   Color(User_White_Color);
    }else {
    gotoxy(30,12);
      printf("%s",CNAME);
      gotoxy(30,16);
     printf("%s",CMONEY);
    }


    if(ip1==1){
      gotoxy(30,12);
      printf("                         ");
      gotoxy(30,12);
      gets(CNAME);
      ip1=0;
      ipp1=1;
    }else if(ip2==1){
     gotoxy(30,16);
     printf("                          ");
     gotoxy(30,16);
     gets(CMONEY);
     ip2=0;
     ipp2=1;
    }




    if(_getch()==13){
      if(i1==1){
        ip1=1;
      }else if(i2==1){
        ip2=1;
      }else if(i3==1){
      break;
      }else if(i4==1 && Correct1 == 1 && Correct2 == 1){
      break;
      }
    }

    system("CLS");
    }
    system("CLS");
    if(i4==1){
    t=FindIDinTable(7,0);
    Companys[t].BOSSID=ID;
    strcat(Companys[t].CompanyName,CNAME);
    t=FindIDinTable(2,0);
    Comptes[t].Id_client=ID;
    strcat(Comptes[t].Type_compte,"Commercial");
    Comptes[t].create_time.hour=myTime->tm_hour;
    Comptes[t].create_time.min = myTime->tm_min;
    Comptes[t].create_time.sec = myTime->tm_sec;
    Comptes[t].create_time.Day = myTime->tm_mday;
    Comptes[t].create_time.Month = myTime->tm_mon +1 ;
    Comptes[t].create_time.Year = myTime->tm_year+1900;
    Comptes[t].Solde=atoi(CMONEY);
    strcat(Comptes[t].Bloquer,"False");
    Note(14,ID);
    CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);

     CreateAccCongForComecPrinting();

    }
    }
    }else if(Style == 2){
    if(Op==1){
        ADELPKER(17);
    }else if(Op == 2){
        ADELPKER(18);
    }else if(Op == 3){
        ADELPKER(19);
    }
    }else if(Style == 3){
    if(Op==1){
        ADELPKER(21);
    }else if(Op == 2){
        ADELPKER(22);
    }else if(Op == 3){
        ADELPKER(23);
    }
    }

    system("CLS");


}

void Upgrade(){
Color(User_White_Color);
   system("CLS");
int t=FindIDinTable(1,ID);
int UserAge=Age(Clients[t],2);

int Update=0;
    Color(15);
    Box(2,8,62,18);
if(UserAge<18*356){
UpgradeStillYoungPrinting(UserAge);
  Update=0;
}else {
UpgradeCongForUpPrinting(UserAge);
  Update=1;
}

 _getch();

  if(Update==1){
    t=FindIDinTable(2,ID);
    strcpy(Comptes[t].Type_compte,"Particular");
    system("CLS");
    Box(2,8,62,18);
    gotoxy(25,15);
    printf("ACCOUNT UPDATED SUCCESSFULLY");
    Note(15,ID);
    CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
  }
}

int Comp(int Type){

int i0=1,i1=0,i2=0,i3=0,i4=0,i5=0;
Color(User_White_Color);
system("CLS");
    while(1){

    CompMvmntCond(&i0,&i1,&i2,&i3,&i4,&i5,Type);

    Color(User_White_Color);
   system("CLS");

    CompCore(i1,i2,i3,i4,i5);


if(Type==1){
    Color(User_Gold_Color);
    gotoxy(32,7);
    printf("Welcome To ");
    Color(User_White_Color);
    if(i0==1){
        Color(User_Red_Color);
    }
    int t=FindIDinTable(7,ID);
    gotoxy(35,9);
    printf("%s",Companys[t].CompanyName);
    Color(User_White_Color);
    Color(User_Gold_Color);
    gotoxy(37,11);
    printf("Company");
    Color(User_White_Color);

     CompCompanyTitels();

}else if(Type==2 || Type == 3){
    if(i0==1){
        Color(User_Red_Color);
    }
    int t;
    if(Type == 2){
    t=FindIDinTable(6,ID);
    }else{
    t=FindIDinTable(2,ID);
    }
    gotoxy(34,7);
    printf("YOUR SOLDE ");
    if(i0!=1){
        Color(User_Green_Color);
    }
    gotoxy(35,9);
    printf("%d $",Comptes[t].Solde);
    Color(User_White_Color);

    CompCashTitels();
}

    if(Type == 3){
    for(int j=59;j<75;j+=5){
    for(int i=0;i<7;i++){
    Color(User_Gold_Color);
    gotoxy(j-i,6+i);
    printf("/");
    if(i==5 && j == 59){
        i++;
    }
    }
    }
    Color(User_White_Color);
    }

    if((_getch()==13)&&(i0==0)){
     break;
    }
    system("CLS");
    }
    system("CLS");
    if(Type==1){
    if(i1==1){
    Note(22,ID);
    CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
    while(1){
    int E = Comp(2);
    if(E == 3){
        break;
    }
    }
    }else if(i2==1){
    Note(23,ID);
    CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
    Workers();
    }else if(i3==1){
    Note(24,ID);
    CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
    while(1){
    int E = ViewInfo(2);
    if(E == 3){
        break;
    }
    }
    }else if(i4==1){
    int think=Two("ADD WORKER","DELETE WORKER");
    if(think==1){
       Note(25,ID);
       CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
       ADELPKER(1);
    }else if(think==2){
        Note(26,ID);
        CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
        ADELPKER(2);
    }
    }else if(i5==1){
    return 3;
    }
    }else if(Type == 2 ||Type == 3){
    if(i1==1){
    if(Type == 2){
        ADELTYPESENDINGHELPER=2;
    }else{
        ADELTYPESENDINGHELPER=1;
    }
    ADELPKER(10);
    }else if(i2 == 1){
    if(Type == 2){
    ADELPKER(12);
    }else {
    ADELPKER(15);
    }
    }else if(i3 == 1){
    ADELPKER(11);
    }else if(i4 == 1){
    if(Type == 2){
    ADELPKER(13);
    }else{
    ADELPKER(14);
    }
    }else if(i5==1){
    return 3;
    }
    }
    return 0;
}

void Workers(){

    time_t currentTime;// This Commands Is For The Real User Time
    time(&currentTime);
    struct tm *myTime = localtime(&currentTime);
    int elementnumber=0;
    int t=FindIDinTable(7,ID);
    for(int i=0;i<255;i++){
        if(Companys[t].ClientsIDs[i]!=0){
            elementnumber++;
        }else {
        for(int j=i;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               elementnumber++;
               }
          }
        }
    }
    int i=0;
     int large = 0;
     int place=0;
     int listnum=1;
     char c;
      int i1=1,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0;
  //   pricash(head);
     while(1){

 t=FindIDinTable(7,ID);
        if(_kbhit()){
        switch(_getch()){
        case 72:
           if(i7==1){listnum--;
            i7=0;
            i6=1;
           }else if(i6==1){listnum--;
            i6=0;
            i5=1;
           }else if(i5==1){listnum--;
            i5=0;
            i4=1;
           }else if(i4==1){listnum--;
            i4=0;
            i3=1;
           }else if(i3==1){listnum--;
            i3=0;
            i2=1;
           }else if(i2==1){listnum--;
            i2=0;
            i1=1;
           }else if((i1==1)&&(elementnumber>0)){
            if(Companys[t].ClientsIDs[i-1]==0){break;}else{listnum--;
           i--;
           place--;
            }
           }

           // printf("Up");
            break;//72 Arrow UP
        case 80:
            if((i1==1)&&(elementnumber>1)){listnum++;
            i1=0;
            i2=1;
           }else if((i2==1)&&(elementnumber>2)){listnum++;
            i2=0;
            i3=1;
           }else if((i3==1)&&(elementnumber>3)){listnum++;
            i3=0;
            i4=1;
           }else if((i4==1)&&(elementnumber>4)){listnum++;
            i4=0;
            i5=1;
           }else if((i5==1)&&(elementnumber>5)){listnum++;
            i5=0;
            i6=1;
           }else if((i6==1)&&(elementnumber>6)){listnum++;
            i6=0;
            i7=1;
           }else if((i7==1)&&(elementnumber>7)){
            if(Companys[t].ClientsIDs[i+7]==0){break;}else{listnum++;
           i++;
           place++;
           }
           }


            // printf("Down");
             break;//80 Arrow Down


        }
    }
    Color(User_White_Color);
   system("CLS");

        WCore(i1,i2,i3,i4,i5,i6,i7);
        gotoxy(3,1);
        printf("MY WORKERS");
        gotoxy(21,1);
        Color(User_Gold_Color);
        printf("PRESS OK Or 'B' ");
        gotoxy(23,2);
        printf("TO GO BACK");
        Color(User_White_Color);


    //    gotoxy(0,5+((listnum*14)/9));
    if(elementnumber<=7){
        gotoxy(0,6);
        large=16;
    }else{
    float el=(float)(elementnumber);
    gotoxy(0,6+(listnum*(float)((el)/(el*(7.0/(100/el))))));//   العلاقة المخلطة ++
    large=16-(elementnumber-7);
    if(elementnumber<20){
    gotoxy(0,6+place);
    }
    }
    if(large<0){large=1;}
        for(int i=0;i<=large;i++){
        printf("%c\n",219);
        }



        if(Companys[t].ClientsIDs[i]==0){
            for(int j=i;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               gotoxy(7,5);
               printf("DELETED");
               }
            }
        }else{
      int l=FindIDinTable(1,Companys[t].ClientsIDs[i]);
        gotoxy(7,5);
       printf("%s %s",Clients[l].Nom,Clients[l].Prenom);
       if(i1==1){
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i]);
       gotoxy(50,6);
       printf("%s",Clients[l].Nom);
       gotoxy(45,11);
       printf("%s",Clients[l].Prenom);
       gotoxy(42,15);
       printf("ID: %d",Clients[l].Id);
       gotoxy(42,17);
       printf("AGE : %d",(myTime->tm_year+1900)-Clients[l].Date_nais.Year);
       gotoxy(42,19);
       printf("ADRESS: %s",Clients[l].Adresse);
       gotoxy(42,21);
       printf("PHONE: %s",Clients[l].Tel);
       }
       gotoxy(4,5);
     //   printf("%c",headPr->OperationType);
        }

        if(Companys[t].ClientsIDs[i+1]==0){
            for(int j=i+1;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               gotoxy(7,8);
               printf("DELETED");
               }
            }
        }else{
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i+1]);
        gotoxy(7,8);
       printf("%s %s",Clients[l].Nom,Clients[l].Prenom);

       if(i2==1){
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i+1]);
       gotoxy(50,6);
       printf("%s",Clients[l].Nom);
       gotoxy(45,11);
       printf("%s",Clients[l].Prenom);
       gotoxy(42,15);
       printf("ID: %d",Clients[l].Id);
       gotoxy(42,17);
       printf("AGE : %d",(myTime->tm_year+1900)-Clients[l].Date_nais.Year);
       gotoxy(42,19);
       printf("ADRESS: %s",Clients[l].Adresse);
       gotoxy(42,21);
       printf("PHONE: %s",Clients[l].Tel);
       }
       gotoxy(4,8);
      //  printf("%c",headPr->next->OperationType);
        }

        if(Companys[t].ClientsIDs[i+2]==0){
            for(int j=i+2;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               gotoxy(7,11);
               printf("DELETED");
               }
            }
        }else{
      int l=FindIDinTable(1,Companys[t].ClientsIDs[i+2]);
        gotoxy(7,11);
       printf("%s %s",Clients[l].Nom,Clients[l].Prenom);

       if(i3==1){
      int l=FindIDinTable(1,Companys[t].ClientsIDs[i+2]);
       gotoxy(50,6);
       printf("%s",Clients[l].Nom);
       gotoxy(45,11);
       printf("%s",Clients[l].Prenom);
       gotoxy(42,15);
       printf("ID: %d",Clients[l].Id);
       gotoxy(42,17);
       printf("AGE : %d",(myTime->tm_year+1900)-Clients[l].Date_nais.Year);
       gotoxy(42,19);
       printf("ADRESS: %s",Clients[l].Adresse);
       gotoxy(42,21);
       printf("PHONE: %s",Clients[l].Tel);
       }
       gotoxy(4,11);
      //  printf("%c",headPr->next->next->OperationType);
        }

        if(Companys[t].ClientsIDs[i+3]==0){
            for(int j=i+3;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               gotoxy(7,14);
               printf("DELETED");
               }
            }
        }else{
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i+3]);
        gotoxy(7,14);
       printf("%s %s",Clients[l].Nom,Clients[l].Prenom);

       if(i4==1){
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i+3]);
       gotoxy(50,6);
       printf("%s",Clients[l].Nom);
       gotoxy(45,11);
       printf("%s",Clients[l].Prenom);
       gotoxy(42,15);
       printf("ID: %d",Clients[l].Id);
       gotoxy(42,17);
       printf("AGE : %d",(myTime->tm_year+1900)-Clients[l].Date_nais.Year);
       gotoxy(42,19);
       printf("ADRESS: %s",Clients[l].Adresse);
       gotoxy(42,21);
       printf("PHONE: %s",Clients[l].Tel);
       }
       gotoxy(4,14);
       // printf("%c",headPr->next->next->next->OperationType);
        }

        if(Companys[t].ClientsIDs[i+4]==0){
            for(int j=i+4;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               gotoxy(7,17);
               printf("DELETED");
               }
            }
        }else{
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i+4]);
        gotoxy(7,17);
       printf("%s %s",Clients[l].Nom,Clients[l].Prenom);

       if(i5==1){
      int l=FindIDinTable(1,Companys[t].ClientsIDs[i+4]);
       gotoxy(50,6);
       printf("%s",Clients[l].Nom);
       gotoxy(45,11);
       printf("%s",Clients[l].Prenom);
       gotoxy(42,15);
       printf("ID: %d",Clients[l].Id);
       gotoxy(42,17);
       printf("AGE : %d",(myTime->tm_year+1900)-Clients[l].Date_nais.Year);
       gotoxy(42,19);
       printf("ADRESS: %s",Clients[l].Adresse);
       gotoxy(42,21);
       printf("PHONE: %s",Clients[l].Tel);
       }
       gotoxy(4,17);
     //   printf("%c",headPr->next->next->next->next->OperationType);
        }

        if(Companys[t].ClientsIDs[i+5]==0){
            for(int j=i+5;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               gotoxy(7,20);
               printf("DELETED");
               }
            }
        }else{
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i+5]);
        gotoxy(7,20);
       printf("%s %s",Clients[l].Nom,Clients[l].Prenom);

       if(i6==1){
      int l=FindIDinTable(1,Companys[t].ClientsIDs[i+5]);
       gotoxy(50,6);
       printf("%s",Clients[l].Nom);
       gotoxy(45,11);
       printf("%s",Clients[l].Prenom);
       gotoxy(42,15);
       printf("ID: %d",Clients[l].Id);
       gotoxy(42,17);
       printf("AGE : %d",(myTime->tm_year+1900)-Clients[l].Date_nais.Year);
       gotoxy(42,19);
       printf("ADRESS: %s",Clients[l].Adresse);
       gotoxy(42,21);
       printf("PHONE: %s",Clients[l].Tel);
       }
       gotoxy(4,20);
      //  printf("%c",headPr->next->next->next->next->next->OperationType);
        }

       if(Companys[t].ClientsIDs[i+6]==0){
        for(int j=i+6;j<255;j++){
               if(Companys[t].ClientsIDs[j]!=0){
               gotoxy(7,23);
               printf("DELETED");
               }
            }
       }else{
       int l=FindIDinTable(1,Companys[t].ClientsIDs[i+6]);
        gotoxy(7,23);
       printf("%s %s",Clients[l].Nom,Clients[l].Prenom);

       if(i7==1){
      int l=FindIDinTable(1,Companys[t].ClientsIDs[i+6]);
       gotoxy(50,6);
       printf("%s",Clients[l].Nom);
       gotoxy(45,11);
       printf("%s",Clients[l].Prenom);
       gotoxy(42,15);
       printf("ID: %d",Clients[l].Id);
       gotoxy(42,17);
       printf("AGE : %d",(myTime->tm_year+1900)-Clients[l].Date_nais.Year);
       gotoxy(42,19);
       printf("ADRESS: %s",Clients[l].Adresse);
       gotoxy(42,21);
       printf("PHONE: %s",Clients[l].Tel);
       }
       }
       gotoxy(4,23);
     //   printf("%c",headPr->next->next->next->next->next->next->OperationType);





        gotoxy(48,2);
        if(elementnumber==0){
            gotoxy(52,2);
            printf("EMPETY");
        }else
        printf("Operation %d",listnum);
        c = _getch();
        if(c==13||c=='B'||c=='b'){
            break;
        }
        system("CLS");
     }

}

int ADELPKER(int Type){
int W=0,Re=0,Gr=0;
if(Type < 24){
Color(User_White_Color);
W=User_White_Color;
Re=User_Red_Color;
Gr=User_Green_Color;
}else{
Color(White_Color);
W=White_Color;
Re=Red_Color;
Gr=Green_Color;
}
   system("CLS");
    /* About The Type In Case...
    Type : 1 -> IS TO ADD A WORKER TO THE COMPANY
    Type ! 2 -> IS TO DELETE A WORKER FROM THE COMPANY
    Type : 3 -> IS TO EDITE THE FIRST NAME
    Type : 4 -> IS TO EDITE THE LAST NAME
    Type : 5 -> IS TO EDITE THE BIRTH DAY
    Type : 6 -> IS  TO EDITE THE ADRESS
    Type : 7 -> IS TO EDITE THE PHONE
    Type : 8 -> IS TO EDITE THE USER_NAME
    Type : 9 -> IS TO EDITE THE PASSWORD
    Type : 10 -> SEND MONEY .
    Type : 11 -> SEND RETRAIT
    Type : 12 -> ENTER MONEY FOR COMPANY
    Type : 13 -> GET OUT MONEY FOR COMPANY
    Type : 14 -> GET OUT MONEY FOR NORMAL PERSON
    Type : 15 -> ENTER MONEY FOR NORMAL PERSON
    Type : 16 -> GIVE THE MONEY .... تابعة
    Type : 17 -> BLOCKING PERSONAL ACCOUNT
    Type : 18 -> BLOCKING MINOR ACCOUNT
    Type : 19 -> BLOCKING COMERCIAL ACCOUNT
    Type : 20 -> DELETING USER_ACCOUNT
    Type : 21 -> DELETING YOUR PERSONAL ACCOUNT
    Type : 22 -> DELETING YOUR MINOR ACCOUNT
    Type : 23 -> DELETING YOUR COMERCIAL ACCOUNT
    Type : 24 -> CHECK IF THEIR IS AN ID OR  NOT FOR ADMIN
    Type : 25 -> ENTER TO ADMIN MODE
    Type : 26 -> SEND MESSAGE TO AdmIN
    Type : 27 -> Change The Admin Code
    */
system("CLS");
time_t currentTime;// This Commands Is For The Real User Time
    time(&currentTime);
    struct tm *myTime = localtime(&currentTime);
        int i1=1,i2=0,i3=0,i4=0;
        int ip1=0,ip2=0,ipp1=0,ipp2=0,Correct1=0,Correct2=0;
    char WID[255]=" ",PS[255]=" ",D[10]=" ",M[10]=" ",Y[10]=" ";
     int d1=1,d2=0,d3=0,dd1=0,dd2=0,dd3=0,ddd1=0,ddd2=0,ddd3=0;
     int Attempts=0;
     if(Type == 5){
        i1=0;
     }
     if(Type >= 17 && Type <= 25){
        i1=0;
        i2=1;
        Correct1 = 1;
     }
    while(1){

    ADELPKERMvmntCond(&i1,&i2,&i3,&i4,&d1,&d2,&d3,Type);

    MinorCore(Type,i1,i2,i3,i4,Type,d1,d2,d3);

    ADELPKERTypesPrinting(Type);

   if(((ipp1==1)&&(ipp2==1)&&(Type != 5))||(Type==5 && ddd1==1 && ddd2 == 1 && ddd3 == 1)|| (ipp2 == 1 && Type >= 17 && Type <= 25 ) || (ipp1 == 1 && Type == 26)){
    if(Type==1){
    if((FindIDinTable(2,atoi(WID))>0)&&(atoi(WID)!=ID)&&(FINDWORKER(FindIDinTable(7,ID),atoi(WID))==-1)){
        Color(Gr);
        Correct1=1;
    }else {
       Color(Re);
       Correct1=0;
    }
    }else if(Type == 2){
    if(FindIDinTable(2,atoi(WID)>0)&&(atoi(WID)!=ID)&&(FINDWORKER(FindIDinTable(7,ID),atoi(WID))>0)){
        Color(Gr);
        Correct1=1;
    }else {
       Color(Re);
       Correct1=0;
    }
    }else if((Type == 3)||(Type == 4)||(Type == 6)||(Type == 7)||(Type == 9)){
    if((strlen(WID)>=3 && strlen(WID)<24 && Type != 7)||(Type == 7 && strlen(WID)>= 3 && strlen(WID)<15)){
        Color(Gr);
        Correct1=1;
    }else {
        Color(Re);
        Correct1=0;
    }
    }else if(Type == 5){
    if(strlen(D)>0 && strlen(D)<3 && strlen(M)>0 && strlen(M)<3 && strlen(Y)<5){
    if((atoi(D)>0 && atoi(D)<=31)&&(atoi(M)>0 && atoi(M)<=12)&&(atoi(Y)>1900 && atoi(Y)<(myTime->tm_year+1900-8))){
        Correct1=1;
        Color(Gr);
    }else{
       Color(Re);
       Correct1=0;
    }
    }else{
    Correct1=0;
    Color(Re);
    }
    }else if(Type == 8){
    for(int k=0;k<1000;k++){
        if(strcmp(Users[k].User_Name,WID)==0){
            Color(Re);
            Correct1=0;
            break;
        }else{
           Correct1=1;
           Color(Gr);
        }
    }
    }else if(Type == 10){
    if(FindIDinTable(2,atoi(WID))>0){
        Color(Gr);
        Correct1=1;
    }else {
        Color(Re);
        Correct1=0;
    }
    }else if(Type == 11 ||Type == 16){
    int n=FindIDinTable(7,ID);
    int wrk=0;
    if(Type == 11){
    for(int i=0;i<255;i++){
        if(Companys[n].ClientsIDs[i]!=0){
           wrk++;
        }
    }
    }else{
    wrk=1;
    }
    int t=FindIDinTable(6,ID);
    if((atoi(WID)*wrk)<= Comptes[t].Solde){
        Color(Gr);
        Correct1=1;
    }else{
        Color(Re);
        Correct1=0;
    }
    }else if(Type == 12 || Type == 15){
    if(strlen(WID)<9 && atoi(WID)!=0){
        Color(Gr);
        Correct1=1;
    }else{
        Color(Re);
        Correct1=0;
    }
    }else if(Type == 13 ||Type == 14){
    int t;
    if(Type == 13){
    t=FindIDinTable(6,ID);
    }else{
    t=FindIDinTable(2,ID);
    }
    if(atoi(WID)<= Comptes[t].Solde){
        Color(Gr);
        Correct1=1;
    }else{
        Color(Re);
        Correct1=0;
    }
    }else if(Type == 26){
    if(FindIDinTable(1,atoi(WID))>=0){
        Color(Gr);
        Correct1=1;
    }else{
        Color(Re);
        Correct1=0;
    }
    Correct2=1;
    }else if(Type==27){
    if(strcmp(WID,ADMINCODE)!=0 && strlen(WID)>=5){
        Color(Gr);
        Correct1=1;
    }else{
       Color(Re);
       Correct1=0;
    }
    }


    if(Type != 5){
    gotoxy(30,12);
    printf("%s",WID);
    }else{
      gotoxy(26,12);
      printf("%s",D);
      gotoxy(36,12);
      printf("%s",M);
      gotoxy(46,12);
      printf("%s",Y);
    }
    Color(W);
    int t=FindIDinTable(3,ID);
    if(Type != 24 && Type != 25 && Type != 27){
    if(strcmp(PS,Users[t].Password)==0){
        Color(Gr);
        Correct2=1;
    }else{
        Color(Re);
        Correct2=0;
    }
    }else if(Type != 25 && Type != 27){
    if(FindIDinTable(1,atoi(PS))>=0){
        Color(Gr);
        Correct2=1;
    }else {
        Color(Re);
        Correct2=0;
    }
    Correct1=1;
    }else{
    if(strcmp(PS,ADMINCODE)==0){
        Color(Gr);
        Correct2=1;
    }else {
        Color(Re);
        Correct2=0;
    }
    }
    if(Type != 26){
    gotoxy(30,16);
    printf("%s",PS);
    }
    Color(W);
    if(strcmp(PS,ADMINCODE)==0){}else{
        if(Attempts >= 5){
        break;
        }
    }


   }else{
   if(Type != 5){
    gotoxy(30,12);
    printf("%s",WID);
    }else{
      gotoxy(26,12);
      printf("%s",D);
      gotoxy(36,12);
      printf("%s",M);
      gotoxy(46,12);
      printf("%s",Y);
    }
    if(Type != 26){
    gotoxy(30,16);
    printf("%s",PS);
    }
   }


    if(ip1==1){
      gotoxy(30,12);
      printf("                         ");
      gotoxy(30,12);
      gets(WID);
      ip1=0;
      ipp1=1;
    }else if(ip2==1){
     gotoxy(30,16);
     printf("                          ");
     gotoxy(30,16);
     gets(PS);
     ip2=0;
     ipp2=1;
     Attempts++;
    }else if(dd1==1){
      gotoxy(26,12);
      printf("      ");
      gotoxy(26,12);
      gets(D);
      dd1=0;
      ddd1=1;
    }else if(dd2==1){
      gotoxy(36,12);
      printf("      ");
      gotoxy(36,12);
      gets(M);
      dd2=0;
      ddd2=1;
    }else if(dd3==1){
      gotoxy(46,12);
      printf("       ");
      gotoxy(46,12);
      gets(Y);
      dd3=0;
      ddd3=1;
    }



    if(_getch()==13){
      if(Type == 26){
        if(i1==1){
            ip1=1;
        }else if(i2 == 1 || i3==1 || (i4 == 1 && Correct1 == 1)){
        break;
        }
      }else{
      if(i1==1){
        ip1=1;
      }else if(i2==1){
        ip2=1;
      }else if(i3==1){
      break;
      }else if(i4==1 && Correct1 == 1 && Correct2 == 1){
      break;
      }else if(Type == 5 && d1 == 1){
      dd1=1;
      }else if(Type == 5 && d2 == 1){
      dd2=1;
      }else if(Type == 5 && d3 == 1){
      dd3=1;
      }
    }
    }

    system("CLS");
    }
    system("CLS");

    if(i4==1){
    int t=FindIDinTable(7,ID);
    if(Type==1){
    for(int i=0;i<255;i++){
        if(Companys[t].ClientsIDs[i]==0){
            Companys[t].ClientsIDs[i]=atoi(WID);
            break;
        }
    }
    NoteOfCredit(15,ID,atoi(WID),0);
    CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
    NoteOfCredit(16,atoi(WID),ID,0);
    CreateHisto(&FULLHistoHead,atoi(WID),'P','A',NoteHelper);
    }else if(Type == 2){
    int w=FINDWORKER(t,atoi(WID));
    Companys[t].ClientsIDs[w]=0;

    NoteOfCredit(17,ID,atoi(WID),0);
    CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
    NoteOfCredit(18,atoi(WID),ID,0);
    CreateHisto(&FULLHistoHead,atoi(WID),'P','A',NoteHelper);

    }else if(Type == 3){
    t=FindIDinTable(1,ID);
    NoteFromTo(1,ID,Clients[t].Nom,WID);
    strcpy(Clients[t].Nom,WID);
    CreateHisto(&FULLHistoHead,ID,'P','M',NoteHelper);
    }else if(Type == 4){
    t=FindIDinTable(1,ID);
    NoteFromTo(2,ID,Clients[t].Prenom,WID);
    strcpy(Clients[t].Prenom,WID);
    CreateHisto(&FULLHistoHead,ID,'P','M',NoteHelper);
    }else if(Type == 5){
    char DD[25],MM[25],YY[25],FULLD[55],FULLD1[55];
    t=FindIDinTable(1,ID);
    itoa(Clients[t].Date_nais.Day,DD,10);itoa(Clients[t].Date_nais.Month,MM,10);itoa(Clients[t].Date_nais.Year,YY,10);
    strcpy(FULLD,DD);strcat(FULLD,"/");
    strcat(FULLD,MM);strcat(FULLD,"/");
    strcat(FULLD,YY);
    strcpy(FULLD1,D);strcat(FULLD1,"/");
    strcat(FULLD1,M);strcat(FULLD1,"/");
    strcat(FULLD1,Y);

    NoteFromTo(3,ID,FULLD,FULLD1);
    Clients[t].Date_nais.Day=atoi(D);
    Clients[t].Date_nais.Month=atoi(M);
    Clients[t].Date_nais.Year=atoi(Y);
    CreateHisto(&FULLHistoHead,ID,'P','M',NoteHelper);

    }else if(Type == 6){
    t=FindIDinTable(1,ID);
    NoteFromTo(4,ID,Clients[t].Adresse,WID);
    strcpy(Clients[t].Adresse,WID);
    CreateHisto(&FULLHistoHead,ID,'P','M',NoteHelper);
    }else if(Type == 7){
    t=FindIDinTable(1,ID);
    NoteFromTo(5,ID,Clients[t].Tel,WID);
    strcpy(Clients[t].Tel,WID);
    CreateHisto(&FULLHistoHead,ID,'P','M',NoteHelper);
    }else if(Type == 8){
    t=FindIDinTable(3,ID);
    NoteFromTo(6,ID,Users[t].User_Name,WID);
    strcpy(Users[t].User_Name,WID);
    CreateHisto(&FULLHistoHead,ID,'P','M',NoteHelper);
    }else if(Type == 9){
    t=FindIDinTable(3,ID);
    NoteFromTo(7,ID,Users[t].Password,WID);
    strcpy(Users[t].Password,WID);
    CreateHisto(&FULLHistoHead,ID,'P','M',NoteHelper);
    }else if(Type == 10){
    ADELWRKERHEPER=atoi(WID);
    ADELPKER(16);
    }else if(Type == 11){//SEND MONEY TO WORKERS
    t=FindIDinTable(7,ID);
    for(int i=0;i<255;i++){
    if(Companys[t].ClientsIDs[i]!=0){
        Comptes[FindIDinTable(2,Companys[t].ClientsIDs[i])].Solde+=atoi(WID);
        NoteOfCredit(9,Companys[t].ClientsIDs[i],ID,atoi(WID));
        CreateHisto(&FULLCashhead,Companys[t].ClientsIDs[i],'P','S',NoteHelper);//needd Type
        CreateMoney(&FULLDiagramhead,Companys[t].ClientsIDs[i],'P',Comptes[FindIDinTable(2,Companys[t].ClientsIDs[i])].Solde);
    }
    }
    int n=FindIDinTable(7,ID);
    int wrk=0;
    for(int i=0;i<255;i++){
        if(Companys[n].ClientsIDs[i]!=0){
           wrk++;
        }
    }
    t=FindIDinTable(6,ID);
    Comptes[t].Solde-=atoi(WID)*wrk;
    NoteOfCredit(10,ID,0,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'C','S',NoteHelper);//needd Type
    CreateMoney(&FULLDiagramhead,ID,'C',Comptes[FindIDinTable(6,ID)].Solde);
    }else if(Type == 12){//ENTER MONEY TO COMPANY
    t=FindIDinTable(6,ID);
    Comptes[t].Solde+=atoi(WID);
    NoteOfCredit(11,ID,0,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'C','E',NoteHelper);//needd Type
    CreateMoney(&FULLDiagramhead,ID,'C',Comptes[FindIDinTable(6,ID)].Solde);
    }else if(Type == 13){//GET OUT MONEY FROM COMPANY
    t=FindIDinTable(6,ID);
    Comptes[t].Solde-=atoi(WID);
    NoteOfCredit(12,ID,0,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'C','W',NoteHelper);//needd Type
    CreateMoney(&FULLDiagramhead,ID,'C',Comptes[FindIDinTable(6,ID)].Solde);
    }else if(Type == 14){//GET OUT MONEY FROM ACCOUNT
    t=FindIDinTable(2,ID);
    Comptes[t].Solde-=atoi(WID);
    NoteOfCredit(13,ID,0,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'P','W',NoteHelper);//needd Type
    CreateMoney(&FULLDiagramhead,ID,'P',Comptes[FindIDinTable(2,ID)].Solde);
    }else if(Type == 15){// ENTER MONEY TO ACCOUNT
    t=FindIDinTable(2,ID);
    Comptes[t].Solde+=atoi(WID);
    NoteOfCredit(14,ID,0,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'P','E',NoteHelper);//needd Type
    CreateMoney(&FULLDiagramhead,ID,'P',Comptes[FindIDinTable(2,ID)].Solde);
    }else if(Type == 16){// SEND MONEY
    if(FindIDinTable(6,ADELWRKERHEPER) >= 0){
    int C12=Two("Send To Account","Send To Company");
    if(C12 == 1){
    t=FindIDinTable(2,ADELWRKERHEPER);
    Comptes[t].Solde+=atoi(WID);
    if(ADELTYPESENDINGHELPER == 1){
    NoteOfCredit(1,ID,ADELWRKERHEPER,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'P','V',NoteHelper);//needd Type
    NoteOfCredit(2,ADELWRKERHEPER,ID,atoi(WID));
    CreateHisto(&FULLCashhead,ADELWRKERHEPER,'P','R',NoteHelper);//needd Type
    }else{
    NoteOfCredit(3,ID,ADELWRKERHEPER,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'C','V',NoteHelper);//needd Type
    NoteOfCredit(4,ADELWRKERHEPER,ID,atoi(WID));
    CreateHisto(&FULLCashhead,ADELWRKERHEPER,'P','R',NoteHelper);//needd Type
    }
    CreateMoney(&FULLDiagramhead,ADELWRKERHEPER,'P',Comptes[FindIDinTable(2,ADELWRKERHEPER)].Solde);
    }else if(C12 == 2){
    t=FindIDinTable(6,ADELWRKERHEPER);
    Comptes[t].Solde+=atoi(WID);
    if(ADELTYPESENDINGHELPER == 1){
    NoteOfCredit(5,ID,ADELWRKERHEPER,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'P','V',NoteHelper);//needd Type
    NoteOfCredit(6,ADELWRKERHEPER,ID,atoi(WID));
    CreateHisto(&FULLCashhead,ADELWRKERHEPER,'C','R',NoteHelper);//needd Type
    }else{
    NoteOfCredit(7,ID,ADELWRKERHEPER,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'C','V',NoteHelper);//needd Type
    NoteOfCredit(8,ADELWRKERHEPER,ID,atoi(WID));
    CreateHisto(&FULLCashhead,ADELWRKERHEPER,'C','R',NoteHelper);//needd Type
    }
    CreateMoney(&FULLDiagramhead,ADELWRKERHEPER,'C',Comptes[FindIDinTable(6,ADELWRKERHEPER)].Solde);
    }else{
    ADELPKER(10);
    }
    }else{
    t=FindIDinTable(2,ADELWRKERHEPER);
    Comptes[t].Solde+=atoi(WID);
    if(ADELTYPESENDINGHELPER == 1){
    NoteOfCredit(1,ID,ADELWRKERHEPER,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'P','V',NoteHelper);//needd Type
    NoteOfCredit(2,ADELWRKERHEPER,ID,atoi(WID));
    CreateHisto(&FULLCashhead,ADELWRKERHEPER,'P','R',NoteHelper);//needd Type
    }else{
    NoteOfCredit(3,ID,ADELWRKERHEPER,atoi(WID));
    CreateHisto(&FULLCashhead,ID,'C','V',NoteHelper);//needd Type
    NoteOfCredit(4,ADELWRKERHEPER,ID,atoi(WID));
    CreateHisto(&FULLCashhead,ADELWRKERHEPER,'P','R',NoteHelper);//needd Type
    }
    CreateMoney(&FULLDiagramhead,ADELWRKERHEPER,'P',Comptes[FindIDinTable(2,ADELWRKERHEPER)].Solde);
    }
    if(ADELTYPESENDINGHELPER == 1){
    t=FindIDinTable(2,ID);
    Comptes[t].Solde-=atoi(WID);
    CreateMoney(&FULLDiagramhead,ID,'P',Comptes[FindIDinTable(2,ID)].Solde);
    }else{
    t=FindIDinTable(6,ID);
    Comptes[t].Solde-=atoi(WID);
    CreateMoney(&FULLDiagramhead,ID,'C',Comptes[FindIDinTable(6,ID)].Solde);
    }
    }else if(Type == 17){
    int Pers=FindIDinTable(4,ID);
    if(strcmp(Comptes[Pers].Bloquer,"False") == 0){
    strcpy(Comptes[Pers].Bloquer,"True");
    }else{
    strcpy(Comptes[Pers].Bloquer,"False");
    }
    }else if(Type == 18){
    int Minor=FindIDinTable(5,ID);
    if(strcmp(Comptes[Minor].Bloquer,"False") == 0){
    strcpy(Comptes[Minor].Bloquer,"True");
    }else{
    strcpy(Comptes[Minor].Bloquer,"False");
    }
    }else if (Type == 19){
    int Comerc=FindIDinTable(6,ID);
    if(strcmp(Comptes[Comerc].Bloquer,"False") == 0){
    strcpy(Comptes[Comerc].Bloquer,"True");
    }else{
    strcpy(Comptes[Comerc].Bloquer,"False");
    }
    }else if(Type == 20){
    int Pers=FindIDinTable(4,ID);
    int Minor=FindIDinTable(5,ID);
    int Comerc=FindIDinTable(6,ID);
    int Cl=FindIDinTable(1,ID);
    int Ul=FindIDinTable(3,ID);
    Clients[Cl].Id=0;
    if(Pers >= 0 ){
    Comptes[Pers].Id_client = 0;
    }else if(Minor >= 0 ){
    Comptes[Minor].Id_client = 0;
    }else if(Comerc >= 0 ){
    Comptes[Comerc].Id_client = 0;
    }
    Users[Ul].User_ID=0;
    strcpy(Users[Ul].Password," ");
    strcpy(Users[Ul].User_Name," ");
    }else if(Type == 21){
    int Pers=FindIDinTable(4,ID);
    int Comerc=FindIDinTable(6,ID);
    Comptes[Pers].Id_client=0;
    if(Comerc >= 0){
    Comptes[Comerc].Id_client=0;
    }
    }else if(Type == 22){
    int Minor=FindIDinTable(5,ID);
    Comptes[Minor].Id_client=0;
    }else if(Type == 23){
    int Comerc=FindIDinTable(6,ID);
    Comptes[Comerc].Id_client=0;
    }else if(Type == 24){
    ID=atoi(PS);
    User_BackGround_Color=Colores[FindIDinTable(8,ID)].User_BackGround_Color;
    User_Col1=Colores[FindIDinTable(8,ID)].User_Col1;
    User_Col2=Colores[FindIDinTable(8,ID)].User_Col2;
    User_Col3=Colores[FindIDinTable(8,ID)].User_Col3;
    User_Col4=Colores[FindIDinTable(8,ID)].User_Col4;
     int W = Admin(2);
     if(W == 3){
        return 3;
     }
    }else if(Type == 25){
    if(Attempts<=5 && Correct2 == 1){
    while(1){
    int W = Admin(1);
    if(W == 3){
        return 3;
    }else if(W == 1){
    break;
    }
    }
    }else {
    return 3;
    }
    }else if(Type == 27){
    strcpy(ADMINCODE,WID);
    system("CLS");
    Box(2,8,62,18);
    gotoxy(26,10);
    printf("THE ADMIN CODE HAS BEEN");
    gotoxy(27,12);
    printf("CHANGED SUCCESSFULLY");
    NoteFromTo(1,ID,PS,WID);
    CreateHisto(&FULLHistoHead,0,'A','P',NoteHelper);
    _getch();
    }
    }
    if(Type == 26){
        if(i2 == 1){
         Message(0);
        }else if(i4==1){
        Message(atoi(WID));
        }
    }

     return 0;
}

void Cash(){
Color(User_White_Color);
system("CLS");
int Bl=FindIDinTable(2,ID);
if(strcmp(Comptes[Bl].Bloquer,"True")==0){

CashAccBlockedPrinting();

}else  if(FindIDinTable(2,ID) == -1){

CashAccNoAccountPrinting();

}else{
while(1){
int E=Comp(3);
if(E==3){
    break;
}
}
}
}

int ViewInfo(int Type){
if(Type == 1 || Type == 2){
Color(User_White_Color);
}else{
Color(White_Color);
}
 int i1=1,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0;
while(1){

  ViewInfoMvmntCond(&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8);

  ViewInfoTitels(Type);

InformationCore(Type,i1,i2,i3,i4,i5,i6,i7,i8);

if(_getch()==13){
    break;
}

system("CLS");
}


system("CLS");

if(Type == 1 ||Type == 2){
if(i1==1){
if(Type == 1){
    Note(16,ID);
    CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
}else{
    Note(27,ID);
    CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
}
PINFORMATIONS(1,FindIDinTable(1,ID));
}else if(i2==1){
if(Type == 1){
Note(17,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
PINFORMATIONS(2,FindIDinTable(2,ID));
}else if(Type == 2){
Note(28,ID);
CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
PINFORMATIONS(2,FindIDinTable(6,ID));
}
}else if(i3==1){
if(Type == 1){
    Note(18,ID);
    CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
}else{
    Note(29,ID);
    CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
}
PINFORMATIONS(3,FindIDinTable(3,ID));
}else if(i4==1){
if(Type == 1){
    Note(19,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
CashHistorique(1);
}else if(Type == 2){
    Note(30,ID);
CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
CashHistorique(2);
}
}else if(i5==1){
if(Type == 1){
    Note(20,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
CashDiagram(1);
}else if(Type == 2){
    Note(31,ID);
CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
CashDiagram(2);
}
}else if(i6==1){
if(Type == 1){
    Note(21,ID);
CreateHisto(&FULLHistoHead,ID,'P','A',NoteHelper);
AllHistorique(1);
}else if(Type == 2){
    Note(32,ID);
CreateHisto(&FULLHistoHead,ID,'C','A',NoteHelper);
AllHistorique(2);
}
}else if(i7==1){
return 3;
}else if(i8 == 1){
int E=0;
for(int i=0;i<1000;i++){
if(Notes[i].Date.Year != 0 && Notes[i].USERID == ID){
    PINFORMATIONS(8,i);
    E=1;
    break;
    }
}
if(E==0){
    PINFORMATIONS(8,0);
}
}
}else{
if(i1==1){
    PINFORMATIONS(4,0);
}else if(i2 == 1){
    PINFORMATIONS(5,0);
}else if(i3 == 1){
    PINFORMATIONS(6,0);
}else if(i4 == 1){
     CashHistorique(3);
}else if(i5 == 1){
    CashDiagram(3);
}else if(i6 == 1){
    AllHistorique(3);
}else if(i7==1){
return 3;
}else if(i8==1){
    PINFORMATIONS(7,0);
}

}


system("CLS");
return 0;
}

void PINFORMATIONS(int Type,int t){
int G=0,W=0,Re=0,Gr=0;
if(Type < 4 || Type == 8){
Color(User_White_Color);
W=User_White_Color;
G=User_Gold_Color;
Gr=User_Green_Color;
Re=User_Red_Color;
}else{
Color(White_Color);
W=White_Color;
G=Gold_Color;
Gr=Green_Color;
Re=Red_Color;
}
int TableNumber=0,MessHel=1;
if(Type == 4){
    for(int i=0;i<1000;i++){
        if(Clients[i].Id!=0){
            TableNumber++;
        }
    }
}else if(Type == 5){
for(int i=0;i<1000;i++){
        if(Comptes[i].Id_client!=0){
            TableNumber++;
        }
    }
}else if(Type == 6){
for(int i=0;i<1000;i++){
        if(Users[i].User_ID!=0){
            TableNumber++;
        }
    }
}else if(Type == 7){
for(int i=0;i<1000;i++){
        if(Notes[i].Date.Year!=0){
            TableNumber++;
        }
    }
}else if(Type == 8){
for(int i=0;i<1000;i++){
        if(Notes[i].Date.Year != 0 && Notes[i].USERID == ID){
            TableNumber++;
        }
    }
}
if( (Type >= 4 && TableNumber == 0 ) || (FindIDinTable(2,ID) == -1 && Type == 2)){
    StyleCore();
  if(Type == 4 || Type == 6){
   gotoxy(30,10);
   printf("THIER IS NO USERS");
  }else if(Type == 5){
    gotoxy(29,10);
   printf("THIER IS NO ACCOUNTS");
  }else if(Type == 7 || Type == 8){
    gotoxy(29,10);
   printf("THIER IS NO MESSAGES");
  }else if(Type == 2){
  gotoxy(27,10);
   printf("YOU DONT HAVE AN ACCOUNT");
  }
  gotoxy(34,12);
  printf("RIGHT NOW");
  gotoxy(30,15);
  printf("PLEASE TRY LATTER");
  gotoxy(29,18);
  Color(Re);
  printf("PRESS ANY KEY TO EXIT");
  Color(W);
  _getch();
  }else {
    char c;
    int L=0,R=0;
while(1){

    if(Type == 7){
        PMessages(1);
    }else if(Type == 8){
        PMessages(2);
    }else{
    INFORMATIONS(Type);
    }


    Color(G);
    if(Type != 7 && Type != 8){
    gotoxy(25,2);
    }else{
    gotoxy(10,1);
    }
    printf("PRESS B OR OK TO EXIT");
    Color(W);

    if(Type == 1 || Type == 4){
    gotoxy(35,7);
    printf("%s",Clients[t].Nom);
    gotoxy(35,10);
    printf("%s",Clients[t].Prenom);
    gotoxy(35,13);
    printf("%d",Clients[t].Id);
    gotoxy(35,16);
    printf("%d / %d / %d",Clients[t].Date_nais.Day,Clients[t].Date_nais.Month,Clients[t].Date_nais.Year);
    gotoxy(35,19);
    printf("%s",Clients[t].Adresse);
    gotoxy(35,22);
    printf("%s",Clients[t].Tel);
    }else if(Type == 2 || Type == 5){
    gotoxy(35,7);
    printf("%d",Comptes[t].Id_client);
    gotoxy(35,10);
    printf("%s",Comptes[t].Type_compte);
    gotoxy(33,13);
    printf("%d : %d : %d _IN_ %d / %d / %d",Comptes[t].create_time.hour,Comptes[t].create_time.min,Comptes[t].create_time.sec,Comptes[t].create_time.Day,Comptes[t].create_time.Month,Comptes[t].create_time.Year);
    gotoxy(35,16);
    printf("%d $",Comptes[t].Solde);
    gotoxy(35,19);
    printf("%s",Comptes[t].Bloquer);
    }else if(Type == 3 || Type == 6){
    gotoxy(35,10);
    printf("%d",Users[t].User_ID);
    gotoxy(35,13);
    printf("%s",Users[t].User_Name);
    gotoxy(35,16);
    printf("%s",Users[t].Password);
    }else if(Type == 7 || Type == 8){
    gotoxy(38,1);
    Color(G);
    printf("%d : %d : %d _IN_ %d / %d / %d",Notes[t].Date.hour,Notes[t].Date.min,Notes[t].Date.sec,Notes[t].Date.Day,Notes[t].Date.Month,Notes[t].Date.Year);
    Color(W);
    if(Type == 7){
    if(Notes[t].USERID != 0){
    gotoxy(15,6);
    printf("USER ID");
    gotoxy(33,6);
    printf("%d",Notes[t].USERID);
    }else{
    gotoxy(30,6);
    printf("NEW CUSTOMER");
    }
    }
    gotoxy(12,10);
    printf("%s",Notes[t].Note1);
    gotoxy(12,13);
    printf("%s",Notes[t].Note2);
    gotoxy(12,16);
    printf("%s",Notes[t].Note3);
    gotoxy(12,19);
    printf("%s",Notes[t].Note4);
    }
    if(Type > 3){
    if(Type == 8){
        Color(User_Red_Color);
    }else {
        Color(Red_Color);
    }
    if(Type < 7){
    gotoxy(60,2);
    }else if(Type == 7){
    gotoxy(55,6);
    }else{
    gotoxy(35,6);
    }
    if(Type == 8){
    printf("%d / %d",MessHel,TableNumber);
    }else{
    printf("%d / %d",t+1,TableNumber);
    }
    if(Type == 8){
        Color(User_White_Color);
    }else {
        Color(White_Color);
    }
    }

    if(Type > 3){
    if(L==1){
        Color(Gr);
     }
     gotoxy(2,14);
     printf("%c",17);
     gotoxy(1,15);
     printf("MOVE");
     gotoxy(1,16);
     printf("LEFT");
     Color(W);
     if(R==1){
        Color(Gr);
     }
     gotoxy(75,14);
     printf("%c",16);
     gotoxy(73,15);
     printf("MOVE");
     gotoxy(73,16);
     printf("RIGHT");
     Color(W);
    }

    c =_getch();
    if(c==13 || c == 'B' || c == 'b' || c == 77 || c == 75){
    if(Type > 3 && Type != 8){
    if(c == 75 ){
    t--;
    if(!((Type == 4 && Clients[t].Id != 0) || (Type == 5 && Comptes[t].Id_client != 0) || (Type == 6 && Users[t].User_ID != 0) || (Type == 7 && Notes[t].Date.Year != 0))){
    t++;
    }else {
    L=1;
    R=0;
    }
    }else if(c == 77 ){
    t++;
    if(!((Type == 4 && Clients[t].Id != 0) || (Type == 5 && Comptes[t].Id_client != 0) || (Type == 6 && Users[t].User_ID != 0)|| (Type == 7 && Notes[t].Date.Year != 0))){
    t--;
    }else{
    R=1;
    L=0;
    }
    }
    }else if(Type == 8){
    if(c == 75 ){
    int E=t;
    for(int i=E-1;i>=0;i--){
    if(Notes[i].Date.Year != 0 && Notes[i].USERID == ID){
    t=i;
    MessHel--;
    break;
    }
    }
    if(E != t){
    L=1;
    R=0;
    }
    }else if(c == 77 ){
    int E=t;
    for(int i=E+1;i<1000;i++){
    if(Notes[i].Date.Year != 0 && Notes[i].USERID == ID){
    t=i;
    MessHel++;
    break;
    }
    }
    if(E != t){
    L=0;
    R=1;
    }
    }
    }
    if(c == 'B' || c == 'b' || c == 13){
        break;
    }
    }
    system("CLS");
}
}
system("CLS");

}

void CashHistorique(int AccType){
int W=0,G=0;
if(AccType == 1 || AccType == 2){
Color(User_White_Color);
W=User_White_Color;
G=User_Gold_Color;
}else{
Color(White_Color);
W=White_Color;
G=Gold_Color;
}
    struct Historique *Cashhead=NULL;
    if(AccType == 1){
    Separate(&Cashhead,ID,'P',2);
    }else if(AccType == 2){
    Separate(&Cashhead,ID,'C',2);
    }else if(AccType == 3){
    Cashhead=FULLCashhead;
    }

    struct Historique *headPr=NULL;
     headPr=Cashhead;
     int elementnumber=ecount(Cashhead);

     int large = 0;
     int place=0;
     int listnum=1;
     char c;
      int i1=1,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0;
  //   pricash(head);
     while(1){

       elementnumber=ecount(Cashhead);

        if(_kbhit()){
        switch(_getch()){
        case 72:
           if(i7==1){listnum--;
            i7=0;
            i6=1;
           }else if(i6==1){listnum--;
            i6=0;
            i5=1;
           }else if(i5==1){listnum--;
            i5=0;
            i4=1;
           }else if(i4==1){listnum--;
            i4=0;
            i3=1;
           }else if(i3==1){listnum--;
            i3=0;
            i2=1;
           }else if(i2==1){listnum--;
            i2=0;
            i1=1;
           }else if((i1==1)&&(elementnumber>0)){
            if(headPr->back==NULL){break;}else{listnum--;
           headPr=headPr->back;
           place--;
            }
           }

           // printf("Up");
            break;//72 Arrow UP
        case 80:
            if((i1==1)&&(elementnumber>1)){listnum++;
            i1=0;
            i2=1;
           }else if((i2==1)&&(elementnumber>2)){listnum++;
            i2=0;
            i3=1;
           }else if((i3==1)&&(elementnumber>3)){listnum++;
            i3=0;
            i4=1;
           }else if((i4==1)&&(elementnumber>4)){listnum++;
            i4=0;
            i5=1;
           }else if((i5==1)&&(elementnumber>5)){listnum++;
            i5=0;
            i6=1;
           }else if((i6==1)&&(elementnumber>6)){listnum++;
            i6=0;
            i7=1;
           }else if((i7==1)&&(elementnumber>7)){
            if(headPr->next->next->next->next->next->next->next==NULL){break;}else{listnum++;
           headPr=headPr->next;
           place++;
           }
           }


            // printf("Down");
             break;//80 Arrow Down


        }
    }

        CHistory(AccType,i1,i2,i3,i4,i5,i6,i7);
        gotoxy(3,1);
        printf("Cash History");
        gotoxy(21,1);
        Color(G);
        printf("PRESS OK For Deleting");
        gotoxy(23,2);
        printf("And 'B' TO Exit");
        Color(W);


    //    gotoxy(0,5+((listnum*14)/9));
    if(elementnumber<=7){
        gotoxy(0,6);
        large=16;
    }else{
    float el=(float)(elementnumber);
    gotoxy(0,6+(listnum*(float)((el)/(el*(7.0/(100/el))))));//   العلاقة المخلطة ++
    large=16-(elementnumber-7);
    if(elementnumber<20){
    gotoxy(0,6+place);
    }
    }
    if(large<0){large=1;}
        for(int i=0;i<=large;i++){
        printf("%c\n",219);
        }



        if(headPr==NULL){}else{
        gotoxy(7,5);
       printList(headPr);
       if(i1==1){
        hprinter(headPr);
       }
       gotoxy(4,5);
        printf("%c",headPr->OperationType);


        if(headPr->next==NULL){}else{
       gotoxy(7,8);
       printList(headPr->next);

       if(i2==1){
        hprinter(headPr->next);
       }
       gotoxy(4,8);
        printf("%c",headPr->next->OperationType);


        if(headPr->next->next==NULL){}else{
       gotoxy(7,11);
       printList(headPr->next->next);

       if(i3==1){
        hprinter(headPr->next->next);
       }
       gotoxy(4,11);
        printf("%c",headPr->next->next->OperationType);


        if(headPr->next->next->next==NULL){}else{
       gotoxy(7,14);
       printList(headPr->next->next->next);

       if(i4==1){
        hprinter(headPr->next->next->next);
       }
       gotoxy(4,14);
        printf("%c",headPr->next->next->next->OperationType);


        if(headPr->next->next->next->next==NULL){}else{
       gotoxy(7,17);
       printList(headPr->next->next->next->next);

       if(i5==1){
        hprinter(headPr->next->next->next->next);
       }
       gotoxy(4,17);
        printf("%c",headPr->next->next->next->next->OperationType);


        if(headPr->next->next->next->next->next==NULL){}else{
       gotoxy(7,20);
       printList(headPr->next->next->next->next->next);

       if(i6==1){
        hprinter(headPr->next->next->next->next->next);
       }
       gotoxy(4,20);
        printf("%c",headPr->next->next->next->next->next->OperationType);


       if(headPr->next->next->next->next->next->next==NULL){}else{
       gotoxy(7,23);
       printList(headPr->next->next->next->next->next->next);

       if(i7==1){
        hprinter(headPr->next->next->next->next->next->next);
       }
       gotoxy(4,23);
        printf("%c",headPr->next->next->next->next->next->next->OperationType);
       }
        }
        }
        }
        }
        }
        }



        gotoxy(48,2);
        if(elementnumber==0){
            gotoxy(52,2);
            printf("EMPETY");
        }else
        printf("Operation %d",listnum);
        c = _getch();
        if(c==13||c=='B'||c=='b'){
            if(c==13 && headPr != NULL){
            if(listnum == 1){
            DelElmFrmAllList(Cashhead,2);
            if(ecount(Cashhead)>1){
            headPr=headPr->next;
            headPr->back=NULL;
            Cashhead=Cashhead->next;
            Cashhead->back=NULL;
            }else{
            headPr=NULL;
            Cashhead=NULL;
            }
            }else if(listnum > 1){
             DelElmFrmList(2,&headPr,&Cashhead,listnum);
             if(listnum-1 == ecount(Cashhead) && listnum >7){
             headPr=headPr->back;
             listnum--;
             }else if(listnum-1 == ecount(Cashhead) && listnum<=7){
             if(listnum==7){
             i7=0;
             i6=1;
             }else if(listnum==6){
             i6=0;
             i5=1;
             }else if(listnum==5){
             i5=0;
             i4=1;
             }else if(listnum==4){
             i4=0;
             i3=1;
             }else if(listnum==3){
             i3=0;
             i2=1;
             }else if(listnum==2){
             i2=0;
             i1=1;
             }
             listnum--;
             }
             place--;
            }
            }else{
            break;
            }
        }
        system("CLS");
     }
}

void CashDiagram(int AccType){
int W=0,Re=0,G=0,Gr=0;
if(AccType == 1 || AccType == 2){
Color(User_White_Color);
W=User_White_Color;
G=User_Gold_Color;
Gr=User_Green_Color;
Re=User_Red_Color;
}else{
Color(White_Color);
W=White_Color;
G=Gold_Color;
Gr=Green_Color;
Re=Red_Color;
}

    int i1=1,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0;
    int B1=0,B2=0,B3=0,B4=0,B5=0,B6=0,B7=0,B8=0,R=0,L=0;

    struct Money *Diagramhead=NULL;
    if(AccType == 1){
    Separate2(&Diagramhead,ID,'P',2);
    }else if(AccType == 2){
    Separate2(&Diagramhead,ID,'C',2);
    }else if(AccType == 3){
    Diagramhead = FULLDiagramhead;
    }

struct Money *headPr=NULL;
struct Money *helper=NULL;
   headPr=Diagramhead;
while(1){
        if(_kbhit()){
        switch(_getch()){
        case 72:{
            if(B1==1){
            B1=0;
            i1=1;
            }else if(B2==1){
            B2=0;
            i2=1;
            }else if(B3==1){
            B3=0;
            i3=1;
            }else if(B4==1){
            B4=0;
            i4=1;
            }else if(B5==1){
            B5=0;
            i5=1;
            }else if(B6==1){
            B6=0;
            i6=1;
            }else if(B7==1){
            B7=0;
            i7=1;
            }else if(B8==1){
            B8=0;
            i8=1;
            }
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:{
           if(i1==1){
            i1=0;
            B1=1;
           }else if(i2==1){
            i2=0;
            B2=1;
           }else if(i3==1){
            i3=0;
            B3=1;
           }else if(i4==1){
            i4=0;
            B4=1;
           }else if(i5==1){
            i5=0;
            B5=1;
           }else if(i6==1){
            i6=0;
            B6=1;
           }else if(i7==1){
            i7=0;
            B7=1;
           }else if(i8==1){
            i8=0;
            B8=1;
           }
           L=0;
           R=0;
           }
            // printf("Down");
             break;//80 Arrow Down


        case 75:{
            if(i8==1){
            i8=0;
            i7=1;
           }else if(i7==1){
            i7=0;
            i6=1;
           }else if(i6==1){
            i6=0;
            i5=1;
           }else if(i5==1){
            i5=0;
            i4=1;
           }else if(i4==1){
            i4=0;
            i3=1;
           }else if(i3==1){
            i3=0;
            i2=1;
           }else if(i2==1){
            i2=0;
            i1=1;
           }else if((i1==1)&&(headPr->back!=NULL)){
            headPr=headPr->back;
           }
           if(!((B1==1) || (B2==1) || (B3==1) || (B4==1) || (B5==1) || (B6==1) || (B7==1) || (B8==1))){
           L=1;
           R=0;
           }
        }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:{
           if((i1==1)&&(headPr->next!=NULL)){
            i1=0;
            i2=1;
           }else if((i2==1)&&(headPr->next->next!=NULL)){
            i2=0;
            i3=1;
           }else if((i3==1)&&(headPr->next->next->next!=NULL)){
            i3=0;
            i4=1;
           }else if((i4==1)&&(headPr->next->next->next->next!=NULL)){
            i4=0;
            i5=1;
           }else if((i5==1)&&(headPr->next->next->next->next->next!=NULL)){
            i5=0;
            i6=1;
           }else if((i6==1)&&(headPr->next->next->next->next->next->next!=NULL)){
            i6=0;
            i7=1;
           }else if((i7==1)&&(headPr->next->next->next->next->next->next->next!=NULL)){
            i7=0;
            i8=1;
           }else if((i8==1)&&(headPr->next->next->next->next->next->next->next->next!=NULL)){
            headPr=headPr->next;
           }
           if(!((B1==1) || (B2==1) || (B3==1) || (B4==1) || (B5==1) || (B6==1) || (B7==1) || (B8==1))){
           R=1;
           L=0;
           }
            // printf("Right");
             break;//77 Arrow Right
        }

    }
}



    MoneyCore();

  if(headPr==NULL){
  gotoxy(27,10);
  printf("THIER IS NO INFORMATIONS");
  gotoxy(34,12);
  printf("RIGHT NOW");
  gotoxy(30,15);
  printf("PLEASE TRY LATTER");
  gotoxy(29,18);
  Color(Re);
  printf("PRESS ANY KEY TO EXIT");
  Color(W);
  if(_getch()){
    break;
  }
  }else{

int max=0;
helper=headPr;
  //  while(helper!=NULL){
     for(int i=0;i<8;i++){
        if(helper->mon>max){
            max=helper->mon;
        }
        if(helper->next==NULL){break;}
        helper=helper->next;
    }


    if(headPr==NULL){}else{
    if(i1==1){Color(Re);}
    Amod(20,11+2,2,(headPr->mon*16)/max);Color(W);

    if(headPr->next==NULL){}else{
    if(i2==1){Color(Re);}
    Amod(20,18+2,2,(headPr->next->mon*16)/max);Color(W);

    if(headPr->next->next==NULL){}else{
    if(i3==1){Color(Re);}
    Amod(20,25+2,2,(headPr->next->next->mon*16)/max);Color(W);

    if(headPr->next->next->next==NULL){}else{
    if(i4==1){Color(Re);}
    Amod(20,32+2,2,(headPr->next->next->next->mon*16)/max);Color(W);

    if(headPr->next->next->next->next==NULL){}else{
    if(i5==1){Color(Re);}
    Amod(20,39+2,2,(headPr->next->next->next->next->mon*16)/max);Color(W);

    if(headPr->next->next->next->next->next==NULL){}else{
    if(i6==1){Color(Re);}
    Amod(20,46+2,2,(headPr->next->next->next->next->next->mon*16)/max);Color(W);

    if(headPr->next->next->next->next->next->next==NULL){}else{
    if(i7==1){Color(Re);}
    Amod(20,53+2,2,(headPr->next->next->next->next->next->next->mon*16)/max);Color(W);

    if(headPr->next->next->next->next->next->next->next==NULL){}else{
    if(i8==1){Color(Re);}
    Amod(20,60+2,2,(headPr->next->next->next->next->next->next->next->mon*16)/max);Color(W);
     }}}}}}}}

     if(i1==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr);
        Color(W);
        if(AccType == 3 && i1==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->Uid);
        Color(W);
        }
     }else if(i2==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->next->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr->next);
        Color(W);
        if(AccType == 3 && i2==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->next->Uid);
        Color(W);
        }
     }else if(i3==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->next->next->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr->next->next);
        Color(W);
        if(AccType == 3 && i3==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->next->next->Uid);
        Color(W);
        }
     }else if(i4==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->next->next->next->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr->next->next->next);
        Color(W);
        if(AccType == 3 && i4==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->next->next->next->Uid);
        Color(W);
        }
     }else if(i5==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->next->next->next->next->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr->next->next->next->next);
        Color(W);
        if(AccType == 3 && i5==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->next->next->next->next->Uid);
        Color(W);
        }
     }else if(i6==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->next->next->next->next->next->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr->next->next->next->next->next);
        Color(W);
        if(AccType == 3 && i6==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->next->next->next->next->next->Uid);
        Color(W);
        }
     }else if(i7==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->next->next->next->next->next->next->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr->next->next->next->next->next->next);
        Color(W);
        if(AccType == 3 && i7==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->next->next->next->next->next->next->Uid);
        Color(W);
        }
     }else if(i8==1){
        gotoxy(15,1);
        Color(Gr);
        printf("%d $  ",headPr->next->next->next->next->next->next->next->mon);
        Color(W);
        gotoxy(35,1);
        Color(G);
        printList2(headPr->next->next->next->next->next->next->next);
        Color(W);
        if(AccType == 3 && i8==1){
        gotoxy(55,24);
        printf("ID : ");
        Color(G);
        printf("%d",headPr->next->next->next->next->next->next->next->Uid);
        Color(W);
        }
     }

     if(L==1){
        Color(Gr);
     }
     gotoxy(2,14);
     printf("%c",17);
     gotoxy(1,15);
     printf("MOVE");
     gotoxy(1,16);
     printf("LEFT");
     Color(W);
     if(R==1){
        Color(Gr);
     }
     gotoxy(75,14);
     printf("%c",16);
     gotoxy(73,15);
     printf("MOVE");
     gotoxy(73,16);
     printf("RIGHT");
     Color(W);

     if((B1==1) || (B2==1) || (B3==1) || (B4==1) || (B5==1) || (B6==1) || (B7==1) || (B8==1)){
        gotoxy(30,1);
        Color(G);
        printf("PRESS OK TO EXIT");
        Color(Gr);
     }
     gotoxy(36,24);
     printf("%c BACK",31);
     Color(W);

char c=_getch();
     if((c==13)&&((B1==1) || (B2==1) || (B3==1) || (B4==1) || (B5==1) || (B6==1) || (B7==1) || (B8==1))){
        break;
     }
  }

     system("CLS");

   }
   system("CLS");
}

void AllHistorique(int AccType){
int W=0,G=0;
if(AccType == 1 || AccType == 2){
Color(User_White_Color);
W=User_White_Color;
G=User_Gold_Color;
}else{
Color(White_Color);
W=White_Color;
G=Gold_Color;
}
    struct Historique *HistoHead=NULL;
    if(AccType == 1){
    Separate(&HistoHead,ID,'P',1);
    }else if(AccType == 2){
    Separate(&HistoHead,ID,'C',1);
    }else if(AccType == 3){
    HistoHead = FULLHistoHead;
    }

    struct Historique *headPr=NULL;
     headPr=HistoHead;
     int elementnumber=ecount(HistoHead);

     int large = 0;
     int place=0;
     int listnum=1;
     char c;
      int i1=1,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0;
  //   pricash(head);
     while(1){

     elementnumber=ecount(HistoHead);



        if(_kbhit()){
        switch(_getch()){
        case 72:
           if(i7==1){listnum--;
            i7=0;
            i6=1;
           }else if(i6==1){listnum--;
            i6=0;
            i5=1;
           }else if(i5==1){listnum--;
            i5=0;
            i4=1;
           }else if(i4==1){listnum--;
            i4=0;
            i3=1;
           }else if(i3==1){listnum--;
            i3=0;
            i2=1;
           }else if(i2==1){listnum--;
            i2=0;
            i1=1;
           }else if((i1==1)&&(elementnumber>0)){
            if(headPr->back==NULL){break;}else{listnum--;
           headPr=headPr->back;
           place--;
            }
           }

           // printf("Up");
            break;//72 Arrow UP
        case 80:
            if((i1==1)&&(elementnumber>1 && headPr->next!=NULL)){listnum++;
            i1=0;
            i2=1;
           }else if((i2==1)&&(elementnumber>2 && headPr->next->next!=NULL)){listnum++;
            i2=0;
            i3=1;
           }else if((i3==1)&&(elementnumber>3 && headPr->next->next->next!=NULL)){listnum++;
            i3=0;
            i4=1;
           }else if((i4==1)&&(elementnumber>4 && headPr->next->next->next->next!=NULL)){listnum++;
            i4=0;
            i5=1;
           }else if((i5==1)&&(elementnumber>5 && headPr->next->next->next->next->next!=NULL)){listnum++;
            i5=0;
            i6=1;
           }else if((i6==1)&&(elementnumber>6 && headPr->next->next->next->next->next->next!=NULL)){listnum++;
            i6=0;
            i7=1;
           }else if((i7==1)&&(elementnumber>7 && headPr->next->next->next->next->next->next->next!=NULL)){
            if(headPr->next->next->next->next->next->next->next==NULL){break;}else{listnum++;
           headPr=headPr->next;
           place++;
           }
           }


            // printf("Down");
             break;//80 Arrow Down


        }
    }

        CHistory(AccType,i1,i2,i3,i4,i5,i6,i7);
        gotoxy(3,1);
        printf("ALL HISTORIQUE");
        gotoxy(21,1);
        Color(G);
        printf("PRESS OK For Deleting");
        gotoxy(23,2);
        printf("And 'B' TO Exit");
        Color(W);


    //    gotoxy(0,5+((listnum*14)/9));
    if(elementnumber<=7){
        gotoxy(0,6);
        large=16;
    }else{
    float el=(float)(elementnumber);
    gotoxy(0,6+(listnum*(float)((el)/(el*(7.0/(100/el))))));//   العلاقة المخلطة ++
    large=16-(elementnumber-7);
    if(elementnumber<20){
    gotoxy(0,6+place);
    }
    }
    if(large<0){large=1;}
        for(int i=0;i<=large;i++){
        printf("%c\n",219);
        }



        if(headPr==NULL){}else{
        gotoxy(7,5);
       printList(headPr);
       if(i1==1){
        hprinter(headPr);
       }
       gotoxy(4,5);
        printf("%c",headPr->OperationType);


        if(headPr->next==NULL){}else{
       gotoxy(7,8);
       printList(headPr->next);

       if(i2==1){
        hprinter(headPr->next);
       }
       gotoxy(4,8);
        printf("%c",headPr->next->OperationType);


        if(headPr->next->next==NULL){}else{
       gotoxy(7,11);
       printList(headPr->next->next);

       if(i3==1){
        hprinter(headPr->next->next);
       }
       gotoxy(4,11);
        printf("%c",headPr->next->next->OperationType);


        if(headPr->next->next->next==NULL){}else{
       gotoxy(7,14);
       printList(headPr->next->next->next);

       if(i4==1){
        hprinter(headPr->next->next->next);
       }
       gotoxy(4,14);
        printf("%c",headPr->next->next->next->OperationType);


        if(headPr->next->next->next->next==NULL){}else{
       gotoxy(7,17);
       printList(headPr->next->next->next->next);

       if(i5==1){
        hprinter(headPr->next->next->next->next);
       }
       gotoxy(4,17);
        printf("%c",headPr->next->next->next->next->OperationType);


        if(headPr->next->next->next->next->next==NULL){}else{
       gotoxy(7,20);
       printList(headPr->next->next->next->next->next);

       if(i6==1){
        hprinter(headPr->next->next->next->next->next);
       }
       gotoxy(4,20);
        printf("%c",headPr->next->next->next->next->next->OperationType);


       if(headPr->next->next->next->next->next->next==NULL){}else{
       gotoxy(7,23);
       printList(headPr->next->next->next->next->next->next);

       if(i7==1){
        hprinter(headPr->next->next->next->next->next->next);
       }
        gotoxy(4,23);
        printf("%c",headPr->next->next->next->next->next->next->OperationType);
       }
        }
        }
        }
        }
        }
        }


        gotoxy(48,2);
        if(elementnumber==0){
            gotoxy(52,2);
            printf("EMPETY");
        }else{
        printf("Operation %d",listnum);
        }

        c = _getch();
        if(c==13||c=='B'||c=='b'){
            if(c==13 && headPr != NULL){
            if(listnum == 1){
            DelElmFrmAllList(HistoHead,1);
            if(ecount(HistoHead)>1){
            headPr=headPr->next;
            headPr->back=NULL;
            HistoHead=HistoHead->next;
            HistoHead->back=NULL;
            }else{
            headPr=NULL;
            HistoHead=NULL;
            }
            }else if(listnum > 1){
             DelElmFrmList(1,&headPr,&HistoHead,listnum);
             if(listnum-1 == ecount(HistoHead) && listnum >7){
             headPr=headPr->back;
             listnum--;
             }else if(listnum-1 == ecount(HistoHead) && listnum<=7){
             if(listnum==7){
             i7=0;
             i6=1;
             }else if(listnum==6){
             i6=0;
             i5=1;
             }else if(listnum==5){
             i5=0;
             i4=1;
             }else if(listnum==4){
             i4=0;
             i3=1;
             }else if(listnum==3){
             i3=0;
             i2=1;
             }else if(listnum==2){
             i2=0;
             i1=1;
             }
             listnum--;
             }
             place--;
            }
            }else{
            break;
            }
        }
        system("CLS");
     }
}

void EditAcc(){

   int C,ip=1,i0=1,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0;

      system("CLS");
while(1){
while(1){
      EditeMvmntCond(&i0,&i1,&i2,&i3,&i4,&i5,&i6,&i7);
      Color(User_White_Color);
      system("CLS");
      TheEditeCore();
      EditAccTitels(i0,i1,i2,i3,i4,i5,i6,i7,ip);
    ip=0;
if((_getch()==13)&&(i0!=1)){
    goto exit6;
   }
system("CLS");
}
exit6:
    if(i1==1){
        C=1;
    }else if(i2==1){
        C=2;
    }else if(i3==1){
        C=3;
    }else if(i4==1){
        C=4;
    }else if(i5==1){
        C=5;
    }else if(i6==1){
        C=6;
    }else if(i7==1){
        goto lver;
    }

system("CLS");

  int c;
   switch(C){
  case 1 :
    ADELPKER(3);
    break;
   case 2:
    ADELPKER(4);
       break;
    case 3:
     ADELPKER(5);
       break;
    case 4:
      ADELPKER(6);
        break;
    case 5:
      ADELPKER(7);
        break;
    case 6:
      c=Two("USER_NAME","PASSWORD");
      if(c==1){
      ADELPKER(8);
      }else if(c == 2){
      ADELPKER(9);
      }

        break;

   }

}

lver:
    system("CLS");

}

void UOptions(){
system("CLS");
LineOptionColor(1);

}

void LineOptionColor(int Type){
int W=0,G=0;
if(Type == 1 || Type == 2){
Color(User_White_Color);
W=User_White_Color;
G=User_Gold_Color;
}else{
Color(White_Color);
W=White_Color;
G=Gold_Color;
}
    int i1=1,i2=0,i3=0,C1[5],C2[5],C3[5],C4[5];
    Zeros(5,C1);Zeros(5,C2);Zeros(5,C3);Zeros(5,C4);
int p0=User_BackGround_Color-1,p1=User_Col1,p2=User_Col2,p3=User_Col3,p4=User_Col4;
if(Type == 3 || Type == 4){
    p0=BackGround_Color-1;p1=Col1;p2=Col2;p3=Col3;p4=Col4;
}
int s1=0,s2=0,s3=0,s4=0;
while(1){

LineOptionColorMvmntCond(&i1,&i2,&i3,C1,C2,C3,C4,&s1,&s2,&s3,&s4,Type);

SetCore(Type,i1,i2,i3,C1[0],C1[1],C1[2],C1[3],C1[4],C2[0],C2[1],C2[2],C2[3],C2[4],C3[0],C3[1],C3[2],C3[3],C3[4],C4[0],C4[1],C4[2],C4[3],C4[4]);

LineOptionColorTitels(Type);

if(Type == 2 || Type == 4){
Color(G);
int NOLOP[3]={21,43,62};
for(int y=0;y<3;y++){
for(int i=0;i<3;i++){
    for(int j=0;j<15;j+=2){
        gotoxy(NOLOP[y]+j,5+i);
        printf("/");
    }
}
}
for(int i=0;i<15;i++){
    for(int j=0;j<52;j+=4){
        gotoxy(23+j,9+i);
        printf("/");
    }
}
Color(W);
}
if(Type == 1 || Type == 3){
gotoxy(3,6);
if(p1!=0){
Color(p1);
}else{
Color(W);
}
printf("%s :",CColor(p1));Color(W);
gotoxy(4+18,6);
if(p2!=0){
Color(p2);
}else{
Color(W);
}
printf("%s :",CColor(p2));Color(W);
gotoxy(4+20+20,6);
if(p3!=0){
Color(p3);
}else{
Color(W);
}
printf("%s :",CColor(p3));Color(W);
gotoxy(4+20+18+20,6);
if(p4!=0){
Color(p4);
}else{
Color(W);
}
printf("%s :",CColor(p4));Color(W);
}else if(Type == 2 || Type == 4){
gotoxy(3,6);
if(p0!=0){
Color(p0);
}else{
Color(W);
}
printf("%s :",CColor(p0));Color(W);
}

gotoxy(8,10);
printf("%s",CColor(s1));
gotoxy(8,13);
printf("%s",CColor(s1+1));
gotoxy(8,16);
printf("%s",CColor(s1+2));
gotoxy(8,19);
printf("%s",CColor(s1+3));
gotoxy(8,22);
printf("%s",CColor(s1+4));

if(Type == 1 || Type == 3){
gotoxy(8+18,10);
printf("%s",CColor(s2));
gotoxy(8+18,13);
printf("%s",CColor(s2+1));
gotoxy(8+18,16);
printf("%s",CColor(s2+2));
gotoxy(8+18,19);
printf("%s",CColor(s2+3));
gotoxy(8+18,22);
printf("%s",CColor(s2+4));

gotoxy(8+18+18,10);
printf("%s",CColor(s3));
gotoxy(8+18+18,13);
printf("%s",CColor(s3+1));
gotoxy(8+18+18,16);
printf("%s",CColor(s3+2));
gotoxy(8+18+18,19);
printf("%s",CColor(s3+3));
gotoxy(8+18+18,22);
printf("%s",CColor(s3+4));

gotoxy(8+18+18+18,10);
printf("%s",CColor(s4));
gotoxy(8+18+18+18,13);
printf("%s",CColor(s4+1));
gotoxy(8+18+18+18,16);
printf("%s",CColor(s4+2));
gotoxy(8+18+18+18,19);
printf("%s",CColor(s4+3));
gotoxy(8+18+18+18,22);
printf("%s",CColor(s4+4));
}


if(_getch()==13){
    if(i3==1){
        if(Type == 1 || Type == 3){
        p1=15;
        p2=14;
        p3=12;
        p4=10;
        }else if(Type == 2 || Type == 4){
        p0=0;
        }
    }else if(i2==1 || i1 == 1){
        break;
    }
if(Type == 1 || Type == 3){
if(C1[0]==1){
    if(s1!=p1 && s1!=p2 && s1!=p3 && s1!=p4){
        p1=s1;
    }
}else if(C1[1]==1){
    if(s1+1!=p1 && s1+1!=p2 && s1+1!=p3 && s1+1!=p4){
        p1=s1+1;
    }
}else if(C1[2]==1){
    if(s1+2!=p1 && s1+2!=p2 && s1+2!=p3 && s1+2!=p4){
        p1=s1+2;
    }
}else if(C1[3]==1){
    if(s1+3!=p1 && s1+3!=p2 && s1+3!=p3 && s1+3!=p4){
        p1=s1+3;
    }
}else if(C1[4]==1){
    if(s1+4!=p1 && s1+4!=p2 && s1+4!=p3 && s1+4!=p4){
        p1=s1+4;
    }
}

if(C2[0]==1){
    if(s2!=p1 && s2!=p2 && s2!=p3 && s2!=p4){
        p2=s2;
    }
}else if(C2[1]==1){
    if(s2+1!=p1 && s2+1!=p2 && s2+1!=p3 && s2+1!=p4){
        p2=s2+1;
    }
}else if(C2[2]==1){
    if(s2+2!=p1 && s2+2!=p2 && s2+2!=p3 && s2+2!=p4){
        p2=s2+2;
    }
}else if(C2[3]==1){
    if(s2+3!=p1 && s2+3!=p2 && s2+3!=p3 && s2+3!=p4){
        p2=s2+3;
    }
}else if(C2[4]==1){
    if(s2+4!=p1 && s2+4!=p2 && s2+4!=p3 && s2+4!=p4){
        p2=s2+4;
    }
}

if(C3[0]==1){
    if(s3!=p1 && s3!=p2 && s3!=p3 && s3!=p4){
        p3=s3;
    }
}else if(C3[1]==1){
    if(s3+1!=p1 && s3+1!=p2 && s3+1!=p3 && s3+1!=p4){
        p3=s3+1;
    }
}else if(C3[2]==1){
    if(s3+2!=p1 && s3+2!=p2 && s3+2!=p3 && s3+2!=p4){
        p3=s3+2;
    }
}else if(C3[3]==1){
    if(s3+3!=p1 && s3+3!=p2 && s3+3!=p3 && s3+3!=p4){
        p3=s3+3;
    }
}else if(C3[4]==1){
    if(s3+4!=p1 && s3+4!=p2 && s3+4!=p3 && s3+4!=p4){
        p3=s3+4;
    }
}

if(C4[0]==1){
    if(s4!=p1 && s4!=p2 && s4!=p3 && s4!=p4){
        p4=s4;
    }
}else if(C4[1]==1){
    if(s4+1!=p1 && s4+1!=p2 && s4+1!=p3 && s4+1!=p4){
        p4=s4+1;
    }
}else if(C4[2]==1){
    if(s4+2!=p1 && s4+2!=p2 && s4+2!=p3 && s4+2!=p4){
        p4=s4+2;
    }
}else if(C4[3]==1){
    if(s4+3!=p1 && s4+3!=p2 && s4+3!=p3 && s4+3!=p4){
        p4=s4+3;
    }
}else if(C4[4]==1){
    if(s4+4!=p1 && s4+4!=p2 && s4+4!=p3 && s4+4!=p4){
        p4=s4+4;
    }
}
}else if(Type == 2 || Type == 4){
if(C1[0]==1){
        p0=s1;
}else if(C1[1]==1){
        p0=s1+1;
}else if(C1[2]==1){
        p0=s1+2;
}else if(C1[3]==1){
        p0=s1+3;
}else if(C1[4]==1){
        p0=s1+4;
}
}
}
system("CLS");
}
if(Type == 1){
int t=FindIDinTable(8,ID);
Colores[t].User_Col1=p1;
Colores[t].User_Col2=p2;
Colores[t].User_Col3=p3;
Colores[t].User_Col4=p4;
if(i1==1){
system("CLS");
LineOptionColor(2);
}
}else if(Type == 2){
    int t=FindIDinTable(8,ID);
Colores[t].User_BackGround_Color=p0+1;
if(i1==1){
system("CLS");
LineOptionColor(1);
}
}else if(Type == 3){
Col1=p1;
Col2=p2;
Col3=p3;
Col4=p4;
if(i1==1){
system("CLS");
LineOptionColor(4);
}
}else if(Type == 4){
BackGround_Color=p0+1;
if(i1==1){
system("CLS");
LineOptionColor(3);
}
}
}

void Blocking(){
CreateAcc(2);
}

void Deleting(){
Color(User_White_Color);
system("CLS");
int C = Two("USER_ACCOUNT","ACCOUNTS");
if(C == 1){
ADELPKER(20);
}else if(C == 2){
system("CLS");
CreateAcc(3);
}
}

void CreateUser(){
Color(White_Color);
   system("CLS");

    int i0=1,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,i9=0,i10=0,i11=0,i12=0,i13=0,i14=0,i15=0,i16=0;
    int ip2=0,ipp2=0,ip4=0,ipp4=0,ip6=0,ipp6=0,ip8=0,ipp8=0,ip9=0,ipp9=0,ip10=0,ipp10=0,ip12=0,ipp12=0,ip14=0,ipp14=0;
    int ip1=0,ip3=0,ip5=0,ip7=0,ip11=0,ip13=0;
    int ic2=0,ic4=0,ic6=0,ic8=0,ic9=0,ic10=0,ic12=0,ic14=0;
    int t,nint=0,lint=0,iint=0,aint=0,tint=0,dint=0,mint=0,yint=0,dmyint=0;
    int e=1;
    char iid[25],il[25];
     int Local_Age=0,Local_Time=0,Age; // This Variable Is Used In Checking The Legal Age To Register In This Bank
      Client C;// The T and C Struct  Variable Used To Scanning Values From The User
    time_t currentTime;// This Commands Is For The Real User Time
    time(&currentTime);
    struct tm *myTime = localtime(&currentTime);// The Two Last Commands Is Used To Create a New Pointer Struct Called myTime
   int Frstime=1;
   while(1){

   CreateUserMvmntCond(&i0,&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12,&i13,&i14,&i15,&i16);

   SignUp1Core(i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16);

   CreateUserTitels(Frstime,e,ip1,ip2,ip3,ip4,ip5,ip6,ip7,ip8,ip9,ip10,ip11,ip12,ip13,ip14,ic2,ic4,ic6,ic8,ic9,ic10,ic12,ic14);

   CreateUserExemplesPrinting(ip1,ip3,ip5,ip7,ip11,ip13);

   CreateUserCorrectPrinting(nint,lint,iint,dmyint,e,aint,tint,ip1,ip3,ip5,ip7,ip11,ip13,ic2,ic4,ic6,ic8,ic9,ic10,ic12,ic14);

   CreateUserFalsePrinting(C,myTime,&e,&dmyint,&Local_Age,&Local_Time,&Age,ic2,ic4,ic6,ic8,ic9,ic10,ic12,ic14,ip1,ip3,ip5,ip7,ip11,ip13);

   CreateUserInfoEnteredPrinting(C,ic2,ic4,ic6,ic8,ic9,ic10,ic12,ic14,ip2,ipp2,ip4,ipp4,ip6,ipp6,ip8,ipp8,ip9,ipp9,ip10,ipp10,ip12,ipp12,ip14,ipp14);


    if(ip2==1){
    gotoxy(46,5);
    if(ipp2==0){
    Color(Green_Color);
    gets(C.Nom);
    Color(White_Color);
    if((strlen(C.Nom)<3)||(strlen(C.Nom)>24)){
     if(strlen(C.Nom)>24){
        for(int i=24;i<=strlen(C.Nom);i++){
            C.Nom[i]=NULL;
        }
       }
    ic2=1;
    ip1=0;
    }else {
    ic2=0;
    }
    nint=1;
    ipp2=1;
    }else{
    if(ic2==1){
        Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%s",C.Nom);Color(White_Color);
    }
    }

    if(ip4==1){
    gotoxy(46,8);
    if(ipp4==0){
    Color(Green_Color);
    gets(C.Prenom);
    Color(White_Color);
    if((strlen(C.Prenom)<3)||(strlen(C.Prenom)>24)){
     if(strlen(C.Prenom)>24){
        for(int i=24;i<=strlen(C.Prenom);i++){
            C.Prenom[i]=NULL;
        }
       }
    ic4=1;
    ip3=0;
    }else {
    ic4=0;
    }
    lint=1;
    ipp4=1;
    }else{
    if(ic4==1){
    Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%s",C.Prenom);Color(White_Color);
    }
    }

    if(ip6==1){
    gotoxy(50,11);
    if(ipp6==0){
    Color(Green_Color);
    gets(iid);
    Color(White_Color);
    int k=0;
    for(int i=0;i<=strlen(iid)-1;i++){
        if((iid[i]>='0')&&(iid[i]<='9')){
            il[k]=iid[i];
            k++;
        }
    }
    if((k<3)||(k>9)){
     if(k>9){
        for(int i=9;i<strlen(il);i++){
            il[i]=NULL;
        }
       }
    ic6=1;
    ip5=0;
    }else {
    iint=1;
    ic6=0;
    }
    C.Id=atoi(il);
    if(FindIDinTable(1,C.Id)!=-1){
     ic6=1;
    }
    ipp6=1;
    }else{
    if(ic6==1){
        Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%d",C.Id);Color(White_Color);
    }
    }

    if(ip8==1){
    gotoxy(46,14);
    if(ipp8==0){
    Color(Green_Color);
    gets(iid);
    Color(White_Color);
    int k=0;
    for(int i=0;i<=strlen(iid)-1;i++){
        if((iid[i]>='0')&&(iid[i]<='9')){
            il[k]=iid[i];
            k++;
        }
    }
     if(k>2){
        for(int i=2;i<strlen(il);i++){
            il[i]=NULL;
        }
    ic8=1;
    ip7=0;
    }else {
    ic8=0;
    }
    C.Date_nais.Day=atoi(il);
    dint=1;
    ipp8=1;
    }else{
    if(ic8==1){
    Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%d",C.Date_nais.Day);Color(White_Color);
    }
    }

    if(ip9==1){
    gotoxy(54,14);
    if(ipp9==0){
    Color(Green_Color);
    gets(iid);
    Color(White_Color);
    int k=0;
    for(int i=0;i<=strlen(iid)-1;i++){
        if((iid[i]>='0')&&(iid[i]<='9')){
            il[k]=iid[i];
            k++;
        }
    }
    if(k>2){
        for(int i=2;i<strlen(il);i++){
            il[i]=NULL;
        }
    ic9=1;
    ip7=0;
    }else {
    ic9=0;
    }
    C.Date_nais.Month=atoi(il);
    mint=1;
    ipp9=1;
    }else{
    if(ic9==1){
    Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%d",C.Date_nais.Month);Color(White_Color);
    }
    }

    if(ip10==1){
    gotoxy(62,14);
    if(ipp10==0){
    Color(Green_Color);
    gets(iid);
    Color(White_Color);
    int k=0;
    for(int i=0;i<=strlen(iid)-1;i++){
        if((iid[i]>='0')&&(iid[i]<='9')){
            il[k]=iid[i];
            k++;
        }
    }
     if(k>4){
        for(int i=4;i<strlen(il);i++){
            il[i]=NULL;
        }
    ic10=1;
    ip7=0;
    }else {
    ic10=0;
    }
    C.Date_nais.Year=atoi(il);
    yint=1;
    ipp10=1;
    }else{
    if(ic10==1){
    Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%d",C.Date_nais.Year);Color(White_Color);
    }
    }

    if(ip12==1){
    gotoxy(46,17);
    if(ipp12==0){
    Color(Green_Color);
    gets(C.Adresse);
    Color(White_Color);
    if((strlen(C.Adresse)<3)||(strlen(C.Adresse)>24)){
     if(strlen(C.Adresse)>24){
        for(int i=24;i<=strlen(C.Adresse);i++){
            C.Adresse[i]=NULL;
        }
       }
    ic12=1;
    ip11=0;
    }else {
    ic12=0;
    }
    aint=1;
    ipp12=1;
    }else{
    if(ic12==1){
    Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%s",C.Adresse);Color(White_Color);
    }
    }

    if(ip14==1){
    gotoxy(50,20);
    if(ipp14==0){
    Color(Green_Color);
    gets(C.Tel);
    Color(White_Color);
    if((strlen(C.Tel)<3)||(strlen(C.Tel)>15)){
     if(strlen(C.Tel)>15){
        for(int i=15;i<=strlen(C.Tel);i++){
            C.Tel[i]=NULL;
        }
       }
    ic14=1;
    ip13=0;
    }else {
    ic14=0;
    }
    tint=1;
    ipp14=1;
    }else{
    if(ic14==1){
    Color(RedGround_Color);
    }else {
        Color(Green_Color);
    }
    printf("%s",C.Tel);Color(White_Color);
    }
    }





    if((_getch()==13)&&((i2==1)||(i4==1)||(i6==1)||(i8==1)||(i9==1)||(i10==1)||(i12==1)||(i14==1)||(i15==1)||(i16==1)||(i1==1)||(i3==1)||(i5==1)||(i7==1)||(i11==1)||(i13==1))){
    if(i2==1){
        ip2=1;
        ipp2=0;
    }else if(i4==1){
        ip4=1;
        ipp4=0;
    }else if(i6==1){
        ip6=1;
        ipp6=0;
    }else if(i8==1){
        ip8=1;
        ipp8=0;
    }else if(i9==1){
        ip9=1;
        ipp9=0;
    }else if(i10==1){
        ip10=1;
        ipp10=0;
    }else if(i12==1){
        ip12=1;
        ipp12=0;
    }else if(i14==1){
        ip14=1;
        ipp14=0;
    }else if(i1==1){
        if(ip1==1){
            ip1=0;
        }else{
        ip1=1;
        }
    }else if(i3==1){
        if(ip3==1){
            ip3=0;
        }else{
        ip3=1;
        }
    }else if(i5==1){
        if(ip5==1){
            ip5=0;
        }else{
        ip5=1;
        }
    }else if(i7==1){
        if(ip7==1){
            ip7=0;
        }else{
        ip7=1;
        }
    }else if(i11==1){
        if(ip11==1){
            ip11=0;
        }else{
        ip11=1;
        }
    }else if(i13==1){
        if(ip13==1){
            ip13=0;
        }else{
        ip13=1;
        }
    }


    if(((ipp2==1)&&(ic2==0))&&((ipp4==1)&&(ic4==0))&&((ipp6==1)&&(ic6==0))&&((ipp8==1)&&(ic8==0))&&((ipp9==1)&&(ic9==0))&&((ipp10==1)&&(ic10==0))&&((ipp12==1)&&(ic12==0))&&((ipp14==1)&&(ic14==0))&&(i16==1)){
     goto signex;
    }

    if(i15==1){
        goto signex1;
    }

    }
rtbk:
    system("CLS");
    for(int i=0;i<strlen(il);i++){
    il[i]=' ';
    }
    if((dint==1)&&(mint==1)&&(yint==1)){
        dmyint=1;
    }

    Frstime=0;



   }
signex:
  system("CLS");


User U;
    int ii1=1,ii2=0,ii3=0,ii4=0,ii5=0,ii6=0,ii22=0,ii33=0;
    int iip2=0,iipp2=0,iipp3=0,iip3=0,iip5=0;
  while(1){
    CreateUserMvmntCond1(&ii1,&ii2,&ii3,&ii4,&ii5,&ii6);
SignUp2Core(ii1,ii2,ii3,ii4,ii5,ii6,ii22,ii33);

   CreateUserTitels2(iip2,iip3,iip5);

   CreateUserFalsePrinting2(U,Users,ii22,ii33);

   CreateUsersInfoEnteredPrinting2(U,iip2,iipp2,ii22,iip3,iipp3,ii33,iip5);



   if((iip2==1)&&(iip5==0)){
    gotoxy(25,10);
    if(iipp2==0){
    gets(U.User_Name);
    if((strlen(U.User_Name)<3)||(strlen(U.User_Name)>15)){
     if(strlen(U.User_Name)>15){
        for(int i=15;i<=strlen(U.User_Name);i++){
            U.User_Name[i]=NULL;
        }
       }
    ii22=1;
    //iip2=0;
    }else {
    ii22=0;
    }
    iipp2=1;
    }else{
    if(ii22==1){
    Color(RedGround_Color);
    }
    printf("%s",U.User_Name);Color(White_Color);
    }
    }

    if((iip3==1)&&(iip5==0)){
    gotoxy(25,16);
    if(iipp3==0){
    gets(U.Password);
    if((strlen(U.Password)<3)||(strlen(U.Password)>15)){
     if(strlen(U.Password)>15){
        for(int i=15;i<=strlen(U.Password);i++){
            U.Password[i]=NULL;
        }
       }
    ii33=1;
    //iip2=0;
    }else {
    ii33=0;
    }
    iipp3=1;
    }else{
    if(ii33==1){
    Color(RedGround_Color);
    }
    printf("%s",U.Password);Color(White_Color);
    }
    }

    if(iip5==1){
    gotoxy(26,10);
    Color(LightBlue_Color);
    printf("User_%d",100000+rand()%1000000);Color(White_Color);
    gotoxy(28,16);
    Color(LightBlue_Color);
    printf("%d",100000+rand()%1000000);Color(White_Color);
    iip5=0;
   }


   if((_getch()==13)&&(ii1!=1)){
    if(ii2==1){
        iip2=1;
        iipp2=0;
    }
    if(ii3==1){
        iip3=1;
        iipp3=0;
    }
    if(ii4==1){
        goto sortie;
    }
    if(ii5==1){
        iip5=1;
    }
    if((ii6==1)&&(iipp2==1)&&(iipp3==1)&&(ii22==0)&&(ii33==0)){
        goto sortie;
    }

   }

   rebk:
   system("CLS");
  }


sortie:

   if(ii4==1){
    goto rtbk;
   }
   system("CLS");
int rtbk=0;
YesNo("ARE YOU SURE FROM YOUR INFORMATIONS",&rtbk,2);
if(rtbk==1){
    goto rebk;
}
system("CLS");


t=FindIDinTable(1,0);
   Clients[t].Id=C.Id;
   strcat(Clients[t].Nom,C.Nom);
   strcat(Clients[t].Prenom,C.Prenom);
   Clients[t].Date_nais.Day=C.Date_nais.Day;
   Clients[t].Date_nais.Month=C.Date_nais.Month;
   Clients[t].Date_nais.Year=C.Date_nais.Year;
   strcat(Clients[t].Adresse,C.Adresse);
   strcat(Clients[t].Tel,C.Tel);

t=FindIDinTable(3,0);
Users[t].User_ID=C.Id;
strcat(Users[t].User_Name,U.User_Name);
strcat(Users[t].Password,U.Password);

t=FindIDinTable(8,0);
Colores[t].Uid=C.Id;
Colores[t].User_BackGround_Color=1;
Colores[t].User_Col1=15;
Colores[t].User_Col2=14;
Colores[t].User_Col3=12;
Colores[t].User_Col4=10;

system("Pause");
signex1:
system("CLS");

CreateHisto(&FULLHistoHead,ID,'P','C',"ACCOUNT CREATED");
}

int Admin(int Type){

int i1=0,i2=1,i3=0,i4=0,i5=0,i6=0;
while(1){
while(1){

   AdminMvmntCond(&i1,&i2,&i3,&i4,&i5,&i6);
   Color(White_Color);
    system("CLS");
    AdminCore(Type,i1,i2,i3,i4,i5,i6);
    if(_getch()==13){
        break;
    }
    system("CLS");
 }
 system("CLS");
 if(Type == 1){
 if(i1==1){
while(1){
int E=ViewInfo(3);
if(E == 3){
    break;
}
}
 }else if(i2==1){
LineOptionColor(3);
BColor(BackGround_Color,1);
 }else  if(i3==1){
 ADELPKER(27);
 }else if(i4==1){
return 1;
 }else if(i5==1){
 int W = ADELPKER(24);
 if(W == 3){
    return 3;
 }else {
    return 0;
 }
 }else if(i6==1){
 int E=0;
 YesNo("Are You SureTo Exit The BBANK Program ??",&E,2);
 if(E != 1){
 return 3;
 }
 }
 }else{
 BColor(User_BackGround_Color,2);
 if(i1==1){
 while(1){
 int E = ViewInfo(1);
 if(E == 3){
    break;
 }
 }
 }else if(i2==1){
 LineOptionColor(1);
 BColor(User_BackGround_Color,2);
 }else  if(i3==1){
 EditAcc();
 }else if(i4==1){
 int W = Admin(1);
 if(W == 3){
    return 3;
 }else {
    return 1;
 }
 }else if(i5==1){
 int c=Two("BLOCK","DELETE");
 system("CLS");
 if(c==1){
    Blocking();
 }else if (c==2){
    Deleting();
 }
 }else if(i6==1){
 return 3;
 }
 }
 system("CLS");
 SaveinFiles();
}

}

void Message(int Uid){
Color(White_Color);
   system("CLS");
int i1=1,i2=0,i3=0,i4=0,i5=0,i6=0,ip1=0,ip2=0,ip3=0,ip4=0,ipp1=0,ipp2=0,ipp3=0,ipp4=0,c1=0,c2=0,c3=0,c4=0;
char N1[55]="",N2[55]="",N3[55]="",N4[55]="";
 while(1){

    MessageMvmntCond(&i1,&i2,&i3,&i4,&i5,&i6);

    MessageSendCore(i1,i2,i3,i4,i5,i6);


    if(ipp1==1){
    gotoxy(14,7);
    if(c1==1){
        Color(207);
    }
    printf("%s",N1);
    Color(15);
    }
    if(ipp2==1){
    gotoxy(14,10);
    if(c2==1){
        Color(207);
    }
    printf("%s",N2);
    Color(15);
    }
    if(ipp3==1){
    gotoxy(14,13);
    if(c3==1){
        Color(207);
    }
    printf("%s",N3);
    Color(15);
    }
    if(ipp4==1){
    gotoxy(14,16);
    if(c4==1){
        Color(207);
    }
    printf("%s",N4);
    Color(15);
    }


    if(ip1==1){
    gotoxy(14,7);
    gets(N1);
    ipp1=1;
    ip1=0;
    if(strlen(N1)>55){
        c1=1;
    }else{
        c1=0;
    }
    }else if(ip2==1){
    gotoxy(14,10);
    gets(N2);
    ipp2=1;
    ip2=0;
    if(strlen(N2)>55){
        c2=1;
    }else{
        c2=0;
    }
    }else if(ip3==1){
    gotoxy(14,13);
    gets(N3);
    ipp3=1;
    ip3=0;
    if(strlen(N3)>55){
        c3=1;
    }else{
        c3=0;
    }
    }else if(ip4==1){
    gotoxy(14,16);
    gets(N4);
    ipp4=1;
    ip4=0;
    if(strlen(N4)>55){
        c4=1;
    }else{
        c4=0;
    }
    }

    if(_getch()==13){
    if(i1==1){
        ip1=1;
        ipp1=0;
    }else if(i2==1){
        ip2=1;
        ipp2=0;
    }else if(i3==1){
        ip3=1;
        ipp3=0;
    }else if(i4==1){
        ip4=1;
        ipp4=0;
    }else if(i5 == 1  || (i6 == 1 && c1 == 0 && c2 == 0 && c3 == 0 && c4 == 0 && ((strlen(N1)+strlen(N2)+strlen(N3)+strlen(N4))>5 ))){
    break;
    }
    }
    system("CLS");
 }
int t = FindIDinTable(9,0);
Notes[t].USERID=Uid;
PutReallTimeInStruct(&Notes[t].Date);
strcpy(Notes[t].Note1,N1);
strcpy(Notes[t].Note2,N2);
strcpy(Notes[t].Note3,N3);
strcpy(Notes[t].Note4,N4);
}


