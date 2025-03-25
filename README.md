C-language:
    Arrays/ Vectors
        - There is no vectors only arrays. The array is
          initialized by the type they contain. 
    
    Bool 
        - There is no bool naturally. Could maybe be added with a library or you could return a condition. The value will be 1 if true and 0 if false.       


GitHub:
    ---- Most used ----
    add
    commit ==> when youve done changes (not included things from other branches)
    push
    -------------------

    checkout ==> jump between branches
    log
    -b ==> branch
    reset --hard ==> remove all unsaved changes

Lecture:
    Makefiles

        - Ex: doc.o file
        - % means all

    Intro to the CMake build system
        CMake is designed to be a generator to create 
        various Makefiles. It is very helpful in larger projects. 

        - 3 step workflow (see slides)

        - Use common line

        - Understand example on the slide 30!


Terminal commands:

    gcc filename.c ==> compile the file filename.c

    ll  ==> list items in file
    -S  ==> source
    .   ==> this file 
    -B  ==> build
    -gui ==> graphical

VSC
    cmd + shift + p --> Search format doc. 

Makefiles
    Creates instructions for the compiler 
    1. Create file "CMakeList.txt" in working directory.
    2. Define the CMakeList.txt. 
        OBS! The following  will be wrong until 3. 
        -----------------------------------------
        In the file add: 
        cmake_minimum_required(VERSION 3.20)
        project(Assignment1 VERSION 1.0)
        add_executable(exec assignment1.c test.c)
        -----------------------------------------
    3. Create folder "build" in the working directory with mkdir in terminal.
    4. Enter the folder "build".
    5. Return with cmake, write "cmake .." in terminal.
    6. Compile it with "make" in terminal.
    7. Re-enter the "build" folder. Run ./exec 