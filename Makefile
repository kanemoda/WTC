OBJ= ./build/compiler.o ./build/cprocess.o ./build/helpers/buffer.o ./build/helpers/vector.o
INC= -I./

all: ${OBJ}
	gcc main.c ${INC} ${OBJ} -g -o ./main

./build/compiler.o: ./compiler.c
	gcc ./compiler.c ${INC} -o ./build/compiler.o -g -c

./build/cprocess.o: ./cprocess.c
	gcc ./cprocess.c ${INC} -o ./build/cprocess.o -g -c

./build/helpers/buffer.o: ./helpers/buffer.c
	gcc ./helpers/buffer.c ${INC} -o ./build/helpers/buffer.o -g -c

./build/helpers/vector.o: ./helpers/vector.c
	gcc ./helpers/vector.c ${INC} -o ./build/helpers/vector.o -g -c

clean:
	rm ./main
	rm -rf ${OBJ}