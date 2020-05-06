#include <stdio.h>
#include <stdlib.h>

int Col1=15,Col2=14,Col3=12,Col4=10,Col5=11,Col6=9;
int BackGround_Color=1,Green_Color,Gold_Color,White_Color,Red_Color,LightBlue_Color,Blue_Color,RedGround_Color;
int User_Col1=15,User_Col2=14,User_Col3=12,User_Col4=10;
int User_BackGround_Color=1,User_Green_Color,User_Gold_Color,User_White_Color,User_Red_Color,User_RedGround_Color;


void gotoxy(int x,int y){ // This Function Uses To Change The Place That The Printing Point On It
    COORD c; // Here We Create A New COORD Called C
 c.X=x; //We Give The X Of The COORD C The Value X That The User Puts In The Parameter
 c.Y=y; //We Give The Y Of The COORD C The Value Y That The User Puts In The Parameter
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c); // This Function Is From The Windows.h Lib It Helps In The Screen Editing
}


void Color(int i){ // This Function Uses To Color The Screen And The Latters By A The Number Of The Color
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i); // This Function Is From The Windows.h Lib It Allow To Make Some Changes In The Window Like Coloring And So
}


void LineOfLines(int N){// This Function Prints '-' N times in the same line
for(int i=1;i<=N;i++){ // The Loop Starts From The Number 1 To The Number N That Entered Before
    printf("_");  // Here We Print The '-' Character
}
}

void Box(int Lstr,int str,int tall,int wdt){ // This Function Uses To Draw A Square Box In The Screen By Entering Its Tall And Width And The Position Of The Box
gotoxy(str,Lstr);// Here We Go To The Position That We Want
LineOfLines(tall);// We Print The Top Line Of The Box With The Tall That We Entered Before
gotoxy(str-1,Lstr+1);// Here We Go To The Position str-1 And The Line Lstr+1 < The Left Top Edge Of The Box
printf("/");// Here We Print The  Edge Of The Box
gotoxy(str+tall,Lstr+1);// Here We Go To The Right Top Edge Of The Box
printf("\\");// Here We Print The  Edge Of The Box
for(int i=1;i<=wdt;i++){// This Loop Starts From 1 To The Number wdt That Represent The Width Of The Box
    gotoxy(str-2,Lstr+1+i);// Here We Go Move On Lines By The Number i
    printf("|");// Here We Print The First Shape Line
    gotoxy(str+tall+1,Lstr+1+i);// Here We Go Move On Lines To The Second Edge By The Number i
    printf("|");// Here We Print The Second Shape Line
}
gotoxy(str-1,Lstr+wdt+2);// Here We Go To The Left Down Edge Of The Box
printf("\\");// Here We Print The Edge
gotoxy(str+tall,Lstr+wdt+2);// Here We Go To The Right Down Edge Of The Box
printf("/");// Here We Print The Edge
gotoxy(str,Lstr+wdt+2);// Here We Go The The Bottom Of The Box
LineOfLines(tall);// We Print The Bottom Line Of The Box
}

void CondBox(int Lstr,int str,int tall,int wdt,int Cond , int RedCol,int WhiCol){// This Function Help Us To Choose The Color Of The Box
if(Cond == 1){ // If The Condition Number Equal To 1 So The Box Will Be Colored
    Color(RedCol);// Here We Color The BOx By The Color That We Entered
}
Box(Lstr,str,tall,wdt);// Here We Print The Box
Color(WhiCol);// Here We Return The Default Color Of The Program < We Enter It >
}

void Amod(int Lstr,int str,int tall,int wdt){// This Function Used To PRint Columns On The Money Diagram Function
gotoxy(str-2,Lstr-wdt);// Here We Go To The TTop Of The Column
LineOfLines(tall+4);// We Print A Line By The Tall Of It
gotoxy(str-2,Lstr+1);// Here We Move One Line Down
printf("|");// We Print The Edge
gotoxy(str+tall+1,Lstr+1);// We Move To The Second Edge
printf("|");// Here We Print The Edge
for(int i=0;i<=wdt;i++){// This Loop Starts From The Number 0 To The Number wdt That Represents The Width
    gotoxy(str-2,Lstr+1-i);// Here We Move In The Lines Using The Number i
    printf("|");// Here We Print The Edge
    gotoxy(str+tall+1,Lstr+1-i);// Here We Go To The Right Edge Using The Number i
    printf("|");// Here We Print The Second Edge
}
gotoxy(str-2,Lstr+2);// Here We Go To The Bottom Of The Column
printf("|");// We Print The Edge
gotoxy(str+tall+1,Lstr+2);// Here We Go To  The Right Bottom Edge Of The Column
printf("|");// Here We PRint The Edge
gotoxy(str-1,Lstr+2);// Here we Go To The Bottom Of The Column
LineOfLines(tall+2);// Here We PRint The Line Of The Bottom Of The Column
}

