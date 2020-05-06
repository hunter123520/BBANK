

void StartMenuMvmntCond(int *i0,int *i1,int *i11,int *i12,int *i13,int *ip1,int *ip12,int *i2,int *i22,int *i3,int *i33,int *i4,int *i5,int *i55,int *i6,int *i66){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i4==1){
            *i4=0;
            *i1=1;
           }else  if((*i5==1)&&(*i55!=1)){
            *i5=0;
            *i4=1;
           }else if((*i6==1)&&(*i66!=1)){
           *i6=0;
           *i5=1;
           }
           if(*i33==1){
            *i33=0;
           }
           if(*i22==1){
            *i22=0;
           }
           if(*i11==1){
            *i11=0;
           }else if(*i12==1){
            *i12=0;
            *i11=1;
           }else if(*i11==1){
           *ip1=0;
           *ip12=0;
           }else if(*i13==1){
           *i13=0;
           *i12=1;
           }

           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*i4==1){
            *i4=0;
            *i5=1;
           }else  if(*i5==1){
            *i5=0;
            *i6=1;
           }else if(*i6==1){}
           else if(*i11==1){
           *i11=0;
           *i12=1;
           }else if(*i12==1){
            *i12=0;
            *i13=1;
           }
           else if (*i13==1){}
           else if(*i1==1){
            *i11=1;
           }
           else if(*i2==1){
            *i22=1;
           }
           else if(*i3==1){
            *i33=1;
           }
           else if(*i0==1){
              *i0=0;
              *i4=1;
            }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if((*i3==1)&&(*i33!=1)){
            *i3=0;
            *i2=1;
            }else if((*i2==1)&&(*i22!=1)){
            *i2=0;
            *i1=1;
            }else if((*i1==1)&&(*i11!=1)&&(*i12!=1)&&(*i13!=1)){
            *i1=0;
            *i4=1;
            }else if(*i66==1){
            *i66=0;
            }else if(*i55==1){
            *i55=0;
            }

           //  printf("Left");
             break;//75 Arrow Left
        case 77:
            if((*i1==1)&&(*i11!=1)&&(*i12!=1)&&(*i13!=1)){
            *i1=0;
            *i2=1;
            }else if((*i2==1)&&(*i22!=1)){
            *i2=0;
            *i3=1;
            }else if(*i0==1){
            *i0=0;
            *i1=1;
            }else if(*i5==1){
            *i55=1;
            }
            else if(*i6==1){
            *i66=1;
            }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void YesNoMvmntCond(int *ii1,int *ii2,int *ii3){
if(_kbhit()){ // If The KeyBord Pressed
        switch(_getch()){ // Here We Make A Switch OF Witch Button That We Hit
        case 80://The Value 80 Represents The  Arrow Down
           if(*ii1==1){// If We Are In The Message Box
            *ii1=0;// The Message Box Variable Goes To 0  < Message Box Off >
            *ii2=1;// We Move To The Yes Box < Yes Box On >
           }
             break;
        case 75://The Value 75 Represents The  Arrow Left
            if(*ii3==1){// If We Are In The NO Box
            *ii3=0;// The NO Box Variable Goes To 0  < NO Box Off >
            *ii2=1;// We Move To The Yes Box < Yes Box On >
            }
            if(*ii1==1){// If We Are In The Message Box
            *ii1=0;// The Message Box Variable Goes To 0  < Message Box Off >
            *ii2=1;// We Move To The Yes Box < Yes Box On >
            }
             break;
        case 77://The Value 77 Represents The Arrow Right
            if(*ii2==1){// If We Are In The Yes Box
            *ii2=0;// The Yes Box Variable Goes To 0  < Yes Box Off >
            *ii3=1;// We Move To The No Box < No Box On >
            }
            if(*ii1==1){// If We Are In The Message Box
            *ii1=0;// The Message Box Variable Goes To 0  < Message Box Off >
            *ii3=1;// We Move To The No Box < No Box On >
            }
             break;
        }
    }
}

