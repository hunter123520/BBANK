#include <stdio.h>
#include <stdlib.h>

float delay (float sec){ // This Function Used To Delay The Instructions Time
   float mmsec = sec*1000; // Here We Create A Float mmsec That is The Multiplication Of Sec With 1000
   clock_t start = clock(); // Here We Create A Clock Variable Called Start And We Make Sure It Gets The Value Of The Function Clock()
   while(clock()<start +mmsec); //Here The Function Will Repeat As Time As We Enter In The Parameter
   return 0;
}

void delayingAffichage(char c[255],float speed){ // This Function Used To Delay Printing a character by a character
  for(int i=0;i<strlen(c);i++){ // Here The Loop Starts From The Number 0 To The Tall Of The Word That  Entered
    printf("%c",c[i]); // Here We Print One Character Every Time By The Number Of The Loop
    delay(speed); //Here We Used The Function Delay To Wait 0.1 Sec To The Next Print
  }
}

int ChifreCount(int x){// This Function Used To Count How Many Numbers In A Number
if(x==0){ // If The Numbers Are End We Enter Here
    return 0; // We  Return The 0 So We Stop Calling The Function Again
}
return (1+ChifreCount(x/10)); // We Recall The Function Again To Do The Same Work And Every Time We Make +1 To The Number That Returns
}

