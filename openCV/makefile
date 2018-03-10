#all: main run
all: second detect prog run
#all: second detect prog debug
#all: run
#all: test2

RM=rm
SEC_Path=../Recognition/

CFLAGS = `pkg-config --cflags opencv`
LIBS = `pkg-config --libs opencv`
SETTING=$(CFLAGS)$(LIBS)

PROGRAM=prog

run:
	./prog
	
prog: videoFaceDetection.o main.o
	g++  $(SETTING) videoFaceDetection.o main.o -o $(PROGRAM)

main: main.cpp
	g++ $(SETTING) main.cpp -o $(PROGRAM)


second: $(SEC_Path)videoFaceDetection.hpp $(SEC_Path)videoFaceDetection.cpp 
	g++ $(SETTING) -c $(SEC_Path)videoFaceDetection.cpp

detect: main.cpp 
	g++ $(SETTING) -c main.cpp
	
# shell commands
test:
	@if [ -f main.cpp ]; \
		then echo "is working"; \
		else echo "no no no"; \
	fi;

test2:
ifeq (,$(wildcard ./glob.c))
	@echo "is working"
else
	@echo "no no no"
endif
