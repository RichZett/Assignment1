# Set the source files that make up the library
set(Assignment1Lib
 assignment1.h assignment1.c
)
# Set the library type (can be static or dynamic )
set(LIB_TYPE STATIC)

# Create the library
add_library (Assignment1Lib ${LIB_TYPE} ${Assignment1Lib})