void TwoMvmntCond(int *i1,int *i2,int *i3){
if(_kbhit()){ // If The KeyBord Pressed
        switch(_getch()){ // Here We Make A Switch OF Witch Button That We Hit
        case 72://The Value 72 Represents The  Arrow Up
           if(*i3==1){// If We Are In The EXIT Box
            *i3=0;// The Exit Box Variable Goes To 0  < Exit Box Off >
            *i1=1;// We Move To The First Choice Box < First Choice Box On >
           }
            break;
        case 80://The Value 80 Represents The  Arrow Down
           if(*i2==1){// If We Are In The Second Choice Box
            *i2=0;// The Second Choice Box Variable Goes To 0  < Second Choice Box Off >
            *i3=1;// We Move To The EXIT Box < EXIT Box On >
           }else if(*i1==1){// If We Are In The First Choice Box
            *i1=0;// The First Choice Box Variable Goes To 0  < First Choice Box Off >
            *i3=1;// We Move To The EXIT Box < EXIT Box On >
           }
             break;
        case 75://The Value 75 Represents The  Arrow Left
            if(*i1==1){// If We Are In The First Choice Box
            *i1=0;// The First Choice Box Variable Goes To 0  < First Choice Box Off >
            *i3=1;// We Move To The EXIT Box < EXIT Box On >
           }else if(*i3==1){// If We Are In The EXIT Box
            *i3=0;// The EXIT Box Variable Goes To 0  < EXIT Box Off >
            *i1=1;// We Move To The First Choice Box < First Choice Box On >
           }else if(*i2==1){// If We Are In The Second Choice Box
           *i2=0;// The Second Choice Box Variable Goes To 0  < Second Choice Box Off >
           *i1=1;// We Move To The First Choice Box < First Choice Box On >
           }
             break;
        case 77://The Value 77 Represents The  Arrow Right
           if(*i2==1){// If We Are In The Second Choice Box
            *i2=0;// The Second Choice Box Variable Goes To 0  < Second Choice Box Off >
            *i3=1;// We Move To The EXIT Box < EXIT Box On >
           }else if(*i3==1){// If We Are In The EXIT Box
            *i3=0;// The EXIT Box Variable Goes To 0  < EXIT Box Off >
            *i2=1;// We Move To The Second Choice Box < Second Choice Box On >
           }else if(*i1==1){// If We Are In The Message Box
           *i1=0;// The First Choice Box Variable Goes To 0  < First Choice Box Off >
           *i2=1;// We Move To The Second Choice Box < Second Choice Box On >
           }
             break;
        }
    }
}

