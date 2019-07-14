#include <stdio.h>
#include <string.h>

void find_single_line(char *input_file, char *output_file){
    
    // int ln: line number at which Korea University is found
    // char line[]: string buffer containing the line

    FILE *in = fopen(input_file, "r");
    FILE *out = fopen(output_file, "w");

    int ln = 0;
    char linetmp[200];
    char line[200];
    char *ptr;
    char chk1[] = "Korea";
    char chk2[] = "University";

    if(in != NULL){
        while(fgets(line, 200, in)){
            strcpy(linetmp, line);
            ln++;
            ptr = strtok(linetmp, " \n");

            while(ptr){
                if(!strcmp(chk1, ptr)){
                    ptr = strtok(NULL, " \n");
                    if(!strcmp(chk2, ptr)){
                        fprintf(out, "At %d: %s", ln, line);
                        break;
                    }
                }
                ptr = strtok(NULL, " \n");
            }
        }

        fclose(in);
    }
    else{
        printf("Failed to access the file!\n");
    }
    fclose(out);
}

void find_divided_lines(char *input_file, char *output_file){
    FILE *in = fopen(input_file, "r");
    FILE *out = fopen(output_file, "w");

    int ln = 0;
    char linetmp[200];
    char nextlinetmp[200];
    char nextline[200];
    char line[200];
    char *ptr, *ptr2;
    char chk1[] = "Korea\n";
    char chk2[] = "University";

    if(in != NULL){
        while(fgets(line, 200, in)){
            strcpy(linetmp, line);
            ln++;
            ptr = strtok(linetmp, " ");
            while(ptr){
                if(!strcmp(ptr, chk1)){
                    FILE *tmp = in;
                    fgets(nextline, 200, in);
                    strcpy(nextlinetmp, nextline);
                    ptr2 = strtok(nextlinetmp, " ");
                    if(!strcmp(ptr2, chk2)){
                        fprintf(out, "At %d, %d: %s %s", ln, ln+1, line, nextline);
                    }
                    in = tmp;
                    break;
                }
                ptr = strtok(NULL, " ");
            }
        }

        fclose(in);
    }
    else{
        printf("Failed to access the file!\n");
    }
    fclose(out);
}

int main(){
    char input_file[] = "topuniv.txt";
    char output1_file[] = "output1.txt";
    char output2_file[] = "output2.txt";
    find_single_line(input_file, output1_file);
    find_divided_lines(input_file, output2_file);

    return 0;
}