void TheEditeCore(){// This Function Is For Print The Edit Options Menu
    Box(0,8,25,3); // Here We Print The Box Of The Title < Edit Choices >
    Box(5,18,37,11);// Here  We Print The Box Of The Choices
    gotoxy(33,5);// Here We Go To The Position 33 on The Line 5
    printf("/\\");// We Print That Shape For Some Decoration
    gotoxy(1,20);// We Go To The Position 1 In The Line 20
    Box(18,46,17,3);// Here We Print The Exit Box
    gotoxy(55,18);// Here We  Go To The Position 55 In The Line 18
    printf("/ \\");// We Print This Shape For Some Decoration
}

void TheChooseCore(int i0,int i1,int i2,int i3,int i4){ /*This Function Prints The Account Type Choosing Core */

CondBox(0,6,20,3,i0,User_Red_Color,User_White_Color);// Here We Print The Box Of The Title Of The Core Coloring With The Variable  i0

CondBox(11,21,29,3,i3,User_Red_Color,User_White_Color);// Here We Print The Box Of The Commercial Choice Before The Other For Some ProblemsColoring With The Variable  i3

CondBox(6,10,25,3,i1,User_Red_Color,User_White_Color);// Here We Print The Box Of The Personal Choice Coloring With The Variable  i1

CondBox(6,38,25,3,i2,User_Red_Color,User_White_Color);// Here We Print The Box Of The Minor Choice Coloring With The Variable  i2

CondBox(16,26,19,3,i4,User_Red_Color,User_White_Color);// Here We Print The Box Of The Exit ChoiceColoring With The Variable  i4
// Here We Make Some Conditions And Printing For Some Decorations Problems
if(i1==1 || i2==1){
    Color(User_Red_Color);
}
gotoxy(36,7);
printf("_");

gotoxy(36,11);
printf("-");

Color(User_White_Color);

if(i3==1){
    Color(User_Red_Color);
}
gotoxy(35,12);
printf("\\_/");
Color(User_White_Color);

if(i1==1 ||  i2 == 1){
    Color(User_Red_Color);
    for(int i=0;i<3;i++){
       gotoxy(36,8+i);
       printf("|");
    }
    Color(User_White_Color);
}else if(i3 == 1){
    Color(User_Red_Color);
    gotoxy(21,11);
    LineOfLines(14);
    gotoxy(38,11);
    LineOfLines(12);
    gotoxy(25,16);
    LineOfLines(20);
    Color(User_White_Color);
}

}

void StartCore(int i1,int i2,int i3,int i4,int i5,int i6){

    CondBox(0,21,15,3,i1,Red_Color,White_Color);

    CondBox(0,41,15,3,i2,Red_Color,White_Color);

    CondBox(0,61,15,3,i3,Red_Color,White_Color);

    CondBox(6,3,15,3,i4,Red_Color,White_Color);

    CondBox(12,3,15,3,i5,Red_Color,White_Color);

    CondBox(18,3,15,3,i6,Red_Color,White_Color);

    Box(6,24,50,15);

}