void UserLogMvmntCond(int *i0,int *i1,int *i11,int *i2,int *i22,int *i3,int *i33,int *i4,int *i44,int *i5,int *i55,int *i6,int *i66,int *i7,int *i77,int *i8,int *i88,int *i9){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if((*i3==1)&&(*i33==0)){
            *i3=0;
            *i0=1;
           }else if((*i4==1)&&(*i44==0)){
            *i4=0;
            *i3=1;
           }else if((*i5==1)&&(*i55==0)){
            *i5=0;
            *i4=1;
           }else if((*i8==1)&&(*i88==0)){
            *i8=0;
            *i7=1;
           }else if((*i7==1)&&(*i77==0)){
            *i7=0;
            *i6=1;
           }else if((*i6==1)&&(*i66==0)){
            *i6=0;
            *i9=1;
           }
           if(*i11==1){
            *i11=0;
           }else if(*i22==1){
            *i22=0;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:

           if(*i0==1){
            *i0=0;
            *i3=1;
           }else if(*i1==1){
            *i11=1;
           }else if(*i2==1){
            *i22=1;
           }else if((*i3==1)&&(*i33==0)){
            *i3=0;
            *i4=1;
           }else if((*i4==1)&&(*i44==0)){
            *i4=0;
            *i5=1;
           }else if((*i6==1)&&(*i66==0)){
            *i6=0;
            *i7=1;
           }else if((*i7==1)&&(*i77==0)){
            *i7=0;
            *i8=1;
           }else if(*i9==1){
            *i9=0;
            *i6=1;
           }

            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i9==1){
                *i9=0;
                *i2=1;
            }else if((*i2==1)&&(*i22==0)){
            *i2=0;
            *i1=1;
           }else if((*i1==1)&&(*i11==0)){
            *i1=0;
            *i0=1;
           }else if(*i6==1){
            *i66=1;
           }else if(*i7==1){
            *i77=1;
           }else if(*i8==1){
            *i88=1;
           }

           if(*i33==1){
            *i33=0;
           }else if(*i44==1){
            *i44=0;
           }else if(*i55==1){
            *i55=0;
           }

           //  printf("Left");
             break;//75 Arrow Left
        case 77:
           if(*i0==1){
            *i0=0;
            *i1=1;
           }else if((*i1==1)&&(*i11==0)){
            *i1=0;
            *i2=1;
           }else if((*i2==1)&&(*i22==0)){
            *i2=0;
            *i9=1;
           }else if(*i3==1){
            *i33=1;
           }else if(*i4==1){
            *i44=1;
           }else if(*i5==1){
            *i55=1;
           }

           if(*i66==1){
            *i66=0;
           }else if(*i77==1){
            *i77=0;
           }else if(*i88==1){
            *i88=0;
           }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void CreateAccMvmntCond(int *i0,int *i1,int *i2,int *i3,int *i4,int Style,int Type,int Pers,int Minor,int Comerc){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i4==1){
            if((Style == 1 && Type==1) || (Style >= 2  &&  Comerc ==  -1 && Pers == -1 )){
                if(Minor >= 0){
                *i4=0;
                *i2=1;
                }
            }else if(Type==2){
                *i4=0;
                *i1=1;
            }else if((Style == 1 && Type == 3 && Pers == -1) || (Style >= 2 && Comerc == -1 && Minor == -1)){
            *i4=0;
            *i1=1;
            }else{
            *i4=0;
            *i3=1;
            }
           }else  if(*i3==1){
            if(Style == 1 && Type == 3 && Pers >= 0){
            }else{
            *i3=0;
            *i1=1;
           }
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*i1==1){
            if(Type==2){
                *i1=0;
                *i4=1;
            }else if((Style == 1 && Type == 3 && Pers == -1) || (Style >= 2 && Comerc == -1)){
            *i1=0;
            *i4=1;
            }else{
            *i1=0;
            *i3=1;
            }
           }else  if(*i2==1){
            if((Style == 1 && Type==1) || (Style >= 2 && Comerc == -1 && Pers == -1 )){
                *i2=0;
                *i4=1;
            }else{
            *i2=0;
            *i3=1;
            }
           }else if(*i3==1){
            *i3=0;
            *i4=1;
           }else if(*i4==1){}
           else if(*i0==1){
            if((Style == 1 && Type==1) || (Style >= 2 && Pers == -1 && Comerc == -1 && Minor >= 0)){
                *i0=0;
                *i2=1;
            }else if(Style == 1 && Type == 3 && Pers >= 0){
            *i0=0;
            *i3=1;
            }else if((Style >= 2 &&  Pers >= 0) || (Style ==  1)){
              *i0=0;
              *i1=1;
            }else{
            *i0=0;
            *i4=1;
            }
            }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i3==1){
            if(Style == 1 && Type == 3 && Pers >= 0){
            }else{
                *i3=0;
                *i1=1;
            }
            }else if(Style == 1 && *i2==1 && Type!=1 ){
               *i2=0;
               *i1=1;
            }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
            if(*i3==1){
                if(Type==3){
                }else{
                *i3=0;
                *i2=1;
                }
            }else if(*i1==1){
            if(Type==2){
            }else if(Type==3){
            }else {
            *i1=0;
            *i2=1;
            }
            }else if(*i0==1){
            if((Style == 1 && Type==1)||(Style >= 2 && Pers == -1 && Comerc == -1 && Minor >= 0)){
                *i0=0;
                *i2=1;
            }else if ((Style == 1)||(Style >= 2 && Pers >=0)){
              *i0=0;
              *i1=1;
            }else {
               *i0=0;
               *i4=1;
            }
            }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void CreateAccMinorMvmntCond(int *i1,int *i2,int *i3,int *i4){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i4==1){
            *i4=0;
            *i2=1;
           }else if(*i3==1){
           *i3=0;
           *i2=1;
           }else if (*i2==1){
           *i2=0;
           *i1=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*i1==1){
            *i1=0;
            *i2=1;
           }else if(*i2==1){
           *i2=0;
           *i4=1;
           }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i4==1){
            *i4=0;
            *i3=1;
            }else if(*i2==1){
            *i2=0;
            *i3=1;
            }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
            if(*i3==1){
                *i3=0;
                *i4=1;
            }else if(*i2==1){
            *i2=0;
            *i4=1;
            }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void CompMvmntCond(int *i0,int *i1,int *i2,int *i3,int *i4,int *i5,int Type){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i2==1){
            *i2=0;
            *i1=1;
           }else if(*i4==1 && Type != 3){
            *i4=0;
            *i3=1;
           }else if(*i0==1){
            *i0=0;
            *i5=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*i1==1){
            *i1=0;
            *i2=1;
           }else if(*i3==1){
            *i3=0;
            *i4=1;
           }else if(*i0==1){
            *i0=0;
            *i5=1;
           }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i3==1){
            *i3=0;
            *i1=1;
           }else if(*i4==1){
            *i4=0;
            *i5=1;
           }else if(*i5==1){
            *i5=0;
            *i2=1;
           }else if(*i0==1){
            *i0=0;
            *i1=1;
           }else if(*i1==1){
            *i1=0;
            *i2=1;
           }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
           if(*i1==1 && Type != 3){
            *i1=0;
            *i3=1;
           }else if(*i0==1 && Type != 3 ){
            *i0=0;
            *i3=1;
           }else if(*i2==1){
            *i2=0;
            *i5=1;
           }else if(*i5==1){
            *i5=0;
            *i4=1;
           }else if(*i3==1){
            *i3=0;
            *i4=1;
           }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void ADELPKERMvmntCond(int *i1,int *i2,int *i3,int *i4,int *d1,int *d2,int *d3,int Type){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i4==1){
            *i4=0;
            *i2=1;
           }else if(*i3==1){
           *i3=0;
           *i2=1;
           }else if (*i2==1 && Type != 5 && (Type <17 ||  Type == 26 || Type == 27) ){
           *i2=0;
           *i1=1;
           }else if(*i2==1 && Type == 5){
           *i2=0;
           *d2=1;
           }

           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*i1==1 && Type != 5){
            *i1=0;
            *i2=1;
           }else if(*i2==1){
           *i2=0;
           *i4=1;
           }else if(Type == 5 && *d1==1){
           *d1=0;
           *i2=1;
           }else if(Type == 5 && *d2==1){
           *d2=0;
           *i2=1;
           }else if(Type == 5 && *d3==1){
           *d3=0;
           *i2=1;
           }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i4==1){
            *i4=0;
            *i3=1;
            }else if(*i2==1){
            *i2=0;
            *i3=1;
            }else if(Type == 5 && *d3==1){
           *d3=0;
           *d2=1;
           }else if(Type == 5 && *d2==1){
           *d2=0;
           *d1=1;
           }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
            if(*i3==1){
            *i3=0;
            *i4=1;
            }else if(*i2==1){
            *i2=0;
            *i4=1;
            }else if(Type == 5 && *d1==1){
           *d1=0;
           *d2=1;
           }else if(Type == 5 && *d2==1){
           *d2=0;
           *d3=1;
           }
            // printf("Right");
             break;//77 Arrow Right
        }
    }

}

