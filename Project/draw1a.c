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
printf("Input file : %s\n", path);
char buffer[256];
const char *const keywords[] = {"Image", "lineTo", "End", "print", "draw", "translate", "child", "#"};
int count[8] = {0};  
while(!feof(fp)){
    fscanf(fp,"%s%*[^\n]",buffer);
    for(int i = 0; i < 8; i++) {
        if (strcmp(keywords[i], buffer) == 0){
            count[i]++;
        }
    }
}
for(int j = 0; j < 8; j++) {
    if (j == 1) { 
        printf("%d %s command(s) within Figures\n", count[j], keywords[j]);
    }else if (j == 7) { 
        printf("%d comment(s)\n", count[j]); 
    }else { printf("%d %s command(s)\n", count[j], keywords[j]); 
    }
}

fclose(fp);
return 0;
}

