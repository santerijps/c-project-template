build_gcc: bin
	gcc -o bin/gcc_main.exe src/main.c src/validator.c

build_tcc: bin
	tcc -o bin/tcc_main.exe src/main.c src/validator.c

bin:
	mkdir bin