void SignUp1Core(int i0,int i1,int i2,int i3,int i4,int i5,int i6,int i7,int i8,int i9,int i10,int i11,int i12,int i13,int i14,int i15,int i16){
 CondBox(3,7,35,1,i1,Red_Color,White_Color);

CondBox(0,3,16,1,i0,Red_Color,White_Color);

CondBox(3,44,25,1,i2,Red_Color,White_Color);

CondBox(6,7,35,1,i3,Red_Color,White_Color);

CondBox(6,44,25,1,i4,Red_Color,White_Color);

CondBox(9,7,35,1,i5,Red_Color,White_Color);

CondBox(9,44,25,1,i6,Red_Color,White_Color);

CondBox(12,7,35,1,i7,Red_Color,White_Color);

CondBox(12,44,25,1,0,Red_Color,White_Color);
CondBox(12,44,6,1,i8,Red_Color,White_Color);
CondBox(12,52,6,1,i9,Red_Color,White_Color);
CondBox(12,60,9,1,i10,Red_Color,White_Color);

CondBox(15,7,35,1,i11,Red_Color,White_Color);

CondBox(15,44,25,1,i12,Red_Color,White_Color);

CondBox(18,7,35,1,i13,Red_Color,White_Color);

CondBox(18,44,25,1,i14,Red_Color,White_Color);

CondBox(21,16,14,1,i15,Red_Color,White_Color);

CondBox(21,51,14,1,i16,Red_Color,White_Color);

CondBox(12,44,6,1,i8,Red_Color,White_Color);
CondBox(12,52,6,1,i9,Red_Color,White_Color);
CondBox(12,60,9,1,i10,Red_Color,White_Color);
Color(Red_Color);
if(i1 == 1){
    gotoxy(7,3);
    LineOfLines(12);
    gotoxy(42,5);
    printf("|");
    gotoxy(7,6);
    LineOfLines(35);
}else if(i2 == 1){
    gotoxy(43,5);
    printf("|");
    gotoxy(44,6);
    LineOfLines(25);
}else  if(i3 == 1){
    gotoxy(42,8);
    printf("|");
    gotoxy(7,9);
    LineOfLines(35);
}else if(i4 == 1){
    gotoxy(43,8);
    printf("|");
    gotoxy(44,9);
    LineOfLines(25);
}else  if(i5 == 1){
    gotoxy(42,11);
    printf("|");
    gotoxy(7,12);
    LineOfLines(35);
}else if(i6 == 1){
    gotoxy(43,11);
    printf("|");
    gotoxy(44,12);
    LineOfLines(25);
}else  if(i7 == 1){
    gotoxy(42,14);
    printf("|");
    gotoxy(7,15);
    LineOfLines(35);
}else if(i8 == 1){
    gotoxy(43,14);
    printf("|");
    gotoxy(50,14);
    printf("|");
}else if(i9 == 1){
    gotoxy(51,14);
    printf("|");
    gotoxy(58,14);
    printf("|");
}else if(i10 == 1){
    gotoxy(59,14);
    printf("|");
}else  if(i11 == 1){
    gotoxy(42,17);
    printf("|");
    gotoxy(7,18);
    LineOfLines(35);
}else if(i12 == 1){
    gotoxy(43,17);
    printf("|");
    gotoxy(44,15);
    LineOfLines(6);
    gotoxy(52,15);
    LineOfLines(6);
    gotoxy(60,15);
    LineOfLines(9);
    gotoxy(44,18);
    LineOfLines(25);
}else  if(i13 == 1){
    gotoxy(42,20);
    printf("|");
    gotoxy(7,21);
    LineOfLines(35);
}else if(i14 == 1){
    gotoxy(43,20);
    printf("|");
    gotoxy(44,21);
    LineOfLines(25);
}
Color(White_Color);
}

void SignUp2Core(int i1,int i2,int i3,int i4,int i5,int i6,int i22,int i33){

    CondBox(1,22,20,3,i1,Red_Color,White_Color);

    CondBox(7,15,35,3,i2,Red_Color,White_Color);
    if(i22==1){
    Box(8,54,20,1);
    }

    CondBox(13,15,35,3,i3,Red_Color,White_Color);
    if(i33==1){
    Box(14,54,20,1);
    }

    CondBox(19,8,15,3,i4,Red_Color,White_Color);

    CondBox(19,27,11,3,i5,Red_Color,White_Color);

    CondBox(19,42,15,3,i6,Red_Color,White_Color);
}

void YseNoCore(int Type,int i1,int i2,int i3){
   int R=0,W=0;
    if(Type == 1 ){
    R=User_Red_Color;
    W=User_White_Color;
    }else{
    R=Red_Color;
    W=White_Color;
    }
   CondBox(5,15,45,3,i1,R,W);

   CondBox(11,19,15,3,i2,R,W);

   CondBox(11,42,15,3,i3,R,W);
}