void ViewInfoMvmntCond(int *i1,int *i2,int *i3,int *i4,int *i5,int *i6,int *i7,int *i8){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i8==1){
            *i8=0;
            *i5=1;
           }else if(*i6==1){
            *i6=0;
            *i4=1;
           }else if(*i5==1){
            *i5=0;
            *i3=1;
           }else if(*i4==1){
            *i4=0;
            *i2=1;
           }else if(*i3==1){
            *i3=0;
            *i1=1;
           }else if(*i2==1){
            *i2=0;
            *i1=1;
           }else if(*i7==1){
            *i7=0;
            *i1=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:

           if(*i2==1){
            *i2=0;
            *i4=1;
           }else if(*i3==1){
            *i3=0;
            *i5=1;
           }else if(*i4==1){
            *i4=0;
            *i6=1;
           }else if(*i5==1){
            *i5=0;
            *i8=1;
           }else if(*i1==1){
            *i1=0;
            *i7=1;
           }

            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i8==1){
            *i8=0;
            *i7=1;
           }else if(*i1==1){
            *i1=0;
            *i2=1;
           }else if(*i7==1){
            *i7=0;
            *i6=1;
           }else if(*i2==1){
            *i2=0;
            *i4=1;
           }else if(*i3==1){
            *i3=0;
            *i1=1;
           }else if(*i5==1){
            *i5=0;
            *i3=1;
           }else if(*i4==1){
            *i4=0;
            *i6=1;
           }

           //  printf("Left");
             break;//75 Arrow Left
        case 77:
           if(*i6==1){
            *i6=0;
            *i7=1;
           }else if(*i1==1){
            *i1=0;
            *i3=1;
           }else if(*i7==1){
            *i7=0;
            *i8=1;
           }else if(*i3==1){
            *i3=0;
            *i5=1;
           }else if(*i2==1){
            *i2=0;
            *i1=1;
           }else if(*i4==1){
            *i4=0;
            *i2=1;
           }else if(*i5==1){
            *i5=0;
            *i8=1;
           }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void EditeMvmntCond(int *i0,int *i1,int *i2,int *i3,int *i4,int *i5,int *i6,int *i7){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i2==1){
            *i2=0;
            *i1=1;
           }else  if(*i3==1){
            *i3=0;
            *i2=1;
           }else if(*i4==1){
            *i4=0;
            *i3=1;
           }else if(*i5==1){
            *i5=0;
            *i4=1;
           }else if(*i6 == 1){
            *i6=0;
            *i5=1;
           }else if(*i7==1){
           *i7=0;
           *i6=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*i1==1){
            *i1=0;
            *i2=1;
           }else  if(*i2==1){
            *i2=0;
            *i3=1;
           }else if(*i3==1){
            *i3=0;
            *i4=1;
           }else if(*i4==1){
           *i4 = 0;
           *i5 = 1;
           }else if(*i5==1){
           *i5=0;
           *i6=1;
           }else if(*i6==1){
           *i6=0;
           *i7=1;
           }else if(*i7==1){}
           else if(*i0==1){
              *i0=0;
              *i1=1;
            }
            // printf("Down");
             break;//80 Arrow Down
        }
    }
}

