
#include <stdio.h>
#include <string.h>

char *MAKEFILE = "CC=gcc\n"
"FLAGS=-Wall -v -save-temps\n"
"SRC=file.c\n"
"PROG=prog\n"
"\n"
"all: $(SRC)\n"
"	$(CC) $(FLAGS) $(SRC) -o $(PROG)\n"
"clean: prog\n"
"	rm prog\n";


char *CFILE = "#include <stdio.h>\n"
"\n"
"int main (){  \n"
"    return 0;\n"
"}\n";







int main (int argc, char* argv[]){

    if ( strcmp(argv[1], "c" )==0) {
        FILE *fptr;
        printf("Creating %s file\n", argv[1]);
        fptr = fopen("file.c", "w");
        fprintf(fptr, CFILE);
        fclose(fptr);

    } else if ( strcmp(argv[1], "makefile" )==0){
        FILE *fptr;
        printf("Creating %s file\n", argv[1]);
        fptr = fopen("makefile.txt", "w");
        fprintf(fptr, MAKEFILE);
        fclose(fptr);

    }
    


    return 0;
}