void LoginChooseCore(int i0,int i1,int i2,int i3,int i4,int i5,int i6,int i7,int i8,int i9){

    CondBox(0,2,15,3,i0,User_Red_Color,User_White_Color);

    CondBox(0,22,15,3,i1,User_Red_Color,User_White_Color);

    CondBox(0,42,15,3,i2,User_Red_Color,User_White_Color);

    CondBox(6,2,15,3,i3,User_Red_Color,User_White_Color);

    CondBox(12,2,15,3,i4,User_Red_Color,User_White_Color);

    CondBox(18,2,15,3,i5,User_Red_Color,User_White_Color);

    CondBox(6,63,15,3,i6,User_Red_Color,User_White_Color);

    CondBox(12,63,15,3,i7,User_Red_Color,User_White_Color);

    CondBox(18,63,15,3,i8,User_Red_Color,User_White_Color);

    Color(User_Red_Color);
    Box(6,22,36,15);

    if(i0==1){
        gotoxy(17,6);
        printf("\\   \\");
       gotoxy(17,5);
       printf("  \\");
       gotoxy(18,7);
       printf(" \\");
       gotoxy(21,7);
       printf(" ");
    }

    if(i1==1){
        gotoxy(29,5);
    printf(". .");
        gotoxy(29,6);
        printf("| |");
    }

    if(i2==1){
        gotoxy(48,5);
       printf(". .");
        gotoxy(48,6);
        printf("| |");
    }

    if(i3==1){
        gotoxy(18,9);
       printf(" ");
        gotoxy(19,8);
        printf("_");
        gotoxy(19,9);
        printf("_");
        gotoxy(20,9);
        printf(" ");
    }

    if(i4==1){
        gotoxy(18,9+6);
       printf(" ");
        gotoxy(19,8+6);
        printf("_");
        gotoxy(19,9+6);
        printf("_");
        gotoxy(20,9+6);
        printf(" ");
    }

    if(i5==1){
        gotoxy(18,9+12);
       printf(" ");
        gotoxy(19,8+12);
        printf("_");
        gotoxy(19,9+12);
        printf("_");
        gotoxy(20,9+12);
        printf(" ");
    }

    if(i6==1){
        gotoxy(18+41,9);
       printf(" ");
        gotoxy(19+41,8);
        printf("_");
        gotoxy(19+41,9);
        printf("_");
        gotoxy(20+41,9);
        printf(" ");
    }

    if(i7==1){
        gotoxy(18+41,9+6);
       printf(" ");
        gotoxy(19+41,8+6);
        printf("_");
        gotoxy(19+41,9+6);
        printf("_");
        gotoxy(20+41,9+6);
        printf(" ");
    }

    if(i8==1){
        gotoxy(18+41,9+12);
       printf(" ");
        gotoxy(19+41,8+12);
        printf("_");
        gotoxy(19+41,9+12);
        printf("_");
        gotoxy(20+41,9+12);
        printf(" ");
    }

    if(i9==1){
        gotoxy(17+41,6);
        printf("/  _/");
       gotoxy(17+41,5);
       printf(" _/");
       gotoxy(18+41,7);
       printf(" /");
       gotoxy(21+37,7);
       printf(" ");
       gotoxy(59,1);
       printf("\\");
       gotoxy(60,2);
       printf("|");
       gotoxy(60,3);
       printf("|");
       gotoxy(60,4);
       printf("|");
       gotoxy(63,5);
       LineOfLines(15);
       gotoxy(63+15,6);
       printf("\\");
    }
   Color(User_White_Color);
}

void InformationCore(int Type,int i1,int i2,int i3,int i4,int i5,int i6,int i7,int i8){
    int R=0,W=0;
    if(Type == 1 || Type == 2){
    R=User_Red_Color;
    W=User_White_Color;
    }else{
    R=Red_Color;
    W=White_Color;
    }

    CondBox(0,30,20,3,i1,R,W);

    CondBox(6,15,20,3,i2,R,W);

    CondBox(6,45,20,3,i3,R,W);

    CondBox(12,10,20,3,i4,R,W);

    CondBox(12,50,20,3,i5,R,W);

    CondBox(18,15,15,3,i6,R,W);

    CondBox(18,35,10,3,i7,R,W);

    CondBox(18,50,15,3,i8,R,W);
}