void STARTING(){
for(int i=60;i>=45;i--){
system("CLS");
gotoxy(i,5);
printf("     .--------.");
gotoxy(i,6);
printf("    / .------. \\");
gotoxy(i,7);
printf("   / /        \\ \\");
gotoxy(i,8);
printf("   | |        | |");
gotoxy(i,9);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("________");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("_");
Color(White_Color);
gotoxy(i,10);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|        |_| ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(i,11);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(i,12);
printf("|     .'____'.     |");
gotoxy(i,13);
printf("'.__.'.'    '.'.__.'");
gotoxy(i,14);
printf("'.__  |      |  __.'");
gotoxy(i,15);
printf("|   '.'.____.'.'   |");
gotoxy(i,16);
printf("'.____'.____.'____.'");
gotoxy(i,17);
printf("'.________________.'");
Color(White_Color);
Beep(4186.0,100);
//delay(0.1);

}

for(int i=1;i<=25;i++){
system("CLS");
gotoxy(45,5);
printf("     .--------.");
gotoxy(45,6);
printf("    / .------. \\");
gotoxy(45,7);
printf("   / /        \\ \\");
gotoxy(45,8);
printf("   | |        | |");
gotoxy(45,9);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("________");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("_");
Color(White_Color);
gotoxy(45,10);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|        |_| ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(45,11);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(45,12);
printf("|     .'____'.     |");
gotoxy(45,13);
printf("'.__.'.'    '.'.__.'");
gotoxy(45,14);
printf("'.__  |      |  __.'");
gotoxy(45,15);
printf("|   '.'.____.'.'   |");
gotoxy(45,16);
printf("'.____'.____.'____.'");
gotoxy(45,17);
printf("'.________________.'");
Color(LightBlue_Color);
gotoxy(i,10);
printf(" /%c%c %c%c %c%c %c%c %c%c\n",201,187,201,187,201,187,201,187,201,187);
gotoxy(i,11);
printf("| %c%c %c%c %c%c %c%c  |\n",200,188,200,188,200,188,200,188);
gotoxy(i,12);
printf("| :: :: :: ::  |%c%c %c%c\n",201,187,201,187);
gotoxy(i,13);
printf("| /\\ :: :: ::  |    |");
Color(Green_Color);
printf("/ \\ / \\ / \\");
Color(LightBlue_Color);
gotoxy(i,14);
printf("||  |:: :: ::  |");
Color(Green_Color);
printf("                |");
Color(LightBlue_Color);
gotoxy(i,15);
printf("| \\/ :: :: ::  |    |");
Color(Green_Color);
printf("\\ / \\ / \\ /");
Color(LightBlue_Color);
gotoxy(i,16);
printf("| :: :: :: ::  |%c%c %c%c\n",200,188,200,188);
gotoxy(i,17);
printf("| %c%c %c%c %c%c %c%c  |\n",201,187,201,187,201,187,201,187);
gotoxy(i,18);
printf(" \\%c%c %c%c %c%c %c%c %c%c\n",200,188,200,188,200,188,200,188,200,188);
Color(White_Color);
Beep(2093.0,100);
//delay(0.1);
}

delay(0.7);
Beep(3520.0,100);
   Beep(3729.3,100);
   Beep(2960.0,100);
system("CLS");

gotoxy(45,5);
printf("     .--------.");
gotoxy(45,6);
printf("    / .------. \\");
gotoxy(45,7);
printf("   / /        \\ \\");
gotoxy(45,8);
printf("   | |        | |");
gotoxy(45,9);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("________");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("_");
Color(White_Color);
gotoxy(45,10);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|        |_| ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(45,11);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(45,12);
printf("|     .'____'.     |");
gotoxy(45,13);
printf("'.__.'.'    '.'.__.'");
gotoxy(45,14);
printf("'.__  |      |  __.'");
gotoxy(45,15);
printf("|   '.'.____.'.'   |");
gotoxy(45,16);
printf("'.____'.____.'____.'");
gotoxy(45,17);
printf("'.________________.'");
Color(LightBlue_Color);
gotoxy(25,14);
printf("____________________");
Color(Green_Color);
printf("____________");
Color(White_Color);
gotoxy(25,15);
Color(LightBlue_Color);
printf("\\____________________");
Color(Green_Color);
printf("/\\__/\\_/\\_/");
Color(White_Color);

Color(Red_Color);
gotoxy(25,11);
printf("     .-----.");
gotoxy(25,12);
printf("    / .---. \\");
gotoxy(25,13);
printf("   / /     \\ \\");
gotoxy(28,14);
printf("|_|");
gotoxy(36,14);
printf("| |");
gotoxy(36,15);
printf("| |");
gotoxy(35,16);
printf("_| |_");
gotoxy(35,17);
printf("\\   /");
gotoxy(35,18);
printf(" \\ /");
gotoxy(35,19);
printf("  Y");
Color(White_Color);


delay(0.7);
Beep(3520.0,100);
   Beep(3729.3,100);
   Beep(2960.0,100);
system("CLS");

gotoxy(45,3);
printf("     .--------.");
gotoxy(45,4);
printf("    / .------. \\");
gotoxy(45,5);
printf("   / /        \\ \\");
gotoxy(45,6);
printf("   | |        | |");
gotoxy(45,7);
printf("   | |        |_|");
gotoxy(45,8);
printf("   | |           ");
gotoxy(45,9);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("____________");
Color(White_Color);
gotoxy(45,10);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|            ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(45,11);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(45,12);
printf("|     .'____'.     |");
gotoxy(45,13);
printf("'.__.'.'    '.'.__.'");
gotoxy(45,14);
printf("'.__  |      |  __.'");
gotoxy(45,15);
printf("|   '.'.____.'.'   |");
gotoxy(45,16);
printf("'.____'.____.'____.'");
gotoxy(45,17);
printf("'.________________.'");
Color(LightBlue_Color);


gotoxy(25,14);
printf("____________________");
Color(Green_Color);
printf("____________");
Color(White_Color);
gotoxy(25,15);
Color(LightBlue_Color);
printf("\\____________________");
Color(Green_Color);
printf("/\\__/\\_/\\_/");
Color(White_Color);

Color(Red_Color);
gotoxy(25,11);
printf("     .-----.");
gotoxy(25,12);
printf("    / .---. \\");
gotoxy(25,13);
printf("   / /     \\ \\");
gotoxy(28,14);
printf("|_|");
gotoxy(36,14);
printf("| |");
gotoxy(36,15);
printf("| |");
gotoxy(35,16);
printf("_| |_");
gotoxy(35,17);
printf("\\   /");
gotoxy(35,18);
printf(" \\ /");
gotoxy(35,19);
printf("  Y");
Color(White_Color);


gotoxy(3,3);
printf("              _");
gotoxy(3,4);
printf("             | | ");
gotoxy(3,5);
printf("__      _____| | ___ ___  _ __ ___   ___ ");
gotoxy(3,6);
printf("\\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\");
gotoxy(3,7);
printf(" \\ V  V /  __/ | (_| (_) | | | | | |  __/");
gotoxy(3,8);
printf("  \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|");



while(1){
    gotoxy(25,22);
    printf("PRESS ANY KEY TO CONTINUE");
    if(_kbhit()){
        break;
    }
    Beep(261,100);
    delay(0.9);
    gotoxy(25,22);
    printf("                          ");
    delay(1);
    if(_kbhit()){
        break;
    }
}
}

void EXITING(){
system("CLS");
gotoxy(45+3,3+3);
printf("     .--------.");
gotoxy(45+3,4+3);
printf("    / .------. \\");
gotoxy(45+3,5+3);
printf("   / /        \\ \\");
gotoxy(45+3,6+3);
printf("   | |        | |");
gotoxy(45+3,7+3);
printf("   | |        |_|");
gotoxy(45+3,8+3);
printf("   | |           ");
gotoxy(45+3,9+3);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("____________");
Color(White_Color);
gotoxy(45+3,10+3);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|            ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(45+3,11+3);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(45+3,12+3);
printf("|     .'____'.     |");
gotoxy(45+3,13+3);
printf("'.__.'.'    '.'.__.'");
gotoxy(45+3,14+3);
printf("'.__  |      |  __.'");
gotoxy(45+3,15+3);
printf("|   '.'.____.'.'   |");
gotoxy(45+3,16+3);
printf("'.____'.____.'____.'");
gotoxy(45+3,17+3);
printf("'.________________.'");
Color(LightBlue_Color);


gotoxy(25+3,14+3);
printf("____________________");
Color(Green_Color);
printf("____________");
Color(White_Color);
gotoxy(25+3,15+3);
Color(LightBlue_Color);
printf("\\____________________");
Color(Green_Color);
printf("/\\__/\\_/\\_/");
Color(White_Color);

delay(0.7);
Beep(2960.0,100);
Beep(3729.3,100);
Beep(3520.0,100);

system("CLS");


gotoxy(45+3,3+3);
printf("     .--------.");
gotoxy(45+3,4+3);
printf("    / .------. \\");
gotoxy(45+3,5+3);
printf("   / /        \\ \\");
gotoxy(45+3,6+3);
printf("   | |        | |");
gotoxy(45+3,7+3);
printf("   | |        |_|");
gotoxy(45+3,8+3);
printf("   | |           ");
gotoxy(45+3,9+3);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("____________");
Color(White_Color);
gotoxy(45+3,10+3);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|            ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(45+3,11+3);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(45+3,12+3);
printf("|     .'____'.     |");
gotoxy(45+3,13+3);
printf("'.__.'.'    '.'.__.'");
gotoxy(45+3,14+3);
printf("'.__  |      |  __.'");
gotoxy(45+3,15+3);
printf("|   '.'.____.'.'   |");
gotoxy(45+3,16+3);
printf("'.____'.____.'____.'");
gotoxy(45+3,17+3);
printf("'.________________.'");
Color(LightBlue_Color);



gotoxy(25+3,14+3);
printf("____________________");
Color(Green_Color);
printf("____________");
Color(White_Color);
gotoxy(25+3,15+3);
Color(LightBlue_Color);
printf("\\____________________");
Color(Green_Color);
printf("/\\__/\\_/\\_/");
Color(White_Color);


Color(Red_Color);
gotoxy(25+3,11+3);
printf("     .-----.");
gotoxy(25+3,12+3);
printf("    / .---. \\");
gotoxy(25+3,13+3);
printf("   / /     \\ \\");
gotoxy(36+3,14+3);
printf("|_|");
gotoxy(28+3,14+3);
printf("| |");
gotoxy(28+3,15+3);
printf("| |");
gotoxy(27+3,16+3);
printf("_| |_");
gotoxy(27+3,17+3);
printf("\\   /");
gotoxy(27+3,18+3);
printf(" \\ /");
gotoxy(27+3,19+3);
printf("  Y");
Color(White_Color);

delay(0.7);
Beep(2960.0,100);
Beep(3729.3,100);
Beep(3520.0,100);
system("CLS");

gotoxy(45+3,3+3);
printf("     .--------.");
gotoxy(45+3,4+3);
printf("    / .------. \\");
gotoxy(45+3,5+3);
printf("   / /        \\ \\");
gotoxy(45+3,6+3);
printf("   | |        | |");
gotoxy(45+3,7+3);
printf("   | |        |_|");
gotoxy(45+3,8+3);
printf("   | |           ");
gotoxy(45+3,9+3);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("____________");
Color(White_Color);
gotoxy(45+3,10+3);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|            ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(45+3,11+3);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(45+3,12+3);
printf("|     .'____'.     |");
gotoxy(45+3,13+3);
printf("'.__.'.'    '.'.__.'");
gotoxy(45+3,14+3);
printf("'.__  |      |  __.'");
gotoxy(45+3,15+3);
printf("|   '.'.____.'.'   |");
gotoxy(45+3,16+3);
printf("'.____'.____.'____.'");
gotoxy(45+3,17+3);
printf("'.________________.'");
Color(LightBlue_Color);

Color(LightBlue_Color);
gotoxy(25+3,10+3);
printf(" /%c%c %c%c %c%c %c%c %c%c\n",201,187,201,187,201,187,201,187,201,187);
gotoxy(25+3,11+3);
printf("| %c%c %c%c %c%c %c%c  |\n",200,188,200,188,200,188,200,188);
gotoxy(25+3,12+3);
printf("| :: :: :: ::  |%c%c %c%c\n",201,187,201,187);
gotoxy(25+3,13+3);
printf("| /\\ :: :: ::  |    |");
Color(Green_Color);
printf("/ \\ / \\ / \\");
Color(LightBlue_Color);
gotoxy(25+3,14+3);
printf("||  |:: :: ::  |");
Color(Green_Color);
printf("                |");
Color(LightBlue_Color);
gotoxy(25+3,15+3);
printf("| \\/ :: :: ::  |    |");
Color(Green_Color);
printf("\\ / \\ / \\ /");
Color(LightBlue_Color);
gotoxy(25+3,16+3);
printf("| :: :: :: ::  |%c%c %c%c\n",200,188,200,188);
gotoxy(25+3,17+3);
printf("| %c%c %c%c %c%c %c%c  |\n",201,187,201,187,201,187,201,187);
gotoxy(25+3,18+3);
printf(" \\%c%c %c%c %c%c %c%c %c%c\n",200,188,200,188,200,188,200,188,200,188);
Color(White_Color);

delay(1);
system("CLS");


gotoxy(45+3,5+3);
printf("     .--------.");
gotoxy(45+3,6+3);
printf("    / .------. \\");
gotoxy(45+3,7+3);
printf("   / /        \\ \\");
gotoxy(45+3,8+3);
printf("   | |        | |");
gotoxy(45+3,9+3);
Color(Gold_Color);
printf("  _");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("________");
Color(White_Color);
printf("| |");
Color(Gold_Color);
printf("_");
Color(White_Color);
gotoxy(45+3,10+3);
Color(Gold_Color);
printf(".' ");
Color(White_Color);
printf("|_|        |_| ");
Color(Gold_Color);
printf("'.");
Color(White_Color);
gotoxy(45+3,11+3);
Color(Gold_Color);
printf("'._____ ____ _____.'");
gotoxy(45+3,12+3);
printf("|     .'____'.     |");
gotoxy(45+3,13+3);
printf("'.__.'.'    '.'.__.'");
gotoxy(45+3,14+3);
printf("'.__  |      |  __.'");
gotoxy(45+3,15+3);
printf("|   '.'.____.'.'   |");
gotoxy(45+3,16+3);
printf("'.____'.____.'____.'");
gotoxy(45+3,17+3);
printf("'.________________.'");

Color(LightBlue_Color);
gotoxy(25+3,10+3);
printf(" /%c%c %c%c %c%c %c%c %c%c\n",201,187,201,187,201,187,201,187,201,187);
gotoxy(25+3,11+3);
printf("| %c%c %c%c %c%c %c%c  |\n",200,188,200,188,200,188,200,188);
gotoxy(25+3,12+3);
printf("| :: :: :: ::  |%c%c %c%c\n",201,187,201,187);
gotoxy(25+3,13+3);
printf("| /\\ :: :: ::  |    |");
Color(Green_Color);
printf("/ \\ / \\ / \\");
Color(LightBlue_Color);
gotoxy(25+3,14+3);
printf("||  |:: :: ::  |");
Color(Green_Color);
printf("                |");
Color(LightBlue_Color);
gotoxy(25+3,15+3);
printf("| \\/ :: :: ::  |    |");
Color(Green_Color);
printf("\\ / \\ / \\ /");
Color(LightBlue_Color);
gotoxy(25+3,16+3);
printf("| :: :: :: ::  |%c%c %c%c\n",200,188,200,188);
gotoxy(25+3,17+3);
printf("| %c%c %c%c %c%c %c%c  |\n",201,187,201,187,201,187,201,187);
gotoxy(25+3,18+3);
printf(" \\%c%c %c%c %c%c %c%c %c%c\n",200,188,200,188,200,188,200,188,200,188);
Color(White_Color);

gotoxy(3,3);
printf(" _____                 _  ______");
gotoxy(3,4);
printf("|  __ \\               | | | ___ \\");
gotoxy(3,5);
printf("| |  \\/ ___   ___   __| | | |_/ /_   _  ___");
gotoxy(3,6);
printf("| | __ / _ \\ / _ \\ / _` | | ___ \\ | | |/ _ \\");
gotoxy(3,7);
printf("| |_\\ \\ (_) | (_) | (_| | | |_/ / |_| |  __/");
gotoxy(3,8);
printf(" \\____/\\___/ \\___/ \\__,_| \\____/ \\__, |\\___|");
gotoxy(3,9);
printf("                                  __/ |  ");
gotoxy(3,10);
printf("                                 |___/");
gotoxy(1,24);

Beep(987,200);
Beep(739,250);
Beep(369,300);

}

void StartMenuTitels(int i1,int i2,int i3,int i4,int i5,int i6,int ip){
gotoxy(6,3);
        Color(Gold_Color);
    printf("BBANK");
    Color(White_Color);
    if(i1==1){
        Color(RedGround_Color);
    }
      gotoxy(26,3);
    if(ip==0){
      delayingAffichage("LOGIN",0.02);Color(White_Color);
    }else{
    printf("LOGIN");Color(White_Color);
    }
    if(i2==1){
    Color(RedGround_Color);
    }
     gotoxy(45,3);
    if(ip==0){
      delayingAffichage("SIGN UP",0.02);Color(White_Color);
    }else{
    printf("SIGN UP");Color(White_Color);
    }
        if(i3==1){
        Color(RedGround_Color);
    }
     gotoxy(63,3);
    if(ip==0){
      delayingAffichage("THE LEADER",0.02);Color(White_Color);
    }else{
    printf("THE LEADER");Color(White_Color);
    }
        if(i4==1){
        Color(RedGround_Color);
    }
     gotoxy(8,9);
    if(ip==0){
      delayingAffichage("NEWS",0.02);Color(White_Color);
    }else{
    printf("NEWS");Color(White_Color);
    }
        if(i5==1){
        Color(RedGround_Color);
    }
     gotoxy(6,15);
    if(ip==0){
      delayingAffichage("SUPPORT",0.02);Color(White_Color);
    }else{
    printf("SUPPORT");Color(White_Color);
    }
        if(i6==1){
        Color(RedGround_Color);
    }
     gotoxy(8,21);
    if(ip==0){
      delayingAffichage("EXIT",0.02);Color(White_Color);
    }else{
    printf("EXIT");Color(White_Color);
    }
}

void StartMenuBBANKPrining(){
 gotoxy(35,9);
printf("HELLO IN THE BBANK PROGRAM");
gotoxy(28,11);
printf("This Program Was Developed To Include ");
gotoxy(30,13);
printf("Movement Using Arrows");
gotoxy(28,15);
printf("This Allows The Program To Be Easier");
gotoxy(30,17);
printf(" And More Fun To Use");
gotoxy(28,19);
printf("Have A Nice Day While Using The Program");
gotoxy(30,20);
printf("Thank You ...");

}

void StartMenuLoginPrining(){
gotoxy(29,9);
printf("To LOGIN To Your User Account Enter Your ");
gotoxy(34,10);
printf("User_Name And Your Password");
}

void StartMenuLoginUsPasEntering(int *i11,int *i12,int *i13,int *ip1,int *ip12,int *ipp1,int *ipp2,char c[255],char Pas[255]){
CondBox(12,32,34,1,*i11,Red_Color,White_Color);
     gotoxy(44,14);
     if(*i11==1){
     Color(RedGround_Color);
     }
     if(*ip1==0){
     printf("User_Name");
     }else if(*ipp1==0){
             Color(White_Color);
    CondBox(16,32,34,1,*i12,Red_Color,White_Color);
     gotoxy(43,18);
     if(*i12==1){
     Color(RedGround_Color);
     }
     if(*ip12==0){
     printf("User_Password");
     }else if(*ipp2==1){

    gotoxy(40,18);
          printf("%s",Pas);
          Color(White_Color);
     }
    gotoxy(45,22);
    printf("CONTINUE");
    Color(White_Color);
    Box(20,43,12,1);
    gotoxy(40,14);
    gets(c);
    *ipp1=1;
    *ip1=1;
     }else if(*ipp1==1){
     gotoxy(40,14);
     printf("%s",c);
     Color(White_Color);
     }
    Color(White_Color);
     if(*i12==1){
        Color(Red_Color);
    }
    Box(16,32,34,1);
    Color(White_Color);
    gotoxy(45,22);
    printf("CONTINUE");
    Color(White_Color);
    Box(20,43,12,1);
    if(*i12==1){
     Color(RedGround_Color);
     }
     if(*ip12==0){
    gotoxy(43,18);
     printf("User_Password");
     Color(White_Color);
    gotoxy(45,22);
    printf("CONTINUE");
    Color(White_Color);
    Box(20,43,12,1);
     }else if(*ipp2==0){
         Color(White_Color);
        gotoxy(40,18);
        gets(Pas);
    *ipp2=1;
    *ip12=1;
     }else if(*ipp2==1){
     gotoxy(40,18);
     printf("%s",Pas);
       Color(White_Color);
     }
    Color(White_Color);
    if((*ipp1==1)&&(*ip1!=1)){
     gotoxy(40,14);
      printf("%s",c);
     }
    if(*i13==1){
        Color(RedGround_Color);
     }
    gotoxy(45,22);
    printf("CONTINUE");
    Color(White_Color);
    CondBox(20,43,12,1,*i13,Red_Color,White_Color);
}

void StartMenuSignUpPrinting(int i22){
gotoxy(30,9);
printf("To Open A New User You Must First");
gotoxy(33,10);
printf("Be Over 8 Years Old .");
gotoxy(31,11);
printf("Then When Opening an User You Will Be ");
gotoxy(30,12);
printf("Responsible For All User Or Account ");
gotoxy(33,13);
printf("Operations");
gotoxy(50,22);
if(i22==1){
    Color(RedGround_Color);
}
printf("ACCEPT AND CONTINUE");
Color(White_Color);
}

void StartMenuAdminPrinting(int i33){
gotoxy(28,9);
printf("THIS Place Has Created For The Leader");
gotoxy(33,10);
printf("Or The ADMIN Of This Bank  ");
gotoxy(28,12);
printf("SO The Leader Can View Some Informations");
gotoxy(30,13);
printf("That Others Cant See  ");
gotoxy(28,15);
printf("To Login To The ADMIN Account You Need ");
gotoxy(30,16);
printf("To Enter The ADMIN Name And The ADMIN ");
gotoxy(35,17);
printf("Special Password Code  ");
gotoxy(28,19);
printf("IF YOu Enter A Wrong Informations For 5 Times ");
gotoxy(31,20);
printf("YOU WILL BE BANNED FROM THIS BANK");
gotoxy(50,22);
    if(i33==1){
        Color(RedGround_Color);
    }
printf("ACCEPT AND CONTINUE");Color(White_Color);
}

void StartMenuEventPrinting(){
gotoxy(26,9);
printf("This Version Released In : ");
gotoxy(28,10);
printf("1/5/2020 The 7th Day In Ramadan");
gotoxy(26,12);
printf("In This Version I Added : ");
gotoxy(28,14);
printf("_Ability To Change Colors ");
gotoxy(28,16);
printf("_Supporting The ADMIN Mode");
gotoxy(28,18);
printf("_Supporting Sending Messages");
gotoxy(28,20);
printf("_Starting And Exiting Animation");
gotoxy(28,22);
printf("_Ability To Delete Histories");
}

void StartMenuSuportPrinting(int i55){
gotoxy(28,9);
printf("You Have A Problem With The Bank Programme");
gotoxy(29,10);
printf("Or You Find A BUG Here Just Contact ");
gotoxy(28,11);
printf("The Creator At Email : ");
gotoxy(30,13);
printf("Phillipe.fernandez.2002@Gmail.com");
gotoxy(28,15);
printf("Or Facebook : ");
gotoxy(34,17);
printf("Missing Breath");
gotoxy(30,19);
printf("Or If You Have A Simple Problem ");
gotoxy(35,20);
printf("Send It To The ADMIN ");
gotoxy(58,22);
    if(i55==1){
        Color(RedGround_Color);
    }
printf(" Continue ");Color(White_Color);
}

void StartMenuExitPrinting(int i66){
gotoxy(38,9);
printf("Are You SURE You Want ");
gotoxy(34,10);
printf("To Leave The Bank Right Now ??");

CondBox(13,34,28,3,i66,Red_Color,White_Color);
gotoxy(45,16);
     if(i66==1){
        Color(RedGround_Color);
     }
printf("EXIT");Color(White_Color);
}


void UserLogTitels(int PriCr,int Minor,int Comerc){
gotoxy(2,3);
  if((PriCr==1 && Minor == -1)){
  printf("Create Account");
  }else if(Minor >= 0){
  printf("Upgrade Account");
  }else if(Comerc >= 0){
  printf("  My Company");
  }else {
  Color(User_Gold_Color);
  printf("    BBANK");
  Color(User_White_Color);
  }


  gotoxy(22,3);
  printf("Cash Operations");

  gotoxy(46,3);
  printf("LogOut");

  gotoxy(3,9);
  printf("Informations");

  gotoxy(5,15);
  printf("Modify");

  gotoxy(5,21);
  printf("Options");

  gotoxy(63,9);
  printf("Block Account");

  gotoxy(63,15);
  printf("Delete Account");

  gotoxy(68,21);
  printf("EXIT");
}

void UserLogCCBprinting(int PriCr,int Minor,int Comerc){
if((PriCr==1 && Minor == -1)){
    gotoxy(27,8);
    printf("When You Create an Account");
    gotoxy(25,9);
    printf("You Will Be Able To Make Money");
    gotoxy(26,10);
    printf("And Enter The Cash Operations");

    gotoxy(24,12);
    printf("If You Are 20 Years Old Or Bigger");
    gotoxy(25,13);
    printf("You Can Create A Personal And");
    gotoxy(23,14);
    printf("Commercial Account In The Same Time");

    gotoxy(23,16);
    printf("And If You Are Between 18 And 20");
    gotoxy(24,17);
    printf("You Can Create A Personal Account");


    gotoxy(25,19);
    printf("And So If You Are Less Then 18");
    gotoxy(23,20);
    printf("You Can Create Just A Minor Account");

    gotoxy(35,22);
    printf("Press OK To Continue");
  }else if(Minor >= 0){
   gotoxy(27,8);
    printf("When You Want To Get Your");
    gotoxy(25,9);
    printf("New Personal Account But Already");
    gotoxy(26,10);
    printf("You Have A Minor Account");

    gotoxy(24,12);
    printf("You Can Upgrade Your Account ");
    gotoxy(25,13);
    printf("But Your Age Must Be 18 Or More");
    gotoxy(23,14);
    printf("So If You Are Still  Less Then 18");

    gotoxy(23,16);
    printf("Am Sorry But You Still Cant Upgrade ");
    gotoxy(24,17);
    printf("Your Account And Any Time You Can");


    gotoxy(30,19);
    printf("Enter And View If You ");
    gotoxy(25,20);
    printf("Can Upgrade Your Account Or No");

    gotoxy(35,22);
    printf("Press OK To Continue");
  }else if(Comerc >= 0){
    gotoxy(27,8);
    printf("Now You Have Your Own Company");
    gotoxy(25,9);
    printf("Their Is  A Lot Of Things You Can ");
    gotoxy(30,10);
    printf("Do In This  Option Now ");

    gotoxy(27,12);
    printf("You Can Have Your Own Workers");
    gotoxy(30,13);
    printf("You Can Make Your Own");
    gotoxy(25,14);
    printf("Company Cash Operations For Sure");

    gotoxy(23,16);
    printf("And Viewing Informations About Your");
    gotoxy(22,17);
    printf("Account And Your History And So Also");


    gotoxy(25,19);
    printf("If You Want Delete Your Company");
    gotoxy(25,20);
    printf("Just Go To The Deleting Option");

gotoxy(35,22);
printf("Press OK To Continue");
  }else {
    gotoxy(26,12);
    printf("We Hope You Have A Good Day");
    gotoxy(28,14);
    printf("Using The BBANK Program");
  }
}

void UserLogCashOpPrinting(int i11){

    gotoxy(25,10);
    printf("In The Cash Operations Option");
    gotoxy(26,11);
    printf("You Will Be Able To  : ");
    gotoxy(26,13);
    printf("Send Money / Saving Money ");

    gotoxy(27,14);
    printf("Withdrawing Your Money ");
    gotoxy(28,15);
    printf("And Other Properties");

    if(i11==1){
        Color(User_RedGround_Color);
    }
    gotoxy(35,20);
    printf("Press Here To Continue");
    Color(User_White_Color);

}

void UserLogLogoutPrinting(int i22){
 gotoxy(30,10);
    printf("Are You Sure ");
    gotoxy(26,11);
    printf("You Want To LogOut Right Now ??");


    Box(13,30,20,3);
    if(i22==1){
       Color(User_RedGround_Color);
    }
    gotoxy(37,16);
    printf("LOGOUT");Color(User_White_Color);

}

void UserLogViewInfoPrinting(int i33){
gotoxy(25,10);
    printf("Here You Will Be Able To View");
    gotoxy(26,11);
    printf("And Check All Informations");
    gotoxy(26,13);
    printf("That Your Account Contains");

    gotoxy(27,14);
    printf("From Your Informations");

    gotoxy(30,15);
    printf("To The History");
    if(i33==1){
       Color(User_RedGround_Color);
    }
    gotoxy(35,20);
    printf("Press Here To Continue");Color(User_White_Color);

}

void UserLogEditPrinting(int i44){
gotoxy(25,10);
    printf("This Is The Modifying Option");
    gotoxy(26,11);
    printf("Here You Can Modify And Edit ");
    gotoxy(27,12);
    printf("Some Of Your Informations");
    gotoxy(26,13);
    printf("Like The Name Or The Phone... ");
    gotoxy(24,15);
    printf("But First You Must Check Your ");
    gotoxy(26,16);
    printf("Informations In The Its Option");
    gotoxy(26,18);
    printf("And If You Find A Problem In It");
    gotoxy(25,19);
    printf("And You Want To Edit Or Modify It");

    if(i44==1){
        Color(User_RedGround_Color);
    }
    gotoxy(35,21);
    printf("Press Here To Continue");Color(User_White_Color);
}

void UserLogOptionPrinting(int i55){
gotoxy(25,10);
    printf("If Get Bored From The Program");
    gotoxy(24,11);
    printf("Style And You Want To Change It");
    gotoxy(25,12);
    printf("In This Option You Are Access");
    gotoxy(23,13);
    printf("To Change The Theme Of The Program");
    gotoxy(28,15);
    printf("Their Is A Lot Of Themes ");
    gotoxy(24,16);
    printf("To Use And If You Are High-ranking");
    gotoxy(28,18);
    printf("Account You Will Get ");
    gotoxy(29,19);
    printf("A Special Themes");

    if(i55==1){
        Color(User_RedGround_Color);
    }
    gotoxy(35,21);
    printf("Press Here To Continue");Color(User_White_Color);
}

void UserLogBlockPrinting(int i66){
gotoxy(22,10);
    printf("You Have A Problem In Your Account");
    gotoxy(28,11);
    printf("You Scared From Stolen ");
    gotoxy(28,12);
    printf("Or Something Like That ");
    gotoxy(26,13);
    printf("You Can Block Your Account ");
    gotoxy(22,14);
    printf("So No Cash Operations Will Move On ");
    gotoxy(25,15);
    printf("Your Account And Your Money");
    gotoxy(32,16);
    printf("Will Be Safe ");

    if(i66==1){
        Color(User_RedGround_Color);
    }
    gotoxy(35,21);
    printf("Press Here To Continue");Color(User_White_Color);
}

void UserLogDeletePrinting(int i77){
gotoxy(25,10);
    printf("You Get Bored From Our Bank ");
    gotoxy(23,11);
    printf("Or You Want To Delete Your Account");
    gotoxy(25,12);
    printf("And You Want To Delete Your ");
    gotoxy(26,13);
    printf("Account Or Your User Account");
    gotoxy(32,14);
    printf("Totally");
    gotoxy(22,16);
    printf("But If You Delete Any Thing You Will");
    gotoxy(22,17);
    printf("Never Recover Your Informations Back");
    gotoxy(30,18);
    printf("So Be CARFULL");

    if(i77==1){
        Color(User_RedGround_Color);
    }
    gotoxy(35,21);
    printf("Press Here To Continue");Color(User_White_Color);
}

void UserLogExitPrinting(int i88){
gotoxy(25,10);
    printf("Are You Sure You Want To Exit");
    gotoxy(28,11);
    printf("The BBANK Program ??");

    Box(13,30,20,3);
    if(i88==1){
       Color(User_RedGround_Color);
    }
    gotoxy(38,16);
    printf("EXIT");Color(User_White_Color);
}

void UserLogCompBlockedPrinting(){
StyleCore();
 gotoxy(26,10);
 printf("YOUR COMPANY IS BLOCKED ");
 gotoxy(20,12);
 printf("YOU CANT USE ANY OF THE OPTIONS ON IT");
 gotoxy(21,14);
 printf("RETURN BACK WHEN YOU REMOVE THE BLOCK ");
 gotoxy(28,16);
 printf("FROM YOUR COMPANY");
 gotoxy(25,19);
 Color(User_Red_Color);
 printf("PRESS ANY KEY TO CONTINUE");
 Color(User_White_Color);
 _getch();
}


void CreateAccTiteles(int i0,int i1,int i2,int i3,int i4,int ip){
gotoxy(8,3);
   if(i0==1){
    Color(User_RedGround_Color);
   }
   if(ip==1){
   delayingAffichage("ACCOUNT TYPE : ",0.02);
   }else {
   printf("ACCOUNT TYPE : ");
   }
       Color(User_White_Color);
   gotoxy(15,9);//We Use The Gotoxy Here To Print The Strings In The Correct Place
     if(i1==1){
    Color(User_RedGround_Color);
   }
   if(ip==1){
    delayingAffichage("1. Particular",0.02);
    }else {
   printf("1. Particular");
   }
        Color(User_White_Color);
   gotoxy(45,9);
        if(i2==1){
    Color(User_RedGround_Color);
   }
   if(ip==1){
    delayingAffichage("2. Minor",0.02);
    }else {
   printf("2. Minor");
   }
        Color(User_White_Color);
   gotoxy(28,14);
           if(i3==1){
    Color(User_RedGround_Color);
   }
   if(ip==1){
   delayingAffichage("3. Commercial",0.02);
    }else {
   printf("3. Commercial");
   }
           Color(User_White_Color);
    gotoxy(33,19);
           if(i4==1){
    Color(User_RedGround_Color);
   }
   if(ip==1){
   delayingAffichage("EXIT",0.02);
    }else {
   printf("EXIT");
   }
    Color(User_White_Color);
}

void CreateAccCongForPersPrinting(){
StyleCore();
    Color(User_Gold_Color);
    gotoxy(23,10);
    printf("CONGRATULATIONS YOU HAVE SUCCUFULLY");
    gotoxy(25,12);
    printf("CREATE YOUR PERSIONAL ACCOUNT");
    gotoxy(27,15);
Color(User_Red_Color);
    printf("PRESS ANY KEY TO CONTINUE");
Color(User_White_Color);
    _getch();
}

void CreateAccDadMinorPrinting(){
gotoxy(26,7);
    printf("TO CREATE YOUR MINOR ACCOUNT");
    gotoxy(22,9);
    printf("YOU MUST ENTER YOUR DAD's ID AND NAME");
    gotoxy(12,12);
    printf("DAD's ID ");
    gotoxy(10,16);
    printf("DAD's NAME ");
    gotoxy(27,20);
    printf("BACK");
    gotoxy(46,20);
    printf("CONTINUE");
}

void CreateAccCongForMinorPirting(){
StyleCore();
    Color(User_Gold_Color);
    gotoxy(23,10);
    printf("CONGRATULATIONS YOU HAVE SUCCUFULLY");
    gotoxy(25,12);
    printf("CREATE YOUR MINOR ACCOUNT");
    gotoxy(27,15);
Color(User_Red_Color);
    printf("PRESS ANY KEY TO CONTINUE");
Color(User_White_Color);
    _getch();
}

void CreateAccComercCondPrinting(){
gotoxy(22,5);
    printf("TO CREATE YOUR COMMERCIALL ACCOUNT");
    gotoxy(15,7);
    printf("YOU MUST ENTER YOUR COMPANY NAME AND HOW MUCH MONEY");
    gotoxy(22,8);
    printf("WOULD YOU START YOUR COMPANY WITH");
    gotoxy(25,9);
    printf("< MUST BE MORE THEN 200 $ >");
    gotoxy(10,12);
    printf("COMPANY NAME ");
    gotoxy(9,16);
    printf("STARTING SOLDE");
    gotoxy(27,20);
    printf("BACK");
    gotoxy(46,20);
    printf("CONTINUE");
}

void CreateAccCongForComecPrinting(){
StyleCore();
    Color(User_Gold_Color);
    gotoxy(23,10);
    printf("CONGRATULATIONS YOU HAVE SUCCUFULLY");
    gotoxy(25,12);
    printf("CREATE YOUR COMMERCIAL ACCOUNT");
    gotoxy(27,15);
Color(User_Red_Color);
    printf("PRESS ANY KEY TO CONTINUE");
Color(User_White_Color);
    _getch();
}


void UpgradeStillYoungPrinting(int UserAge){
gotoxy(30,8);
  printf("YOUR AGE IS");
  Color(User_Gold_Color);
  printf(" %d",UserAge/356);
  Color(User_White_Color);
  gotoxy(26,10);
  printf("TO UPGRADE YOUR ACCOUNT");
  gotoxy(22,12);
  printf("FROM THE MINOR TO THE PERSONAL TYPE");
  gotoxy(21,14);
  printf("YOU MUST BE HIGHER THEN 18 YEARS OLD");
  gotoxy(25,17);
  if((18*356)-UserAge>=356){
    printf("RETURN BACK AFTER ");
    Color(User_Gold_Color);
    if(UserAge==17*356){
        printf("1 YEAR");
    }else{
    printf("%d YEARS",((18*356)-UserAge)/356);
    }
  }else if((18*356)-UserAge>=30){
   printf("RETURN BACK AFTER ");
   Color(User_Gold_Color);
   printf("%d MONTHS",((18*356)-UserAge)/30);
  }else if((18*356)-UserAge>0){
   printf("RETURN BACK AFTER ");
   Color(User_Gold_Color);
   printf("%d DAYS",((18*356)-UserAge));
  }else {
   printf("RETURN BACK TOMOROW");
  }
  gotoxy(26,20);
  Color(User_Red_Color);
  printf("PRESS ANY KEY TO EXIT");
  Color(User_White_Color);
}

void UpgradeCongForUpPrinting(int UserAge){
  gotoxy(25,8);
  Color(User_Gold_Color);
  printf("CONGRATULATIONS FINALLY !!");
  Color(User_White_Color);
  gotoxy(30,10);
  printf("YOUR AGE IS");
  Color(User_Gold_Color);
  printf(" %d",UserAge/356);
  Color(User_White_Color);
  gotoxy(18,12);
  printf("NOW YOU ARE ABLE TO UPGRADE YOUR ACCOUNT");
  gotoxy(21,14);
  printf("FROM THE MINOR TO THE PERSONAL TYPE");
  gotoxy(25,18);
  Color(User_Red_Color);
  printf("PRESS ANY KEY TO CONTINUE");
  Color(User_White_Color);
}



void CompCompanyTitels(){
gotoxy(10,9);
    printf("OPERATIONS");

    gotoxy(59,9);
    printf("INFORMATIONS");

    gotoxy(17,16);
    printf("VIEW");
    gotoxy(16,18);
    printf("WORKERS");

    gotoxy(53,16);
    printf("ADD AND DELETE");
    gotoxy(56,18);
    printf("WORKERS");

    gotoxy(38,17);
    printf("BACK");
}

void CompCashTitels(){
    gotoxy(10,9);
    printf("SEND MONEY");

    gotoxy(57,9);
    printf("SEND THE SALARY");


    gotoxy(13,17);
    printf("ENTER MONEY");


    gotoxy(53,17);
    printf("WITHDRAW MONEY");

    gotoxy(38,17);
    printf("BACK");
}



void ADELPKERTypesPrinting(int Type){
if(Type==1){
    gotoxy(24,5);
    printf("TO ADD A WORKER TO YOUR COMPANY");
    gotoxy(28,7);
    printf("YOU MUST ENTER HIS ID");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(10,12);
    printf("WORKER ID");
    gotoxy(9,16);
    printf("YOUR PASSWORD");
    }else if(Type == 2){
    gotoxy(22,5);
    printf("TO DELETE A WORKER FROM THE COMPANY");
    gotoxy(28,7);
    printf("YOU MUST ENTER HIS ID");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(10,12);
    printf("WORKER ID");
    gotoxy(9,16);
    printf("YOUR PASSWORD");
    }else if(Type == 3){
    gotoxy(28,5);
    printf("TO MODIFY YOUR FIRST NAME");
    gotoxy(26,7);
    printf("YOU MUST ENTER YOUR NEW NAME");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(10,12);
    printf("NEW NAME");
    gotoxy(9,16);
    printf("PASSWORD");
    }else if(Type == 4){
    gotoxy(28,5);
    printf("TO MODIFY YOUR LAST NAME");
    gotoxy(24,7);
    printf("YOU MUST ENTER YOUR NEW LAST NAME");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(10,12);
    printf("NEW NAME");
    gotoxy(9,16);
    printf("PASSWORD");
    }else if(Type == 5){
    gotoxy(28,5);
    printf("TO MODIFY YOUR BIRTH DAY");
    gotoxy(24,7);
    printf("YOU MUST ENTER YOUR NEW BIRTH DAY");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(10,12);
    printf("BIRTH DAY");
    gotoxy(9,16);
    printf("PASSWORD");
    }else if(Type == 6){
    gotoxy(28,5);
    printf("TO MODIFY YOUR ADRESS");
    gotoxy(24,7);
    printf("YOU MUST ENTER YOUR NEW ADRESS");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(10,12);
    printf("NEW ADRESS");
    gotoxy(9,16);
    printf("PASSWORD");
    }else if(Type == 7){
    gotoxy(28,5);
    printf("TO MODIFY YOUR PHONE NUMBER");
    gotoxy(24,7);
    printf("YOU MUST ENTER YOUR NEW PHONE NUMBER");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(8,12);
    printf("PHONE NUMBER");
    gotoxy(9,16);
    printf("PASSWORD");
    }else if(Type == 8){
    gotoxy(28,5);
    printf("TO MODIFY YOUR USER_NAME");
    gotoxy(24,7);
    printf("YOU MUST ENTER YOUR USER_NAME");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(10,12);
    printf("USER_NAME");
    gotoxy(9,16);
    printf("PASSWORD");
    }else if(Type == 9){
    gotoxy(28,5);
    printf("TO MODIFY YOUR PASSWORD");
    gotoxy(24,7);
    printf("YOU MUST ENTER YOUR NEW PASSWORD");
    gotoxy(29,8);
    printf("AND YOUR OLD PASSWORD");
    gotoxy(8,12);
    printf("NEW PASSWORD");
    gotoxy(8,16);
    printf("OLD PASSWORD");
    }else if(Type == 10){
    gotoxy(24,5);
    printf("TO SEND MONEY FOR SOMEBODY");
    gotoxy(26,7);
    printf("YOU MUST ENTER HIS ID");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(8,12);
    printf("RECEIVER ID");
    gotoxy(8,16);
    printf("PASSWORD");
    }else if(Type == 11){
    gotoxy(24,5);
    printf("TO SEND SALARY MONEY TO YOUR WORKERS");
    gotoxy(26,7);
    printf("YOU MUST ENTER THE SALARY YOU WANT TO SEND");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(8,12);
    printf("THE SALARY");
    gotoxy(8,16);
    printf("PASSWORD");
    }else if(Type == 12 || Type == 15){
    gotoxy(24,5);
    printf("TO ENTER MONEY TO YOUR ACCOUNT");
    gotoxy(26,7);
    printf("YOU MUST ENTER THE MONEY");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(8,12);
    printf("THE MONEY");
    gotoxy(8,16);
    printf("PASSWORD");
    }else if(Type == 13 || Type == 14){
    gotoxy(24,5);
    printf("TO GET OUT YOUR MONEY AS CASH");
    gotoxy(26,7);
    printf("YOU MUST ENTER HOW MUCH MONEY");
    gotoxy(29,8);
    printf("AND YOUR PASSWORD");
    gotoxy(8,12);
    printf("THE MONEY");
    gotoxy(8,16);
    printf("PASSWORD");
    }else if(Type == 16){
    gotoxy(19,6);
    printf("NOW YOU MUST ENTER THE MONEY THAT YOU WANT");
    gotoxy(20,8);
    printf("TO SEND TO THIS PERSON AND YOUR PASSWORD");
    gotoxy(8,12);
    printf("THE MONEY");
    gotoxy(8,16);
    printf("PASSWORD");
    }else if(Type == 17 || Type == 18 || Type == 19){
    gotoxy(24,6);
    printf("YOU WANT TO BLOCK OR REMOVE THE BLOCK ");
    gotoxy(29,8);
    if(Type == 17){
    printf("YOUR PERSONAL ACCOUNT");
    }else if(Type == 18){
    printf("YOUR MINOR ACCOUNT");
    }else if(Type == 19){
    printf("YOUR COMERCIAL ACCOUNT");
    }
    gotoxy(20,10);
    printf("IF YOU WILL BLOCK YOUR ACCOUNT EVERY OPTION");
    gotoxy(16,11);
    printf("\t\t\t\t\t\t");
    gotoxy(16,12);
    printf("\t\t\t\t\t\t");
    gotoxy(16,13);
    printf("\t\t\t\t\t\t");
    gotoxy(23,12);
    printf("IN THE OPERATIONS OF THE CASH WILL STOP ");
    gotoxy(28,13);
    printf(" LIKEWISE,THE OPPOSITE");
    gotoxy(12,16);
    printf("PASSWORD");
    }else if(Type == 20 ||Type == 22 ||Type == 23){
    gotoxy(24,6);
    printf("BE CAREFUL YOU ARE GOING TO DELETE ");
    gotoxy(29,8);
    if(Type == 20){
    printf("YOUR USER_ACCOUNT ");
    }else if(Type == 22){
    printf("YOUR MINOR ACCOUNT ");
    }else  if(Type == 23){
    printf("YOUR COMERCIAL ACCOUNT");
    }
    gotoxy(20,10);
    printf("DELETING IT WILL MAKE EVERY INFORMATIONS LOST");
    gotoxy(16,11);
    printf("\t\t\t\t\t\t");
    gotoxy(16,12);
    printf("\t\t\t\t\t\t");
    gotoxy(16,13);
    printf("\t\t\t\t\t\t");
    gotoxy(23,12);
    printf("AND YOUR MONEY MAY BE TAKEN BY THE BANK");
    gotoxy(28,13);
    printf("SO BE CAREFUL");
    gotoxy(12,16);
    printf("PASSWORD");
    }else if(Type == 21){
    gotoxy(24,6);
    printf("BE CAREFUL YOU ARE GOING TO DELETE ");
    gotoxy(29,8);
    printf("YOUR PERSONAL ACCOUNT ");
    gotoxy(18,10);
    printf("DELETING IT WILL DELETE THE COMERCIAL ACCOUNT TOO");
    gotoxy(16,11);
    printf("\t\t\t\t\t\t");
    gotoxy(16,12);
    printf("\t\t\t\t\t\t");
    gotoxy(16,13);
    printf("\t\t\t\t\t\t");
    gotoxy(23,12);
    printf("AND YOUR MONEY MAY BE TAKEN BY THE BANK");
    gotoxy(29,13);
    printf("SO BE CAREFUL");
    gotoxy(12,16);
    printf("PASSWORD");
    }else if(Type == 24){
    gotoxy(25,6);
    printf("YOU ARE NOW IN ADMIN MODE");
    gotoxy(24,8);
    printf("TO CHANGE IT TO USER MODE SO YOU CAN");
    gotoxy(25,10);
    printf("     ALL USERS INFORMATIONS          ");
    gotoxy(16,11);
    printf("\t\t\t\t\t\t");
    gotoxy(16,12);
    printf("\t\t\t\t\t\t");
    gotoxy(16,13);
    printf("\t\t\t\t\t\t");
    gotoxy(22,12);
    printf("AND DELETE AND BLOCK OPTION WILL BE ALLOWED");
    gotoxy(12,16);
    printf("USER ID");
    }else if(Type == 25){
    gotoxy(25,6);
    printf("ONLY THE ADMIN MUST ENTER HERE");
    gotoxy(27,8);
    printf("SO TO BLOCK THE INTRUDERS");
    gotoxy(14,10);
    printf("YOU MUST ENTER THE ADMIN CODE < ONLY THE ADMIN KNOW IT >");
    gotoxy(16,11);
    printf("\t\t\t\t\t\t");
    gotoxy(16,12);
    printf("\t\t\t\t\t\t");
    gotoxy(16,13);
    printf("\t\t\t\t\t\t");
    gotoxy(22,12);
    printf("AND REMEMBER YOU HAVE ONLY 3 ATTEMPTS");
    gotoxy(10,16);
    printf("ADMIN CODE");
    }else if(Type == 26){
    gotoxy(24,5);
    printf("TO SEND A MESSAGE TO THE SUPPORT");
    gotoxy(26,7);
    printf("PLEASE ENTER YOUR ID OR CHOOSE");
    gotoxy(29,8);
    printf("CONTINUE AS NEW CUSTOMER");
    gotoxy(15,12);
    printf("THE ID");
    gotoxy(28,16);
    printf("CONTINUE AS NEW CUSTOMER");
    }else if(Type == 27){
    gotoxy(26,5);
    printf("TO CHANGE THE ADMIN CODE");
    gotoxy(23,7);
    printf("YOU MUST ENTER THE NEW ADMIN CODE");
    gotoxy(29,8);
    printf("AND THE OLD CODE");
    gotoxy(8,12);
    printf("NEW ADMIN CODE");
    gotoxy(8,16);
    printf("OLD ADMIN CODE");
    }

    gotoxy(27,20);
    printf("BACK");
    gotoxy(46,20);
    printf("CONTINUE");
}



void CashAccBlockedPrinting(){
 StyleCore();
 gotoxy(26,10);
 printf("YOUR ACCOUNT IS BLOCKED ");
 gotoxy(20,12);
 printf("YOU CANT USE ANY OF THE CASH OPERATIONS");
 gotoxy(21,14);
 printf("RETURN BACK WHEN YOU REMOVE THE BLOCK ");
 gotoxy(28,16);
 printf("FROM YOUR ACCOUNT");
 gotoxy(25,19);
 Color(User_Red_Color);
 printf("PRESS ANY KEY TO CONTINUE");
 Color(User_White_Color);
 _getch();
}

void CashAccNoAccountPrinting(){
  StyleCore();
 gotoxy(23,10);
 printf("YOU STILL DONT HAVE AN ACCOUNT");
 gotoxy(23,12);
 printf("YOU MUST FIRST HAVE AN ACCOUNT SO ");
 gotoxy(19,14);
 printf("YOU WILL BE ABLE TO MAKE A CASH OPERATIONS");
 gotoxy(28,16);
 printf("IN YOUR ACCOUYNT");
 gotoxy(25,19);
 Color(User_Red_Color);
 printf("PRESS ANY KEY TO CONTINUE");
 Color(User_White_Color);
 _getch();
}



void ViewInfoTitels(int Type){
    if(Type == 1 || Type == 2){
gotoxy(33,3);
  printf("My Informations");

  gotoxy(20,9);
  printf("My Accounts");

  gotoxy(45,9);
  printf("My User Informations");
    }else{
    gotoxy(31,3);
  printf("Users Informations");

  gotoxy(20,9);
  printf("Accounts");

  gotoxy(48,9);
  printf("Users_Accounts");
    }

  gotoxy(12,15);
  printf("Cash Informations");

  gotoxy(54,15);
  printf("Cash Diagram");

  gotoxy(17,21);
  printf("Historique");

  gotoxy(38,21);
  printf("BACK");

  gotoxy(53,21);
  printf("MESSAGES");
}



void EditAccTitels(int i0,int i1,int i2,int i3,int i4,int i5,int i6,int i7,int ip){
gotoxy(10,3);
      if(i0==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
        delayingAffichage("Options To Edite : ",0.02);Color(User_White_Color);
      }else{
      printf("Options To Edite : ");Color(User_White_Color);
      }
      gotoxy(28,7);
      if(i1==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
            delayingAffichage("1. FIRST NAME ",0.02);Color(User_White_Color);
      }else{
      printf("1. FIRST NAME ");Color(User_White_Color);
      }
      gotoxy(28,9);
      if(i2==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
        delayingAffichage("2. LAST NAME ",0.02);Color(User_White_Color);
      }else{
      printf("2. LAST NAME ");Color(User_White_Color);
      }
      gotoxy(28,11);
      if(i3==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
        delayingAffichage("3. BIRTH DAY ",0.02);Color(User_White_Color);
      }else{
      printf("3. BIRTH DAY ");Color(User_White_Color);
      }
      gotoxy(28,13);
      if(i4==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
        delayingAffichage("4. ADRESS ",0.02);Color(User_White_Color);
      }else {
      printf("4. ADRESS ");Color(User_White_Color);
      }
      gotoxy(28,15);
      if(i5==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
        delayingAffichage("5. PHONE ",0.02);Color(User_White_Color);
      }else{
      printf("5. PHONE ");Color(User_White_Color);
      }
      gotoxy(28,17);
      if(i6==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
        delayingAffichage("6. LOGIN_INFORMATIONS ",0.02);Color(User_White_Color);
      }else{
      printf("6. LOGIN_INFORMATIONS ");Color(User_White_Color);
      }
      gotoxy(52,21);
      if(i7==1){
        Color(User_RedGround_Color);
      }
      if(ip==1){
        delayingAffichage("EXIT",0.02);Color(User_White_Color);
      }else{
      printf("EXIT");Color(User_White_Color);
      }
}



void LineOptionColorTitels(int Type){
if(Type == 1 || Type == 3){
gotoxy(4,2);
printf("BACKGROUND");
}else if(Type == 2 || Type == 4){
gotoxy(4,2);
printf("LINE_COLOR");
}
gotoxy(35,2);
printf("DEFAULT");
gotoxy(61,2);
printf("SAVE AND EXIT");
}



void CreateUserTitels(int Frstime,int e,int ip1,int ip2,int ip3,int ip4,int ip5,int ip6,int ip7,int ip8,int ip9,int ip10,int ip11,int ip12,int ip13,int ip14,int ic2,int ic4,int ic6,int ic8,int ic9,int ic10,int ic12,int ic14){
gotoxy(6,2);
    if(Frstime==1){
    delayingAffichage("Sign Up :",0.02);
    }else{
    printf("Sign Up :");
    }

    gotoxy(10,5);
    if((ip1==0)||((ic2==1)&&(ip1==0))){
    if(Frstime==1){
    delayingAffichage("First Name :",0.02);
    }else{
    printf("First Name :");
    }
    }

    gotoxy(50,5);
    if(ip2==0){
    if(Frstime==1){
    delayingAffichage("first_name",0.02);
    }else{
    printf("first_name");
    }
    }

    gotoxy(10,8);
    if((ip3==0)||((ic4==1)&&(ip3==0))){
    if(Frstime==1){
    delayingAffichage("Last Name :",0.02);
    }else{
    printf("Last Name :");
    }
    }

    gotoxy(50,8);
    if(ip4==0){
    if(Frstime==1){
    delayingAffichage("last_name",0.02);
    }else{
    printf("last_name");
    }
    }

    gotoxy(10,11);
    if((ip5==0)||((ic6==1)&&(ip5==0))){
    if(Frstime==1){
    delayingAffichage("ID :",0.02);
    }else{
    printf("ID :");
    }
    }

    gotoxy(55,11);
    if(ip6==0){
    if(Frstime==1){
    delayingAffichage("id",0.02);
    }else{
    printf("id");
    }
    }

    gotoxy(10,14);
    if((ip7==0)||(((ic8==1)||(ic9==1)||(ic10==1)||(e==0))&&(ip7==0))){
    if(Frstime==1){
    delayingAffichage("Birth DAY :",0.02);
    }else{
    printf("Birth DAY :");
    }
    }

    gotoxy(46,14);
    if(ip8==0){
    if(Frstime==1){
    delayingAffichage("DD",0.02);
    }else{
    printf("DD");
    }
    }

    gotoxy(54,14);
    if(ip9==0){
    if(Frstime==1){
    delayingAffichage("MM",0.02);
    }else{
    printf("MM");
    }
    }

    gotoxy(62,14);
    if(ip10==0){
    if(Frstime==1){
    delayingAffichage("YYYY",0.02);
    }else{
    printf("YYYY");
    }
    }

    gotoxy(10,17);
    if((ip11==0)||((ic12==1)&&(ip11==0))){
    if(Frstime==1){
    delayingAffichage("Address :",0.02);
    }else{
    printf("Address :");
    }
    }

    gotoxy(52,17);
    if(ip12==0){
    if(Frstime==1){
    delayingAffichage("address",0.02);
    }else{
    printf("address");
    }
    }

    gotoxy(10,20);
    if((ip13==0)||((ic14==1)&&(ip13==0))){
    if(Frstime==1){
    delayingAffichage("Phone :",0.02);
    }else{
    printf("Phone :");
    }
    }

    gotoxy(50,20);
    if(ip14==0){
    if(Frstime==1){
    delayingAffichage("phone_number",0.02);
    }else{
    printf("phone_number");
    }
    }

    gotoxy(20,23);
    if(Frstime==1){
    delayingAffichage("EXIT",0.02);
    }else{
    printf("EXIT");
    }

    gotoxy(54,23);
    if(Frstime==1){
    delayingAffichage("Continue",0.02);
    }else{
    printf("Continue");
    }
}

void CreateUserExemplesPrinting(int ip1,int ip3,int ip5,int ip7,int ip11,int ip13){
if(ip1==1){
        gotoxy(10,5);
        Color(LightBlue_Color);
        printf("Example ( Mohamed Ali , Seyf )");Color(White_Color);
    }
    if(ip3==1){
        gotoxy(10,8);
        Color(LightBlue_Color);
        printf("Example ( Hamzi , Bechki )");Color(White_Color);
    }
    if(ip5==1){
        gotoxy(10,11);
        Color(LightBlue_Color);
        printf("Example ( 197645812 )");Color(White_Color);
    }
    if((ip7==1)){
        gotoxy(10,14);
        Color(LightBlue_Color);
        printf("Example ( 12 / 8 / 1986 )");Color(White_Color);
    }
    if(ip11==1){
        gotoxy(10,17);
        Color(LightBlue_Color);
        printf("Example ( Algeria_Ourgla )");Color(White_Color);
    }
    if(ip13==1){
        gotoxy(10,20);
        Color(LightBlue_Color);
        printf("Example ( +213798851800 )");Color(White_Color);
    }

}

void CreateUserCorrectPrinting(int nint,int lint,int iint,int dmyint,int e,int aint,int tint,int ip1,int ip3,int ip5,int ip7,int ip11,int ip13,int ic2,int ic4,int ic6,int ic8,int ic9,int ic10,int ic12,int ic14){
if((ic2==0)&&(nint==1)&&(ip1==0)){
        gotoxy(22,5);
        Color(Green_Color);
        printf(" Correct");Color(White_Color);
    }

    if((ic4==0)&&(lint==1)&&(ip3==0)){
        gotoxy(22,8);
        Color(Green_Color);
        printf(" Correct");Color(White_Color);
    }

    if((ic6==0)&&(iint==1)&&(ip5==0)){
        gotoxy(16,11);
        Color(Green_Color);
        printf(" Correct");Color(White_Color);
    }

    if((ic8==0)&&(ic9==0)&&(ic10==0)&&(dmyint==1)&&(ip7==0)&&(e==0)){
        gotoxy(22,14);
        Color(Green_Color);
        printf(" Correct");Color(White_Color);
    }

    if((ic12==0)&&(aint==1)&&(ip11==0)){
        gotoxy(19,17);
        Color(Green_Color);
        printf(" Correct");Color(White_Color);
    }

    if((ic14==0)&&(tint==1)&&(ip13==0)){
        gotoxy(17,20);
        Color(Green_Color);
        printf(" Correct");Color(White_Color);
    }
}

void CreateUserFalsePrinting(Client C,struct tm *myTime,int *e,int *dmyint,int *Local_Age,int *Local_Time,int *Age,int ic2,int ic4,int ic6,int ic8,int ic9,int ic10,int ic12,int ic14,int ip1,int ip3,int ip5,int ip7,int ip11,int ip13){
if((ic2==1)&&(ip1==0)){
        if(strlen(C.Nom)<=2){
            gotoxy(22,5);
            Color(Gold_Color);
            printf(" This Is Small Name");Color(White_Color);
        }else if(strlen(C.Nom)>=15){
            gotoxy(22,5);
            Color(Gold_Color);
            printf(" This Is Large Name");Color(White_Color);
        }
    }

    if((ic4==1)&&(ip3==0)){
        if(strlen(C.Prenom)<=2){
            gotoxy(22,8);
            Color(Gold_Color);
            printf(" This Is Small Name");Color(White_Color);
        }else if(strlen(C.Prenom)>=15){
            gotoxy(22,8);
            Color(Gold_Color);
            printf(" This Is Large Name");Color(White_Color);
        }
    }

    if((ic6==1)&&(ip5==0)){
        if(ChifreCount(C.Id)<=2){
            gotoxy(16,11);
            Color(Gold_Color);
            printf("This Is Too Small ID");Color(White_Color);
        }else if(ChifreCount(C.Id)>=9){
            gotoxy(16,11);
            Color(Gold_Color);
            printf("This Is Too Large ID");Color(White_Color);
        }else  if(FindIDinTable(1,C.Id)!=-1){
            gotoxy(16,11);
            Color(Gold_Color);
            printf("This ID Used Before");Color(White_Color);
        }
    }

    if(((ic8==1)||(ic9==1)||(ic10==1))&&(ip7==0)){
            gotoxy(22,14);
            Color(Gold_Color);
        if((ic8==1)&&(ic9==0)&&(ic10==0)){
            printf(" Wrong Day");Color(White_Color);
        }else if((ic8==0)&&(ic9==1)&&(ic10==0)){
            printf(" Wrong Month");Color(White_Color);
        }else if((ic8==0)&&(ic9==0)&&(ic10==1)){
            printf(" Wrong Year");Color(White_Color);
        }else if((ic8==1)&&(ic9==1)&&(ic10==0)){
            printf(" Wrong Day / Month");Color(White_Color);
        }else if((ic8==1)&&(ic9==0)&&(ic10==1)){
            printf(" Wrong Day / Year");Color(White_Color);
        }else if((ic8==0)&&(ic9==1)&&(ic10==1)){
            printf(" Wrong Month / Year");Color(White_Color);
        }else if((ic8==1)&&(ic9==1)&&(ic10==1)){
            gotoxy(20,14);
            printf(" Wrong Day/Month/Year");Color(White_Color);
        }

    }


    if((ic8==0)&&(ic9==0)&&(ic10==0)&&(e==0) && (ip7==0)){
    if((C.Date_nais.Day <=31)&&(C.Date_nais.Day >0)&&(C.Date_nais.Month <=12)&&(C.Date_nais.Month >0)&&(C.Date_nais.Year >0)){
    if(*Age < 8*356){
    gotoxy(21,14);
    Color(Gold_Color);
    printf(" You Are Too Young");Color(White_Color);
    }else if(*Age > 120*356){
    gotoxy(21,14);
    Color(Gold_Color);
    printf(" You Must Be Dead Now");Color(White_Color);
   }
  }else if((*dmyint==1)){
   gotoxy(21,14);
    Color(Gold_Color);
    printf(" Wrong Date");Color(White_Color);
   }
    }

    if(((ic8==0)&&(ic9==0)&&(ic10==0))){
   *Age =0;
   *Local_Age=0;
   *Local_Time=0;

   if((C.Date_nais.Day <=31)&&(C.Date_nais.Day >0)&&(C.Date_nais.Month <=12)&&(C.Date_nais.Month >0)&&(C.Date_nais.Year >0)){

   *Local_Age += ((C.Date_nais.Day) + ((C.Date_nais.Month)*30)+((C.Date_nais.Year)*356));;

   *Local_Time += ( myTime->tm_mday)+((myTime->tm_mon +1 )*30)+((myTime->tm_year+1900)*356);

   *Age = *Local_Time - *Local_Age;


   if(*Age < 8*356){
    *e=0;

   }else if(*Age > 120*356){
    *e=0;
   }
    }else if(*dmyint==1){
    *e=0;
    }
    }


    if((ic12==1)&&(ip11==0)){
        if(strlen(C.Adresse)<=2){
            gotoxy(19,17);
            Color(Gold_Color);
            printf(" This Is Small Address");Color(White_Color);
        }else if(strlen(C.Adresse)>=15){
            gotoxy(19,17);
            Color(Gold_Color);
            printf(" This Is Large Address");Color(White_Color);
        }
    }

    if((ic14==1)&&(ip13==0)){
        if(strlen(C.Tel)<=2){
            gotoxy(17,20);
            Color(Gold_Color);
            printf(" This Is Small Ph_Number");Color(White_Color);
        }else if(strlen(C.Tel)>=15){
            gotoxy(17,20);
            Color(Gold_Color);
            printf(" This Is Large Ph_Number");Color(White_Color);
        }
    }
}

void CreateUserInfoEnteredPrinting(Client C,int ic2,int ic4,int ic6,int ic8,int ic9,int ic10,int ic12,int ic14,int ip2,int ipp2,int ip4,int ipp4,int ip6,int ipp6,int ip8,int ipp8,int ip9,int ipp9,int ip10,int ipp10,int ip12,int ipp12,int ip14,int ipp14){
if(ip2==1){
        if(ipp2==1){
                gotoxy(46,5);
                if(ic2==1){
                Color(RedGround_Color);
                }else {
                Color(Gold_Color);
                }
            printf("%s",C.Nom);Color(White_Color);
        }
    }

    if(ip4==1){
        if(ipp4==1){
                gotoxy(46,8);
                if(ic4==1){
                Color(RedGround_Color);
                }else {
                Color(Gold_Color);
                }
            printf("%s",C.Prenom);Color(White_Color);
        }
    }

    if(ip6==1){
        if(ipp6==1){
                gotoxy(50,11);
           if(ic6==1){
            Color(RedGround_Color);
            }else {
                Color(Gold_Color);
                }
            printf("%d",C.Id);Color(White_Color);
        }
    }

    if(ip8==1){
        if(ipp8==1){
                gotoxy(46,14);
                if(ic8==1){
                Color(RedGround_Color);
                }else {
                Color(Gold_Color);
                }
            printf("%d",C.Date_nais.Day);Color(White_Color);
        }
    }

    if(ip9==1){
        if(ipp9==1){
                gotoxy(54,14);
                if(ic9==1){
                Color(RedGround_Color);
                }else {
                Color(Gold_Color);
                }
            printf("%d",C.Date_nais.Month);Color(White_Color);
        }
    }

    if(ip10==1){
        if(ipp10==1){
                gotoxy(62,14);
                if(ic10==1){
                Color(RedGround_Color);
                }else {
                Color(Gold_Color);
                }
            printf("%d",C.Date_nais.Year);Color(White_Color);
        }
    }

    if(ip12==1){
        if(ipp12==1){
                if(ic12==1){
                Color(RedGround_Color);
                }else {
                Color(Gold_Color);
                }
                gotoxy(46,17);
            printf("%s",C.Adresse);Color(White_Color);
        }
    }

    if(ip14==1){
        if(ipp14==1){
                if(ic14==1){
                Color(RedGround_Color);
                }else {
                Color(Gold_Color);
                }
                gotoxy(50,20);
            printf("%s",C.Tel);Color(White_Color);
        }
    }
}

void CreateUserTitels2(int iip2,int iip3,int iip5){
gotoxy(23,4);
   printf("Login Informations");

   gotoxy(28,10);
   if((iip2==0)&&(iip5==0)){
   printf("User_Name");
   }

   gotoxy(28,16);
   if((iip3==0)&&(iip5==0)){
   printf("Password");
   }

   gotoxy(29,22);
   printf("Examples");

   gotoxy(10,22);
   printf("Return Back");

   gotoxy(45,22);
   printf("Continue");
}

void CreateUserFalsePrinting2(User U,User Users[1000],int ii22,int ii33){
if(ii22==1){
    gotoxy(54,10);
    Color(Gold_Color);
    if(strlen(U.User_Name)<3){
       printf(" This Is Short Name");
       }else if (strlen(U.User_Name)>15){
       printf(" This Is Tall Name");
       }else{
       for(int k=0;k<1000;k++){
        if((strcmp(Users[k].User_Name,U.User_Name))==0){
            printf("User_Name Used Before");
            break;
        }
       }
    }

    Color(White_Color);
   }

   if(ii33==1){
    gotoxy(54,16);
    Color(Gold_Color);
    if(strlen(U.Password)<3){
       printf("Its a Short Password");
       }else
       printf("Its a Tall Password");

    Color(White_Color);
   }
}

void CreateUsersInfoEnteredPrinting2(User U,int iip2,int iipp2,int ii22,int iip3,int iipp3,int ii33,int iip5){
if((iip2==1)&&(iip5==0)){
        if(iipp2==1){
                gotoxy(25,10);
                if(ii22==1){
                Color(RedGround_Color);
                }
            printf("%s",U.User_Name);Color(White_Color);
        }
    }

    if((iip3==1)&&(iip5==0)){
        if(iipp3==1){
                gotoxy(25,16);
                if(ii33==1){
                Color(RedGround_Color);
                }
            printf("%s",U.Password);Color(White_Color);
        }
    }
}

