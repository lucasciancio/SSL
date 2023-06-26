all: tests tablas

tests: ConversionTests
	./ ConversionTests

ConversionTests: Conversion.o #ConversionTests.o
	gcc ConversionTests.c Conversion.o -o ConversionTests

Conversion.o: Conversion.c
	gcc -c Conversion.c -o Conversion.o

#ConversionTests.o: ConversionTests.c
#	gcc -c ConversionTests.c -o ConversionTests.o

tablas: Conversion.o #TablasDeConversion.o
	gcc TablasDeConversion.c Conversion.o -o tablas

#TablasDeConversion.o: TablasDeConversion.c
#	gcc -c TablasDeConversion.c -o TablasDeConversion.o

clean:
	rm -rf tablas ConversionTests *.o


#