void CHistory(int Type,int i1,int i2,int i3,int i4,int i5,int i6,int i7){
    int R=0,W=0;
    if(Type == 1 || Type == 2){
    R=User_Red_Color;
    W=User_White_Color;
    }else{
    R=Red_Color;
    W=White_Color;
    }
Box(3,4,35,19);
     gotoxy(0,4);
     printf("/\\");
     gotoxy(0,24);
     printf("\\/");
    Box(-1,2,15,1);


     Box(3,42,30,3);
     Box(0,47,20,1);
     Box(8,42,30,3);
     Box(13,42,30,8);


     CondBox(3,4,35,1,i1,R,W);

     CondBox(6,4,35,1,i2,R,W);

     CondBox(9,4,35,1,i3,R,W);

     CondBox(12,4,35,1,i4,R,W);

     CondBox(15,4,35,1,i5,R,W);

     CondBox(18,4,35,1,i6,R,W);

     CondBox(21,4,35,1,i7,R,W);


        Color(R);
        if(i1==1){
        gotoxy(4,6);
        }else if(i2==1){
        gotoxy(4,9);
        }else if(i3==1){
        gotoxy(4,12);
        }else if(i4==1){
        gotoxy(4,15);
        }else if(i5==1){
        gotoxy(4,18);
        }else if(i6==1){
        gotoxy(4,21);
        }else if(i7==1){
        gotoxy(4,24);
        }
        LineOfLines(35);
        Color(W);


        CondBox(3,4,1,1,i1,R,W);

        CondBox(6,4,1,1,i2,R,W);

        CondBox(9,4,1,1,i3,R,W);

        CondBox(12,4,1,1,i4,R,W);

        CondBox(15,4,1,1,i5,R,W);

        CondBox(18,4,1,1,i6,R,W);

        CondBox(21,4,1,1,i7,R,W);

        if(i1==1){
        gotoxy(4,6);
        }else if(i2==1){
        gotoxy(4,9);
        }else if(i3==1){
        gotoxy(4,12);
        }else if(i4==1){
        gotoxy(4,15);
        }else if(i5==1){
        gotoxy(4,18);
        }else if(i6==1){
        gotoxy(4,21);
        }else if(i7==1){
        gotoxy(4,24);
        }
        Color(R);
        printf("_");
        Color(W);


}

void WCore(int i1,int i2,int i3,int i4,int i5,int i6,int i7){
Box(3,4,35,19);
     gotoxy(0,4);
     printf("/\\");
     gotoxy(0,24);
     printf("\\/");
    Box(-1,2,15,1);


     Box(3,42,30,3);
     Box(0,47,20,1);
     Box(8,42,30,3);
     Box(13,42,30,8);


     CondBox(3,4,35,1,i1,User_Red_Color,User_White_Color);

     CondBox(6,4,35,1,i2,User_Red_Color,User_White_Color);

     CondBox(9,4,35,1,i3,User_Red_Color,User_White_Color);

     CondBox(12,4,35,1,i4,User_Red_Color,User_White_Color);

     CondBox(15,4,35,1,i5,User_Red_Color,User_White_Color);

     CondBox(18,4,35,1,i6,User_Red_Color,User_White_Color);

     CondBox(21,4,35,1,i7,User_Red_Color,User_White_Color);


        Color(User_Red_Color);
        if(i1==1){
        gotoxy(4,6);
        }else if(i2==1){
        gotoxy(4,9);
        }else if(i3==1){
        gotoxy(4,12);
        }else if(i4==1){
        gotoxy(4,15);
        }else if(i5==1){
        gotoxy(4,18);
        }else if(i6==1){
        gotoxy(4,21);
        }else if(i7==1){
        gotoxy(4,24);
        }
        LineOfLines(35);
        Color(User_White_Color);




}

void CompCore(int i1,int i2,int i3,int i4,int i5){

CondBox(5,5,20,5,i1,User_Red_Color,User_White_Color);

CondBox(13,10,20,5,i2,User_Red_Color,User_White_Color);

CondBox(5,55,20,5,i3,User_Red_Color,User_White_Color);

CondBox(13,50,20,5,i4,User_Red_Color,User_White_Color);

CondBox(13,35,10,5,i5,User_Red_Color,User_White_Color);
}

void MoneyCore(){
Box(2,8,62,18);
}

void StyleCore(){
Box(2,8,62,18);
}

void MinorCore(int Type1,int i1,int i2,int i3,int i4,int Type,int  d1,int d2,int d3){
    int R=0,W=0;
    if(Type1 < 24){
    R=User_Red_Color;
    W=User_White_Color;
    }else{
    R=Red_Color;
    W=White_Color;
    }
Box(2,8,62,18);

CondBox(10,25,30,1,i1,R,W);

CondBox(14,25,30,1,i2,R,W);

CondBox(18,22,15,1,i3,R,W);

CondBox(18,43,15,1,i4,R,W);
if(Type == 5){
        CondBox(10,25,8,1,d1,R,W);

        CondBox(10,35,8,1,d2,R,W);

        CondBox(10,45,10,1,d3,R,W);

        if(d1==1){
            Color(R);
            gotoxy(33,12);
            printf("|");
        }else if(d2==1){
          Color(R);
            gotoxy(34,12);
            printf("|");
            gotoxy(43,12);
            printf("|");
        }else if (d3==1){
            Color(R);
            gotoxy(44,12);
            printf("|");
        }
        Color(W);

    }
}