void LineOptionColorMvmntCond(int *i1,int *i2,int *i3,int C1[5],int C2[5],int C3[5],int C4[5],int *s1,int *s2,int *s3,int *s4,int Type){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(C1[4]==1){
            C1[4]=0;
            C1[3]=1;
           }else if(C1[3]==1){
            C1[3]=0;
            C1[2]=1;
           }else if(C1[2]==1){
            C1[2]=0;
            C1[1]=1;
           }else if(C1[1]==1){
            C1[1]=0;
            C1[0]=1;
           }else if(C1[0]==1){
            if(*s1>0){
            *s1-=1;
            }else{
            C1[0]=0;
            *i1=1;
            }
           }else if(C2[4]==1){
            C2[4]=0;
            C2[3]=1;
           }else if(C2[3]==1){
            C2[3]=0;
            C2[2]=1;
           }else if(C2[2]==1){
            C2[2]=0;
            C2[1]=1;
           }else if(C2[1]==1){
            C2[1]=0;
            C2[0]=1;
           }else if(C2[0]==1){
            if(*s2>0){
            *s2-=1;
            }else{
            C2[0]=0;
            *i3=1;
            }
           }else if(C3[4]==1){
            C3[4]=0;
            C3[3]=1;
           }else if(C3[3]==1){
            C3[3]=0;
            C3[2]=1;
           }else if(C3[2]==1){
            C3[2]=0;
            C3[1]=1;
           }else if(C3[1]==1){
            C3[1]=0;
            C3[0]=1;
           }else if(C3[0]==1){
            if(*s3>0){
            *s3-=1;
            }else{
            C3[0]=0;
            *i3=1;
            }
           }else if(C4[4]==1){
            C4[4]=0;
            C4[3]=1;
           }else if(C4[3]==1){
            C4[3]=0;
            C4[2]=1;
           }else if(C4[2]==1){
            C4[2]=0;
            C4[1]=1;
           }else if(C4[1]==1){
            C4[1]=0;
            C4[0]=1;
           }else if(C4[0]==1){
            if(*s4>0){
            *s4-=1;
            }else{
            C4[0]=0;
            *i2=1;
            }
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*i1==1){
            *i1=0;
            C1[0]=1;
           }else if(*i2==1 && (Type == 1 || Type == 3)){
            *i2=0;
            C4[0]=1;
           }else if(C1[0]==1){
            C1[0]=0;
            C1[1]=1;
           }else if(C1[1]==1){
            C1[1]=0;
            C1[2]=1;
           }else if(C1[2]==1){
            C1[2]=0;
            C1[3]=1;
           }else if(C1[3]==1){
            C1[3]=0;
            C1[4]=1;
           }else if(C1[4]==1){
            if(*s1<11){
            *s1+=1;
            }
           }else if(C2[0]==1){
            C2[0]=0;
            C2[1]=1;
           }else if(C2[1]==1){
            C2[1]=0;
            C2[2]=1;
           }else if(C2[2]==1){
            C2[2]=0;
            C2[3]=1;
           }else if(C2[3]==1){
            C2[3]=0;
            C2[4]=1;
           }else if(C2[4]==1){
            if(*s2<11){
            *s2+=1;
            }
           }else  if(C3[0]==1){
            C3[0]=0;
            C3[1]=1;
           }else if(C3[1]==1){
            C3[1]=0;
            C3[2]=1;
           }else if(C3[2]==1){
            C3[2]=0;
            C3[3]=1;
           }else if(C3[3]==1){
            C3[3]=0;
            C3[4]=1;
           }else if(C3[4]==1){
            if(*s3<11){
            *s3+=1;
            }
           }else  if(C4[0]==1){
            C4[0]=0;
            C4[1]=1;
           }else if(C4[1]==1){
            C4[1]=0;
            C4[2]=1;
           }else if(C4[2]==1){
            C4[2]=0;
            C4[3]=1;
           }else if(C4[3]==1){
            C4[3]=0;
            C4[4]=1;
           }else if(C4[4]==1){
            if(*s4<11){
            *s4+=1;
            }
           }else if(*i3==1 && (Type == 1 || Type == 3)){
           *i3=0;
           C2[0]=1;
           }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i2==1){
                *i2=0;
                *i3=1;
            }else if(*i3==1){
                *i3=0;
                *i1=1;
            }else if(C4[0]==1){
                C4[0]=0;
                C3[0]=1;
            }else if(C3[0]==1){
                C3[0]=0;
                C2[0]=1;
            }else if(C2[0]==1){
                C2[0]=0;
                C1[0]=1;
            }else if(C4[1]==1){
                C4[1]=0;
                C3[1]=1;
            }else if(C3[1]==1){
                C3[1]=0;
                C2[1]=1;
            }else if(C2[1]==1){
                C2[1]=0;
                C1[1]=1;
            }else if(C4[2]==1){
                C4[2]=0;
                C3[2]=1;
            }else if(C3[2]==1){
                C3[2]=0;
                C2[2]=1;
            }else if(C2[2]==1){
                C2[2]=0;
                C1[2]=1;
            }else if(C4[3]==1){
                C4[3]=0;
                C3[3]=1;
            }else if(C3[3]==1){
                C3[3]=0;
                C2[3]=1;
            }else if(C2[3]==1){
                C2[3]=0;
                C1[3]=1;
            }else if(C4[4]==1){
                C4[4]=0;
                C3[4]=1;
            }else if(C3[4]==1){
                C3[4]=0;
                C2[4]=1;
            }else if(C2[4]==1){
                C2[4]=0;
                C1[4]=1;
            }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
           if(*i1==1){
            *i1=0;
            *i3=1;
           }else if(*i3==1){
            *i3=0;
            *i2=1;
            }
            if(Type == 1 || Type == 3){
            if(C1[0]==1){
            C1[0]=0;
            C2[0]=1;
           }else if(C2[0]==1){
            C2[0]=0;
            C3[0]=1;
           }else if(C3[0]==1){
            C3[0]=0;
            C4[0]=1;
           }else if(C1[1]==1){
            C1[1]=0;
            C2[1]=1;
           }else if(C2[1]==1){
            C2[1]=0;
            C3[1]=1;
           }else if(C3[1]==1){
            C3[1]=0;
            C4[1]=1;
           }else if(C1[2]==1){
            C1[2]=0;
            C2[2]=1;
           }else if(C2[2]==1){
            C2[2]=0;
            C3[2]=1;
           }else if(C3[2]==1){
            C3[2]=0;
            C4[2]=1;
           }else if(C1[3]==1){
            C1[3]=0;
            C2[3]=1;
           }else if(C2[3]==1){
            C2[3]=0;
            C3[3]=1;
           }else if(C3[3]==1){
            C3[3]=0;
            C4[3]=1;
           }else if(C1[4]==1){
            C1[4]=0;
            C2[4]=1;
           }else if(C2[4]==1){
            C2[4]=0;
            C3[4]=1;
           }else if(C3[4]==1){
            C3[4]=0;
            C4[4]=1;
           }
            }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void CreateUserMvmntCond(int *i0,int *i1,int *i2,int *i3,int *i4,int *i5,int *i6,int *i7,int *i8,int *i9,int *i10,int *i11,int *i12,int *i13,int *i14,int *i15,int *i16){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i16==1){
            *i16=0;
            *i14=1;
           }else if(*i13==1){
               *i13=0;
               *i11=1;
           }else if(*i11==1){
               *i11=0;
               *i7=1;
           }else if(*i7==1){
               *i7=0;
               *i5=1;
           }else if(*i5==1){
               *i5=0;
               *i3=1;
           }else if(*i3==1){
               *i3=0;
               *i1=1;
           }else if(*i15==1){
               *i15=0;
               *i13=1;
           }else if(*i14==1){
               *i14=0;
               *i12=1;
           }else if(*i12==1){
               *i12=0;
               *i9=1;
           }else if(*i10==1){
               *i10=0;
               *i6=1;
           }else if(*i9==1){
               *i9=0;
               *i6=1;
           }else if(*i8==1){
               *i8=0;
               *i6=1;
           }else if(*i6==1){
               *i6=0;
               *i4=1;
           }else if(*i4==1){
               *i4=0;
               *i2=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:

           if(*i0==1){
            *i0=0;
            *i1=1;
           }else if(*i1==1){
            *i1=0;
            *i3=1;
           }else if(*i3==1){
            *i3=0;
            *i5=1;
           }else if(*i5==1){
            *i5=0;
            *i7=1;
           }else if(*i7==1){
            *i7=0;
            *i11=1;
           }else if(*i11==1){
            *i11=0;
            *i13=1;
           }else if(*i13==1){
            *i13=0;
            *i15=1;
           }else if(*i2==1){
            *i2=0;
            *i4=1;
           }else if(*i4==1){
            *i4=0;
            *i6=1;
           }else if(*i6==1){
            *i6=0;
            *i9=1;
           }else if(*i8==1){
            *i8=0;
            *i12=1;
           }else if(*i9==1){
            *i9=0;
            *i12=1;
           }else if(*i10==1){
            *i10=0;
            *i12=1;
           }else if(*i12==1){
            *i12=0;
            *i14=1;
           }else if(*i14==1){
            *i14=0;
            *i16=1;
           }

            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*i2==1){
            *i2=0;
            *i1=1;
           }else if(*i4==1){
            *i4=0;
            *i3=1;
           }else if(*i6==1){
            *i6=0;
            *i5=1;
           }else if(*i8==1){
            *i8=0;
            *i7=1;
           }else if(*i9==1){
            *i9=0;
            *i8=1;
           }else if(*i10==1){
            *i10=0;
            *i9=1;
           }else if(*i12==1){
            *i12=0;
            *i11=1;
           }else if(*i14==1){
            *i14=0;
            *i13=1;
           }else if(*i16==1){
            *i16=0;
            *i15=1;
           }

           //  printf("Left");
             break;//75 Arrow Left
        case 77:
           if(*i0==1){
            *i0=0;
            *i1=1;
           }else if(*i1==1){
            *i1=0;
            *i2=1;
           }else if(*i3==1){
            *i3=0;
            *i4=1;
           }else if(*i5==1){
            *i5=0;
            *i6=1;
           }else if(*i7==1){
            *i7=0;
            *i8=1;
           }else if(*i8==1){
            *i8=0;
            *i9=1;
           }else if(*i9==1){
            *i9=0;
            *i10=1;
           }else if(*i11==1){
            *i11=0;
            *i12=1;
           }else if(*i13==1){
            *i13=0;
            *i14=1;
           }else if(*i15==1){
            *i15=0;
            *i16=1;
           }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void CreateUserMvmntCond1(int *ii1,int *ii2,int *ii3,int *ii4,int *ii5,int *ii6){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*ii6==1){
            *ii6=0;
            *ii3=1;
           }else if(*ii5==1){
            *ii5=0;
            *ii3=1;
           }else if(*ii4==1){
            *ii4=0;
            *ii3=1;
           }else if(*ii3==1){
            *ii3=0;
            *ii2=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
           if(*ii1==1){
            *ii1=0;
            *ii2=1;
           }else if(*ii2==1){
            *ii2=0;
            *ii3=1;
           }else if(*ii3==1){
            *ii3=0;
            *ii5=1;
           }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
            if(*ii6==1){
            *ii6=0;
            *ii5=1;
           }else if(*ii5==1){
            *ii5=0;
            *ii4=1;
           }else if(*ii1==1){
            *ii1=0;
            *ii2=1;
           }else if(*ii3==1){
            *ii3=0;
            *ii4=1;
           }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
            if(*ii1==1){
            *ii1=0;
            *ii2=1;
           }else if(*ii4==1){
            *ii4=0;
            *ii5=1;
           }else if(*ii5==1){
            *ii5=0;
            *ii6=1;
           }else if(*ii3==1){
            *ii3=0;
            *ii6=1;
           }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void AdminMvmntCond(int *i1,int *i2,int *i3,int *i4,int *i5,int *i6){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i4==1){
            *i4=0;
            *i1=1;
           }else if(*i5==1){
           *i5=0;
           *i2=1;
           }else if(*i6==1){
           *i6=0;
           *i3=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
          if(*i1==1){
            *i1=0;
            *i4=1;
          }else if(*i2==1){
          *i2=0;
          *i5=1;
          }else if(*i3==1){
          *i3=0;
          *i6=1;
          }
            // printf("Down");
             break;//80 Arrow Down

        case 75:
          if(*i3==1){
          *i3=0;
          *i2=1;
          }else if(*i2==1){
          *i2=0;
          *i1=1;
          }else if(*i6==1){
          *i6=0;
          *i5=1;
          }else if(*i5==1){
          *i5=0;
          *i4=1;
          }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
          if(*i1==1){
          *i1=0;
          *i2=1;
          }else if(*i2==1){
          *i2=0;
          *i3=1;
          }else if(*i4==1){
          *i4=0;
          *i5=1;
          }else if(*i5==1){
          *i5=0;
          *i6=1;
          }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

void MessageMvmntCond(int *i1,int *i2,int *i3,int *i4,int *i5,int *i6){
if(_kbhit()){
        switch(_getch()){
        case 72:
           if(*i6==1){
            *i6=0;
            *i4=1;
           }else if(*i5==1){
            *i5=0;
            *i4=1;
           }else if(*i4==1){
            *i4=0;
            *i3=1;
           }else if(*i3==1){
            *i3=0;
            *i2=1;
           }else if(*i2==1){
            *i2=0;
            *i1=1;
           }
           // printf("Up");
            break;//72 Arrow UP
        case 80:
          if(*i1==1){
            *i1=0;
            *i2=1;
           }else if(*i2==1){
            *i2=0;
            *i3=1;
           }else if(*i3==1){
            *i3=0;
            *i4=1;
           }else if(*i4==1){
            *i4=0;
            *i6=1;
           }
            // printf("Down");
             break;//80 Arrow Down
        case 75:
          if(*i4==1){
            *i4=0;
            *i5=1;
           }else if(*i6==1){
            *i6=0;
            *i5=1;
           }
           //  printf("Left");
             break;//75 Arrow Left
        case 77:
          if(*i4==1){
            *i4=0;
            *i6=1;
           }else if(*i5==1){
            *i5=0;
            *i6=1;
           }
            // printf("Right");
             break;//77 Arrow Right
        }
    }
}

