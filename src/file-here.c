
#include <stdio.h>
#include <string.h>

char *MAKEFILE = "CC=gcc\n"
"FLAGS=-Wall -v -save-temps\n"
"SRC=src/file.c\n"
"PROG=build/prog\n"
"\n"
"all: $(SRC)\n"
"	$(CC) $(FLAGS) $(SRC) -o $(PROG)\n"
"\n"
"init:\n"
"\tmkdir build\n"
"\tmkdir src\n"
"\ttouch README.md\n"
"\n"
"clean:\n"
"\trm build/*\n";


char *CFILE = "#include <stdio.h>\n"
"\n"
"int main (){  \n"
"\treturn 0;\n"
"}\n";



char *PYFILE = "#!/usr/bin/env python3\n"
"import sys\n"
"import os\n"
"\n"
"\n"
"if __name__==\"__main__\":\n"
"\tprint('Hello World')"
"\n";



int main (int argc, char* argv[]){

    if ( strcmp(argv[1], "c" )==0) {
        FILE *fptr;
        /*printf("Creating %s file\n", argv[1]);*/
        fptr = fopen("file.c", "w");
        fprintf(fptr, CFILE);
        fclose(fptr);

    } else if ( strcmp(argv[1], "makefile" )==0){
        FILE *fptr;
        /*printf("Creating %s file\n", argv[1]);*/
        fptr = fopen("Makefile", "w");
        fprintf(fptr, MAKEFILE);
        fclose(fptr);

    } else if ( strcmp(argv[1], "py" )==0){
        FILE *fptr;
        /*printf("Creating %s file\n", argv[1]);*/
        fptr = fopen("file.py", "w");
        fprintf(fptr, PYFILE);
        fclose(fptr);
    }
    


    return 0;
}