void TwoBoxes(int i1,int i2,int i3){

CondBox(8,15,20,3,i1,User_Red_Color,User_White_Color);

CondBox(8,40,20,3,i2,User_Red_Color,User_White_Color);

CondBox(14,28,18,3,i3,User_Red_Color,User_White_Color);
}

void SetCore(int Type,int i1,int i2,int i3,int i11,int i12,int i13,int i14,int i15,int i21,int i22,int i23,int i24,int i25,int i31,int i32,int i33,int i34,int i35,int i41,int i42,int i43,int i44,int i45){
    int R=0,W=0;
    if(Type == 1 || Type == 2){
    R=User_Red_Color;
    W=User_White_Color;
    }else{
    R=Red_Color;
    W=White_Color;
    }

CondBox(0,3,15,1,i1,R,W);

CondBox(0,60,15,1,i2,R,W);

CondBox(0,32,15,1,i3,R,W);

Box(8,5,15,13);
Box(8,23,15,13);
Box(8,41,15,13);
Box(8,59,15,13);

Box(4,2,15,1);
Box(4,21,15,1);
Box(4,43,15,1);
Box(4,62,15,1);

CondBox(8,5,15,1,i11,R,W);

CondBox(11,5,15,1,i12,R,W);

CondBox(14,5,15,1,i13,R,W);

CondBox(17,5,15,1,i14,R,W);

CondBox(20,5,15,1,i15,R,W);


CondBox(8,23,15,1,i21,R,W);

CondBox(11,23,15,1,i22,R,W);

CondBox(14,23,15,1,i23,R,W);

CondBox(17,23,15,1,i24,R,W);

CondBox(20,23,15,1,i25,R,W);


CondBox(8,41,15,1,i31,R,W);

CondBox(11,41,15,1,i32,R,W);

CondBox(14,41,15,1,i33,R,W);

CondBox(17,41,15,1,i34,R,W);

CondBox(20,41,15,1,i35,R,W);


CondBox(8,59,15,1,i41,R,W);

CondBox(11,59,15,1,i42,R,W);

CondBox(14,59,15,1,i43,R,W);

CondBox(17,59,15,1,i44,R,W);

CondBox(20,59,15,1,i45,R,W);

if(i11==1){
    Color(R);
    gotoxy(21,10);
    printf("|");
    gotoxy(5,11);
    LineOfLines(15);
Color(W);
}else if(i12==1){
    Color(R);
    gotoxy(21,13);
    printf("|");
    gotoxy(5,14);
    LineOfLines(15);
Color(W);
}else if(i13==1){
    Color(R);
    gotoxy(21,16);
    printf("|");
    gotoxy(5,17);
    LineOfLines(15);
Color(W);
}else if(i14==1){
    Color(R);
    gotoxy(21,19);
    printf("|");
    gotoxy(5,20);
    LineOfLines(15);
Color(W);
}else if(i15==1){
    Color(R);
    gotoxy(21,22);
    printf("|");
    gotoxy(5,23);
    LineOfLines(15);
Color(W);
}


if(i21==1){
    Color(R);
    gotoxy(21+18,10);
    printf("|");
    gotoxy(5+18,11);
    LineOfLines(15);
Color(W);
}else if(i22==1){
    Color(R);
    gotoxy(21+18,13);
    printf("|");
    gotoxy(5+18,14);
    LineOfLines(15);
Color(W);
}else if(i23==1){
    Color(R);
    gotoxy(21+18,16);
    printf("|");
    gotoxy(5+18,17);
    LineOfLines(15);
Color(W);
}else if(i24==1){
    Color(R);
    gotoxy(21+18,19);
    printf("|");
    gotoxy(5+18,20);
    LineOfLines(15);
Color(W);
}else if(i25==1){
    Color(R);
    gotoxy(21+18,22);
    printf("|");
    gotoxy(5+18,23);
    LineOfLines(15);
Color(W);
}

if(i31==1){
    Color(R);
    gotoxy(21+18+18,10);
    printf("|");
    gotoxy(5+18+18,11);
    LineOfLines(15);
Color(W);
}else if(i32==1){
    Color(R);
    gotoxy(21+18+18,13);
    printf("|");
    gotoxy(5+18+18,14);
    LineOfLines(15);
Color(W);
}else if(i33==1){
    Color(R);
    gotoxy(21+18+18,16);
    printf("|");
    gotoxy(5+18+18,17);
    LineOfLines(15);
Color(W);
}else if(i34==1){
    Color(R);
    gotoxy(21+18+18,19);
    printf("|");
    gotoxy(5+18+18,20);
    LineOfLines(15);
Color(W);
}else if(i35==1){
    Color(R);
    gotoxy(21+18+18,22);
    printf("|");
    gotoxy(5+18+18,23);
    LineOfLines(15);
Color(W);
}

if(i41==1){
    Color(R);
    gotoxy(21+18+18+18,10);
    printf("|");
    gotoxy(5+18+18+18,11);
    LineOfLines(15);
Color(W);
}else if(i42==1){
    Color(R);
    gotoxy(21+18+18+18,13);
    printf("|");
    gotoxy(5+18+18+18,14);
    LineOfLines(15);
Color(W);
}else if(i43==1){
    Color(R);
    gotoxy(21+18+18+18,16);
    printf("|");
    gotoxy(5+18+18+18,17);
    LineOfLines(15);
Color(W);
}else if(i44==1){
    Color(R);
    gotoxy(21+18+18+18,19);
    printf("|");
    gotoxy(5+18+18+18,20);
    LineOfLines(15);
Color(W);
}else if(i45==1){
    Color(R);
    gotoxy(21+18+18+18,22);
    printf("|");
    gotoxy(5+18+18+18,23);
    LineOfLines(15);
Color(W);
}

}

