#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SPREV 0
#define BASIC 0
#define FPREV 1
#define MORED 1
#define CURRENT 2
#define AVERAGE 3


int backtomainmenu(void);
void func1(void);
void func2(int plan, int text[], int voice[], float data[], float extradata[]);
void func3(int voice[], int text[], float data[]);
void func4(int plan, int voice[], int text[], float data[], float extradata[], int fee[], int rec_fee[]);
void func5(int plan, int voice[], int text[], float data[], float extradata[], int fee[], int rec_fee[]);
void extradataCalc(int plan, float data[], float extradata[]);
void feeCalc(int plan, int voice[], int text[], float data[], float extradata[], int fee[], int rec_fee[]);

int main(){
    
    //define variables
    int plan;
    int text[4] = {0};
    int voice[4] = {0};
    int fee[3] = {0};
    float data[4] = {0};
    float extradata[3];
    int rec_fee[2];
    
    //randomize when program initialized
    srand((unsigned)time(NULL));
    plan = rand()%2;
    
    for(int i = 0; i<2; i++) {
        text[i] = rand()%301;
        voice[i] = rand()%700 + 1;
        data[i] = (rand()%14951 + 50)/100;
    }
    
    //first AVERAGE
    for(int i = 0; i < AVERAGE; i++){
        voice[AVERAGE] += voice[i];
        text[AVERAGE] += text[i];
        data[AVERAGE] += data[i];
    }
    
    voice[AVERAGE] /= 3;
    text[AVERAGE] /= 3;
    data[AVERAGE] /= 3;
    
    //GUI start
    while(1){

        //Main Menu
        int intinput;
        
        system("cls");
        printf("┌─────────────────────────────────────────────────┐ \n");
        printf("│          KU Mobile Phone Bill Calculator        │ \n");
        printf("├─────────────────────────────────────────────────┤ \n");
        printf("│    1 : Display plans                            │ \n");
        printf("│    2 : Usage information for past two months    │ \n");
        printf("│    3 : Input this month usage                   │ \n");
        printf("│    4 : Total fee for past 3 months              │ \n");
        printf("│    5 : Best plan recommendation                 │ \n");
        printf("│    6 : Exit                                     │ \n");
        printf("└─────────────────────────────────────────────────┘ \n");
        
        scanf("%d", &intinput);

        switch(intinput){
            case 1:
                func1();
                continue;
                break;
                
            case 2:
                func2(plan, text, voice, data, extradata);
                continue;
                break;
                
            case 3:
                func3(voice, text, data);
                continue;
                break;
                
                case 4:
                func4(plan, voice, text, data, extradata, fee, rec_fee);
                continue;
                break;
                
            case 5:
                func5(plan, voice, text, data, extradata, fee, rec_fee);
                continue;
                break;
                
            case 6:
                break;
                
            default:
                continue;
                break;
        }
        
        break;
        
    }
    return 0;
}

void func1(){
    do{
    system("cls");
    printf("┌─────────────────────────────────────────────────┐ \n");
    printf("│                   Basic Plan                    │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│   Included in plan    │    Additional usages    │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│ Voice     │ 500m free   │ w 50 / 1m             │ \n");
    printf("│ Text      │ 100t free   │ w 10 / 1t             │ \n");
    printf("│ Data      │ 2.00GB free │ w 1000 / 0.1GB        │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│ Basic fee │ w 20000                             │ \n");
    printf("└─────────────────────────────────────────────────┘ \n\n");
    
    printf("┌─────────────────────────────────────────────────┐ \n");
    printf("│                 More Data Plan                  │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│   Included in plan    │    Additional usages    │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│ Voice     │ 300m free   │ w 10 / 1m             │ \n");
    printf("│ Text      │ 100t free   │ w 30 / 1t             │ \n");
    printf("│ Data      │ 30.00GB free │ w 500 / 0.1GB        │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│ Basic fee │ w 45000                             │ \n");
    printf("└─────────────────────────────────────────────────┘ \n");
    
    }while(backtomainmenu());
}

