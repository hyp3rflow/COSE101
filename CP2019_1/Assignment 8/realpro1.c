#include <stdio.h>

#define AVE 0
#define MED 1
#define TMP 2

int cnt = 0;
typedef struct class_grade{
  char name[30];
  int student_id;
  int attendance;
  int midterm_exam;
  int final_exam;
  int assignment;
  int term_project;
  int total_score;
}Grade;

typedef struct class_report{
  int attendance;
  int midterm_exam;
  int final_exam;
  int assignment;
  int term_project;
  int total_score;
}Report;

void func1(Grade cgd[]);
void func2(Grade cgd[]);
void func3(Grade cgd[], Report rep[]);
void func4(Grade cgd[]);
void median(Grade cgd[], Report rep[]);

int main(){

  int input = 0;
  Grade cgd[79];
  Report rep[2]; 

  while(input != 5){
    system("cls");

    printf("  COSE101 Grade Management System\n");
    printf("===================================\n");
    printf("1. View Registered Student\n");
    printf("2. Add Student\n");
    printf("3. Class Report\n");
    printf("4. View Final Grade\n");
    printf("5. Exit\n\n");
    printf("===================================\n");
    printf("Select Menu : ");

    scanf("%d", &input);

    switch(input){
      case 1:
        system("cls");
        func1(cgd);
        continue;
        break;

      case 2:
        system("cls");
        func2(cgd);
        continue;
        break;

      case 3:
        system("cls");
        func3(cgd, rep);
        continue;
        break;

      case 4:
        system("cls");
        func4(cgd);
        continue;
        break;
      
      case 5:
        return 0;
        break;

      default:
        continue;
        break;
    }
  }
}

void func1(Grade cgd[]){
  printf("================================\n");
  printf("       Registered Student\n");
  printf("================================\n");
  if(!cnt){
    printf("There are no registered students\n");
  }
  else{
    for(int i = 0; i < cnt; i++){
      printf("%d\t%s\n", cgd[i].student_id, cgd[i].name);
    }
  }
  printf("================================\n");
  int input = 0;
  while(input != 1) {
    printf("Enter 1 to Go Back : ");
    scanf("%d", &input);
  }
}

void func2(Grade cgd[]){
  printf("================================\n");
  printf("Student Name : ");
  scanf("%s", cgd[cnt].name);
  printf("Stduent ID : ");
  scanf("%d", &cgd[cnt].student_id);
  printf("Attendance (0 ~ 10) : ");
  scanf("%d", &cgd[cnt].attendance);
  printf("Assignment (0 ~ 10) : ");
  scanf("%d", &cgd[cnt].assignment);
  printf("Midterm Exam (0 ~ 30) : ");
  scanf("%d", &cgd[cnt].midterm_exam);
  printf("Final Exam (0 ~ 30) : ");
  scanf("%d", &cgd[cnt].final_exam);
  printf("Term Project (0 ~ 20) : ");
  scanf("%d", &cgd[cnt].term_project);

  cgd[cnt].total_score = 0;
  cgd[cnt].total_score += cgd[cnt].attendance + cgd[cnt].assignment + cgd[cnt].midterm_exam + cgd[cnt].final_exam + cgd[cnt].term_project;
  
  cnt++;

  printf("================================\n");
  int input = 0;
  while(input != 1) {
    printf("Enter 1 to Go Back : ");
    scanf("%d", &input);
  }
}

void func3(Grade cgd[], Report rep[]){
  for(int i = AVE; i <= MED; i++){
    rep[i].attendance = 0;
    rep[i].assignment = 0;
    rep[i].midterm_exam = 0;
    rep[i].final_exam = 0;
    rep[i].term_project = 0;
    rep[i].total_score = 0;
  }

  for(int i=0; i<cnt; i++){
    rep[AVE].attendance += cgd[i].attendance;
    rep[AVE].assignment += cgd[i].assignment;
    rep[AVE].midterm_exam += cgd[i].midterm_exam;
    rep[AVE].final_exam += cgd[i].final_exam;
    rep[AVE].term_project += cgd[i].term_project;
    rep[AVE].total_score += cgd[i].total_score;
  }

  rep[AVE].attendance /= cnt;
  rep[AVE].assignment /= cnt;
  rep[AVE].midterm_exam /= cnt;
  rep[AVE].final_exam /= cnt;
  rep[AVE].term_project /= cnt;
  rep[AVE].total_score /= cnt;

  median(cgd, rep);

  printf("         Class report\n");  
  printf("================================\n");
  printf(" Field        Average | Median\n");
  printf("================================\n");
  printf("Attendance   :    %3d |    %3d\n", rep[AVE].attendance, rep[MED].attendance);
  printf("Assignment   :    %3d |    %3d\n", rep[AVE].assignment, rep[MED].assignment);
  printf("Midterm      :    %3d |    %3d\n", rep[AVE].midterm_exam, rep[MED].midterm_exam);
  printf("Final        :    %3d |    %3d\n", rep[AVE].final_exam, rep[MED].final_exam);
  printf("Term Project :    %3d |    %3d\n", rep[AVE].term_project, rep[MED].term_project);
  printf("Total        :    %3d |    %3d\n", rep[AVE].total_score, rep[MED].total_score);
  printf("================================\n");
}

