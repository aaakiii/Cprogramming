#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

char const *path = argv[1];
printf("%s started on ",argv[0]);
fflush(stdout);
system("date");
FILE *fp;
fp = fopen("inputfile.1", "r");
printf("Input file : ./inputfile.1\n");
char buffer[256];
int image_count;
int end_count;
int lineto_count;
int print_count;
int draw_count;
int translate_count;
int child_count;
int com_count;
while(fgets(buffer, 256, fp) != NULL){
        fscanf(fp, "%s", buffer);
        printf("%s\n", buffer);
        if(strcmp(buffer,"Image") == 0){
            image_count++;
        }else if(strcmp(buffer, "lineTo") == 0){
            lineto_count++;
        }else if(strcmp(buffer, "End") == 0){
            end_count++;
        }else if(strcmp(buffer, "print") == 0){
            print_count++;
        }else if(strcmp(buffer, "draw") == 0){
            draw_count++;
        }else if(strcmp(buffer, "translate") == 0){
            translate_count++;
        }else if(strcmp(buffer, "child") == 0){
            child_count++;
        }else if(strcmp(buffer, "#") == 0){
            com_count++;
        }
}
printf("%d Image definition(s)\n", image_count);
printf("%d lineto command(s)\n", lineto_count);
printf("%d End command(s)\n", end_count);
printf("%d print command(s)\n", print_count);
printf("%d draw command(s)\n", draw_count);
printf("%d translate command(s)\n", translate_count);
printf("%d child command(s)\n", child_count);
printf("%d comment(s)\n", com_count);
fclose(fp);
return 0;
}