void func2(int plan, int text[], int voice[], float data[], float extradata[]){
    //Usage information for past two months
    do{
    system("cls");
    printf("┌─────────────────────────────────────────────────┐ \n");
    printf("│             Last two months usage               │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    
    if(plan == 0){
        printf("│   My Plan : Basic Plan                          │ \n");
    }
    else{
        printf("│   My Plan : More Data Plan                      │ \n");
    }
    
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│           │     February     │      March       │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│ Voice     │     %5d min    │    %5d min     │ \n", voice[SPREV], voice[FPREV]);
    printf("│ Text      │     %5d text   │    %5d text    │ \n", text[SPREV], text[FPREV]);
    printf("│ Data      │    %6.2f GB     │   %6.2f GB      │ \n", data[SPREV], data[FPREV]);
    printf("└─────────────────────────────────────────────────┘ \n");
    
    }while(backtomainmenu());
}

void func3(int voice[], int text[], float data[]){
//Input this month usage
    system("cls");
    printf("================================\n");
    printf("Input your usages of voice : ");
    scanf("%d", &voice[CURRENT]);
    printf("Input your usages of text : ");
    scanf("%d", &text[CURRENT]);
    printf("Input your usages of data : ");
    scanf("%f", &data[CURRENT]);

        voice[AVERAGE] = 0;
        text[AVERAGE] = 0;
        data[AVERAGE] = 0;
        
    for(int i = 0; i < AVERAGE; i++){
        voice[AVERAGE] += voice[i];
        text[AVERAGE] += text[i];
        data[AVERAGE] += data[i];
    }
    
    voice[AVERAGE] /= 3;
    text[AVERAGE] /= 3;
    data[AVERAGE] /= 3;
    
    while(backtomainmenu()){
        system("cls");
        printf("================================\n");
        printf("Input your usages of voice : %d\n", voice[CURRENT]);
        printf("Input your usages of text : %d\n", text[CURRENT]);
        printf("Input your usages of data : %.2f\n", data[CURRENT]);
    } // 이거 그대로 떠야댐
}

void func3_print(int voice[], int text[], float data[]){
    do{
    system("cls");
    printf("================================\n");
    printf("Input your usages of voice : %d\n", voice[CURRENT]);
    printf("Input your usages of text : %d\n", text[CURRENT]);
    printf("Input your usages of data : %f\n", data[CURRENT]);
    
    }while(backtomainmenu());
}

void func4(int plan, int voice[], int text[], float data[], float extradata[], int fee[], int rec_fee[]){
    
    do{
        
    extradataCalc(plan, data, extradata);
    feeCalc(plan, voice, text, data, extradata, fee, rec_fee);
    
    // Total fee for past 3 months
    system("cls");
    printf("┌─────────────────────────────────────────────────────────────────────┐ \n");
    printf("│                      My three months usage                          │ \n");
    printf("├─────────────────────────────────────────────────────────────────────┤ \n");
    
    if(plan == BASIC){
        printf("│ My Plan : Basic Plan                                                │ \n");
    }
    else{
        printf("│ My Plan : More Data Plan                                            │ \n");
    }
    
    printf("├─────────────────────────────────────────────────────────────────────┤ \n");
    printf("│            │     February     │      March       │      April       │ \n");
    printf("├─────────────────────────────────────────────────────────────────────┤ \n");
    printf("│ Voice      │     %5d min    │    %5d min     │    %5d min     │ \n", voice[SPREV], voice[FPREV], voice[CURRENT]);
    printf("│ Text       │     %5d text   │    %5d text    │    %5d text    │ \n", text[SPREV], text[FPREV], text[CURRENT]);
    printf("│ Data       │    %6.2f GB     │   %6.2f GB      │   %6.2f GB      │ \n", data[SPREV], data[FPREV], data[CURRENT]);
    printf("├─────────────────────────────────────────────────────────────────────┤ \n");
    printf("│ Extra Data │    %6.2f GB     │   %6.2f GB      │   %6.2f GB      │ \n", extradata[SPREV], extradata[FPREV], extradata[CURRENT]);
    printf("├─────────────────────────────────────────────────────────────────────┤ \n");
    printf("│ Total Fee  │   w %10d   │   w %10d   │   w %10d   │ \n", fee[SPREV], fee[FPREV], fee[CURRENT]);
    printf("└─────────────────────────────────────────────────────────────────────┘ \n");
    
    } while (backtomainmenu());
}

void func5(int plan, int voice[], int text[], float data[], float extradata[], int fee[], int rec_fee[]){
    
    do{
    
    feeCalc(plan, voice, text, data, extradata, fee, rec_fee);
    
    system("cls");
    printf("┌─────────────────────────────────────────────────┐ \n");
    printf("│            Average usage of 3-month             │ \n");
    printf("├─────────────────────────────────────────────────┤ \n");
    
    if(plan == BASIC){
        printf("│   My Plan : Basic Plan                          │ \n");
    }
    else{
        printf("│   My Plan : More Data Plan                      │ \n");
    }
    
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│ Average usage of voice :     %3d                │ \n", voice[AVERAGE]);
    printf("│ Average usage of text :      %3d                │ \n", text[AVERAGE]);
    printf("│ Average usage of data :   %6.2f                │ \n", data[AVERAGE]);
    printf("├─────────────────────────────────────────────────┤ \n");
    printf("│ Basic Plan Fee :       w %5d                  │ \n", rec_fee[BASIC]);
    printf("│ More Data Plan Fee :   w %5d                  │ \n", rec_fee[MORED]);
    printf("├─────────────────────────────────────────────────┤ \n");
    
    if(rec_fee[BASIC] < rec_fee[MORED]){
        printf("│ We recommend to use Basic Plan                  │ \n");
    }
    else{
        printf("│ We recommend to use More Data Plan              │ \n");
    }
    
    printf("└─────────────────────────────────────────────────┘ \n");
    
    } while (backtomainmenu());
    
}

int backtomainmenu(void){
    char input = 0;
    printf("Back to main menu Y/N : ");
    scanf(" %c", &input);
    if(input != 'Y'){
        return 1;
    }
    return 0;
}

void extradataCalc(int plan, float data[], float extradata[]){
    if(plan == BASIC){
        for(int i = 0; i <= CURRENT; i++){
            extradata[i] = 2.00 - data[i];
            if(extradata[i] < 0){
                extradata[i] = 0;
            }
            else if(extradata[i] > 0.20){
                extradata[i] = 0.20;
            }
        }
    }
    else{
        for(int i = 0; i <= CURRENT; i++){
            extradata[i] = 30.00 - data[i];
            if(extradata[i] < 0){
                extradata[i] = 0;
            }
            else if(extradata[i] > 3.00){
                extradata[i] = 3.00;
            }
        }
    }
}

void feeCalc(int plan, int voice[], int text[], float data[], float extradata[], int fee[], int rec_fee[]){
    if(plan == BASIC){
        for(int i = 0; i <= CURRENT; i++){
            fee[i] = 20000;
            if (voice[i] > 500){
                fee[i] += (voice[i] - 500) * 50;
            }
            if (text[i] > 100){
                fee[i] += (text[i] - 100) * 10;
            }
            if (data[i] - (i > 0 ? extradata[i-1] : 0)> 2.00){
                fee[i] += (int)(10*((data[i] -(i>0 ? extradata[i-1] : 0)- 2.00))) * 1000;
            }
        }
    }
    else{
      for(int i = 0; i<= CURRENT; i++){
        fee[i] = 45000;
        if(voice[i] > 300){
          fee[i] += (voice[i] - 300) * 10;
        }
        if(text[i] > 100){
          fee[i] += (text[i] - 100) * 30;
        }
          if(data[i] - (i > 0 ? extradata[i-1] : 0) > 30.00){
          fee[i] += (int)(10*((data[i] -(i>0 ? extradata[i-1] : 0) - 30.00))) * 500;
        }
      }
    }

    rec_fee[BASIC] = 20000;
    rec_fee[MORED] = 45000;
    if(voice[AVERAGE] > 300){
      if(voice[AVERAGE] > 500) rec_fee[BASIC] += (voice[AVERAGE] - 500) * 50;
      rec_fee[MORED] += (voice[AVERAGE] - 100) * 10;
    }
    if(text[AVERAGE] > 100){
      rec_fee[BASIC] += (text[AVERAGE] - 100) * 10;
      rec_fee[MORED] += (text[AVERAGE] - 100) * 30;
    }
    if(data[AVERAGE] > 2.00){
      rec_fee[BASIC] += (int)(10*(data[AVERAGE] - 2.00)) * 1000;
      if(data[AVERAGE] > 30.00) rec_fee[MORED] += (int)(10*(data[AVERAGE] - 30.00)) * 500;
    }
}
    
    
    