void func4(Grade cgd[]){ 
  printf("================================\n");
  printf("         Final Grade\n");
  printf("================================\n");
  printf("StudentID    Total Score   Grade\n");
  for(int i=0; i<cnt; i++){
    printf("%9d    %2d            ", cgd[i].student_id, cgd[i].total_score);
    if(cgd[i].total_score >= 90){
      printf("A");
    }
    else if(cgd[i].total_score >= 80){
      printf("B");
    }
    else if(cgd[i].total_score >= 70){
      printf("C");
    }
    else{
      printf("D");
    }
    printf("\n");
  }
  printf("================================\n");
  
  int input = 0;
  while(input != 1) {
    printf("Enter 1 to Go Back : ");
    scanf("%d", &input);
  }
}

void median(Grade cgd[], Report rep[]){
  Grade tmp[79];
  for(int i = 0; i < cnt; i++){
    tmp[i].attendance = cgd[i].attendance;
    tmp[i].assignment = cgd[i].assignment;
    tmp[i].midterm_exam = cgd[i].midterm_exam;
    tmp[i].final_exam = cgd[i].final_exam;
    tmp[i].term_project = cgd[i].term_project;
    tmp[i].total_score = cgd[i].total_score;
  }
  for(int j=0; j<cnt-1; j++){
    for(int i=0; i<cnt-1; i++){
      if(tmp[i].attendance > tmp[i+1].attendance){
        int tmpnum = tmp[i].attendance;
        tmp[i].attendance = tmp[i+1].attendance;
        tmp[i+1].attendance = tmpnum;
      }
      if(tmp[i].assignment > tmp[i+1].assignment){
        int tmpnum = tmp[i].assignment;
        tmp[i].assignment = tmp[i+1].assignment;
        tmp[i+1].assignment = tmpnum;
      }
      if(tmp[i].midterm_exam > tmp[i+1].midterm_exam){
        int tmpnum = tmp[i].midterm_exam;
        tmp[i].midterm_exam = tmp[i+1].midterm_exam;
        tmp[i+1].midterm_exam = tmpnum;
      }
      if(tmp[i].final_exam > tmp[i+1].final_exam){
        int tmpnum = tmp[i].final_exam;
        tmp[i].final_exam = tmp[i+1].final_exam;
        tmp[i+1].final_exam = tmpnum;
      }
      if(tmp[i].total_score > tmp[i+1].total_score){
        int tmpnum = tmp[i].total_score;
        tmp[i].total_score = tmp[i+1].total_score;
        tmp[i+1].total_score = tmpnum;
      }
    }
  }

  int medcnt = (cnt-1)/2;

  if((cnt-1)%2){
    rep[MED].attendance = (tmp[medcnt].attendance + tmp[medcnt+1].attendance) / 2;
    rep[MED].assignment = (tmp[medcnt].assignment + tmp[medcnt+1].assignment) / 2;
    rep[MED].midterm_exam = (tmp[medcnt].midterm_exam + tmp[medcnt+1].midterm_exam) / 2;
    rep[MED].final_exam = (tmp[medcnt].final_exam + tmp[medcnt+1].final_exam) / 2;
    rep[MED].total_score = (tmp[medcnt].total_score + tmp[medcnt+1].total_score) / 2;
  }
  else{
    rep[MED].attendance = tmp[medcnt].attendance;
    rep[MED].assignment = tmp[medcnt].assignment;
    rep[MED].midterm_exam = tmp[medcnt].midterm_exam;
    rep[MED].final_exam = tmp[medcnt].final_exam;
    rep[MED].total_score = tmp[medcnt].total_score;
  }
}
