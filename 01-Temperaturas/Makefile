all: ConversionTests.exe Tablas.exe

ConversionTests.exe: Conversion.o ConversionTests.o
	gcc ConversionTests.c Conversion.o -o ConversionTests
	./ConversionTests.exe

Conversion.o: Conversion.c
	gcc -c Conversion.c -o Conversion.o

Tablas.exe: Conversion.o TablasDeConversion.o
	gcc TablasDeConversion.c Conversion.o -o Tablas.exe

TablasDeConversion.o: TablasDeConversion.c
	gcc -c TablasDeConversion.c -o TablasDeConversion.o

clean:
	rm -rf Tablas.exe ConversionTests.exe *.o















## REGLA 1

target: prerequisites
	comando


## REGLA 2


## REGLA 3
