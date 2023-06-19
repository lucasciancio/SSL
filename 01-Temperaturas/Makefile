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


#### PREGUNTAS ####

# ¿Se supone que ConversionTests.c nunca debe ser modificado?. Porque según estas reglas, si yo modifico
# Conversion.c, ConversionTests.c será recompilado, pero si modifico directamente el ConversionTests.c, se
# corren los tests sin haberlos compilado, ¿no?. Lo mismo pasa con TablasDeConversion.c.
# Entonces, ¿no habría que agregar las partes que dejé comentadas?

