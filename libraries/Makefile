# Dummy (fixed) Makefile ever
# just for illustration, don't do like that in real life :)
# author: dloubach

.phony: lib
lib:
	@echo Creating the object file for my lib and .a library
	gcc -c libmine.c -o libmine.o
	ar rcs libmine.a libmine.o


.phony: main
main:
	@echo Creating the object file for the main
	gcc -c main-lib.c -o main-lib.o


.phony: final
final:
	@echo Putting thinks together
	gcc main-lib.o -L. -lmine -o main-lib


all: lib main final
	@echo If we reach this far, without problems, we are done


.phony: clean
clean:
	@echo Deleting intermediate files AND executable
	rm *.o
	rm *.a
	rm main-lib
