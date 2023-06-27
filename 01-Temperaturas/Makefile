all: tests tablas

tests: ConversionTests
	./ConversionTests

ConversionTests: Conversion.o
	gcc ConversionTests.c Conversion.o -o ConversionTests

Conversion.o: Conversion.c
	gcc -c Conversion.c -o Conversion.o

tablas: Conversion.o
	gcc TablasDeConversion.c Conversion.o -o tablas

clean:
	rm -rf tablas ConversionTests *.o
