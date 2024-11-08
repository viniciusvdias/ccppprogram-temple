# parametro padrao: arquivo de entrada
input = tests/input.txt
cppfile = src/alg1.cpp

# compilador
CC = g++

# regra default: obter o executável
all: compile

# compilação
compile: $(cppfile).bin

$(cppfile).bin: $(cppfile)
	$(CC) $(cppfile) -o $(cppfile).bin

# executa o algoritmo
run: $(cppfile).bin
	./$(cppfile).bin < $(input)

# remove os arquivos objetos e os executáveis
clean:
	rm -f $(cppfile).bin