void AdminLogos(int Mode){
Color(Blue_Color);
gotoxy(8,4);
printf("     ,-""-.");
gotoxy(8,5);
printf("   / ,--. \\");
gotoxy(8,6);
printf("  | ( () ) |");
gotoxy(8,7);
printf("   \\ `--' /");
gotoxy(8,8);
printf("    `-..-' ");
gotoxy(7,11);
Color(White_Color);
printf("VIEW INFORMATIONS");
Color(Blue_Color);
gotoxy(33,3);
printf("    ___\n");
gotoxy(33,4);
	printf("   _| |_\n");
gotoxy(33,5);
	printf("___\\   /___\n");
gotoxy(33,6);
	printf("|__  o  __| \n");
gotoxy(33,7);
	printf("  /_   _\\\n");
gotoxy(33,8);
printf("    |_|\n");
gotoxy(35,11);
Color(White_Color);
printf("OPTIONS");

Color(Blue_Color);
gotoxy(53,4);
printf(".----.       .---.");
gotoxy(53,5);
printf("'---,  `.___.'  _  `.");
gotoxy(53,6);
printf("     )   ___   <_>  :");
gotoxy(53,7);
printf(".---'  .'   `.     .'");
gotoxy(53,8);
printf("`----'       `---'");
gotoxy(59,11);
Color(White_Color);
printf("MODEFY");

if(Mode == 1){
Color(Blue_Color);
gotoxy(7,16);
printf("  .--.");
gotoxy(7,17);
printf("/.-. '----------.");
gotoxy(7,18);
printf("\\'-' .--''--''-'-'");
gotoxy(7,19);
printf("  '--'");
gotoxy(12,22);
Color(White_Color);
printf("LOGOUT");
}else{

Color(Blue_Color);
    gotoxy(5,15);
    printf("               .");
    gotoxy(5,16);
    printf("   .. .........;;.");
    gotoxy(5,17);
    printf("    ..:::::::::;;;;.");
    gotoxy(5,18);
    printf("  . . :::::::::;;:'");
    gotoxy(5,19);
    printf("               :'");
    gotoxy(10,22);
    Color(White_Color);
    printf("CHANGE MODE");
}

if(Mode == 2){
    Color(Blue_Color);
    gotoxy(33,14);
    printf("     __");
    gotoxy(33,15);
    printf("    /  \\");
    gotoxy(33,16);
    printf("___/    \\___");
    gotoxy(33,17);
    printf("|    /\\    | ");
    gotoxy(33,18);
    printf("|   /__\\   |");
    gotoxy(33,19);
    printf(" \\________/");
    gotoxy(31,22);
    Color(White_Color);
    printf("DELETE AND BLOCK");
}else{
    Color(Blue_Color);
    gotoxy(28,15);
    printf("               .");
    gotoxy(28,16);
    printf("   .. .........;;.");
    gotoxy(28,17);
    printf("    ..:::::::::;;;;.");
    gotoxy(28,18);
    printf("  . . :::::::::;;:'");
    gotoxy(28,19);
    printf("               :'");
    gotoxy(33,22);
    Color(White_Color);
    printf("CHANGE MODE");

}

    Color(Blue_Color);
    gotoxy(55,14);
    printf("  ___________");
    gotoxy(55,15);
    printf(" / _         |");
    gotoxy(55,16);
    printf("|_| \\        |");
    gotoxy(55,17);
    printf("|_|  |       |");
    gotoxy(55,18);
    printf("| |_/        |");
    gotoxy(55,19);
    printf(" \\___________|");
    gotoxy(60,22);
    Color(White_Color);
    printf("EXIT");
}

