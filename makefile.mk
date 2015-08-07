Target = image.exe
TargetDir = bin

SRC = firstFile.cc 

$(OBJS) : $(SRC)
	$(CC) -c $(SRC) $(FLAGS)

OBJS = firstFile.o
OBJDIR = objs

CC = g++-4.9

FLAGS = -std=c++11 -Wall -W -Wextra -pedantic 

#image File
$(Target) : $(OBJS)
	$(CC) -o $(TargetDir)/$(Target) $(OBJS) $(FLAGS)



clean :
	rm $(TargetDir)/*.*
clean_extra : 
	rm $(OBJDIR)/*.o

build : $(Target)