.PHONY: all clean

CC=g++
OBJ_DIR=./obj
HEADERS=-I.
DEBUG=-g -ggdb
WALL=-Wall -W
CFLAGS=$(WALL) $(DEBUG)
L_CC=$(CC) $(CFLAGS) $(HEADERS)

C_SRC=${wildcard *.cpp}
C_OBJ=$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(C_SRC)) #目标文件
C_EXE=a.out

all:prepare $(C_EXE)

prepare:
	@if [ ! -d $(OBJ_DIR)  ];then mkdir $(OBJ_DIR); fi

$(C_EXE):$(C_OBJ)
	$(L_CC) $^ -o $@ -lgtest -lgtest_main -lgmock -lgmock_main -lpthread

$(OBJ_DIR)/%.o:%.cpp
	$(L_CC) -c $< -o $@

clean:
	@-rm -f $(C_EXE)
	@-rm -rf $(OBJ_DIR)