void AdminCore(int i0,int i1,int i2,int i3,int i4,int i5,int i6){

CondBox(2,5,20,5,i1,Red_Color,White_Color);
CondBox(9,5,20,1,i1,Red_Color,White_Color);

CondBox(2,29,20,5,i2,Red_Color,White_Color);
CondBox(9,29,20,1,i2,Red_Color,White_Color);

CondBox(2,53,20,5,i3,Red_Color,White_Color);
CondBox(9,53,20,1,i3,Red_Color,White_Color);

CondBox(13,5,20,5,i4,Red_Color,White_Color);
CondBox(20,5,20,1,i4,Red_Color,White_Color);

CondBox(13,29,20,5,i5,Red_Color,White_Color);
CondBox(20,29,20,1,i5,Red_Color,White_Color);

CondBox(13,53,20,5,i6,Red_Color,White_Color);
CondBox(20,53,20,1,i6,Red_Color,White_Color);

AdminLogos(i0);
}

void INFORMATIONS(int Type){

if(Type != 3 && Type != 6){
Box(5,8,20,1);
Box(5,31,35,1);
}

Box(8,8,20,1);
Box(8,31,35,1);

Box(11,8,20,1);
Box(11,31,35,1);

Box(14,8,20,1);
Box(14,31,35,1);

if(Type != 3 && Type != 6){
Box(17,8,20,1);
Box(17,31,35,1);
}

if(Type == 1 || Type == 4){
Box(20,8,20,1);
Box(20,31,35,1);
}

if(Type == 1 || Type == 4){
 gotoxy(11,7);
    printf("THE FIRST NAME");
    gotoxy(11,10);
    printf("THE LAST NAME");
    gotoxy(13,13);
    printf("THE ID");
    gotoxy(11,16);
    printf("THE BIRTHDAY");
    gotoxy(11,19);
    printf("THE ADRESS");
    gotoxy(11,22);
    printf("THE PHONE");
}else if(Type == 2 || Type == 5){
    gotoxy(14,7);
    printf("THE ID");
    gotoxy(11,10);
    printf("THE ACCOUNT TYPE");
    gotoxy(11,13);
    printf("THE OPENING DATE");
    gotoxy(13,16);
    printf("THE SOLDE");
    gotoxy(14,19);
    printf("BLOCK");
}else if(Type == 3 || Type == 6){
    gotoxy(13,10);
    printf("THE ID");
    gotoxy(11,13);
    printf("THE USER_NAME");
    gotoxy(11,16);
    printf("THE PASSWORD");
}

}

void MessageSendCore(int i1,int i2,int i3,int i4,int i5,int i6){

StyleCore();

CondBox(5,10,58,1,i1,Red_Color,White_Color);

CondBox(8,10,58,1,i2,Red_Color,White_Color);

CondBox(11,10,58,1,i3,Red_Color,White_Color);

CondBox(14,10,58,1,i4,Red_Color,White_Color);

CondBox(18,15,20,1,i5,Red_Color,White_Color);

gotoxy(22,20);
printf("BACK");

CondBox(18,45,20,1,i6,Red_Color,White_Color);

gotoxy(52,20);
printf("SEND");

if(i1==1){
 Color(Red_Color);
 gotoxy(10,8);
 LineOfLines(58);
 Color(White_Color);
}else if(i2==1){
 Color(Red_Color);
 gotoxy(10,11);
 LineOfLines(58);
 Color(White_Color);
}else if(i3==1){
 Color(Red_Color);
 gotoxy(10,14);
 LineOfLines(58);
 Color(White_Color);
}else if(i4==1){
 Color(Red_Color);
 gotoxy(10,17);
 LineOfLines(58);
 Color(White_Color);
}
}

void PMessages(int Type){
// Type : 1 -> Admin
// Type : 2 -> user
StyleCore();
if(Type == 1){
Box(4,25,25,1);
}
Box(8,10,58,1);
Box(11,10,58,1);
Box(14,10,58,1);
Box(17,10,58,1);
}



