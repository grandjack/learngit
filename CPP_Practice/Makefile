CC		:= g++
TAR		:= test
CXXFLAGS	:= -Wall -g
SRC		:= $(wildcard *.cc)
OBJ		:= $(patsubst %.cc,%.o,$(SRC))

$(TAR) : $(OBJ)
	$(CC) -o $(TAR) $(OBJ)

.PHONY : clean

clean:
	@rm -fr *.o
	@rm -fr $(TAR)
	@rm -fr *~

