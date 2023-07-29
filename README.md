# file-here

Small script for creating a boiler plate code files of different languarges.





# Building


clone the repo, move into the dir
    
    git clone ...
    cd file-here

build the executable and move it to bin

    make
    cp build/file-here ~/bin/



# Useage

To create a basic C project directory, make the top level dir and move into it:

    mkdir project
    cd project

then make a Makefile

    file-here makefile

created Makefile should have init option

    make init

then make C file and python file

    cd src
    make c
    make py




 



