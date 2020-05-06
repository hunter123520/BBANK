

typedef struct date{
int Day,Month,Year;
}date;

typedef struct FullTime{
int hour,min,sec,Day,Month,Year;
}FullTime;

typedef struct b{
int res;
}b;

typedef struct Client{
int Id;
char Nom[30];
char Prenom[30];
date Date_nais;
char Adresse[255];
char Tel[255];

}Client;

typedef struct Compte{
 int Id_client;
 char Type_compte[20];
 FullTime create_time;
 int Solde;
 char Bloquer[50];
 }Compte;

typedef struct User{
char User_Name[255];
char Password[255];
int User_ID;
}User;

typedef struct Company{
int BOSSID;
char CompanyName[50];
int ClientsIDs[255];
}Company;

typedef struct Colors{
int Uid;
int User_BackGround_Color;
int User_Col1;
int User_Col2;
int User_Col3;
int User_Col4;
}Colors;

struct Historique{
int Uid;
char AccType;
FullTime OperationDate;
char OperationType;
char Note[255];
struct Historique *next;
struct Historique *back;
}Historique;

struct Money{
int Uid;
char AccType;
int mon;
FullTime Date;
struct Money *next;
struct Money *back;
}Money;

typedef struct NOTE{
int USERID;
char Note1[55],Note2[55],Note3[55],Note4[55];
FullTime Date;
}NOTE;

