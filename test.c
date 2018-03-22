#include "fatorial.h"
#include "simplegrade.h"


int main(int argc, char ** argv){
	DESCRIBE("Teste da função de cálculo de fatorial");

	WHEN("Testando com valores que dão erro");
	IF("Valor é negativo");
	THEN("Deve retornar -1");
	isEqual(fatorial(-1),-1,1);
	isEqual(fatorial(-50),-1,1);

	IF("Valor é zero");
	THEN("Deve retornar -1");
	isEqual(fatorial(0),-1,1);


	WHEN("Testando com valores que devem dar resultado");
	IF("Valor é positivo e resultado menor que maior inteiro positivo");
	THEN("Deve retornar resultado");
	isEqual(fatorial(1),1,1);
	isEqual(fatorial(3),6,1);
	isEqual(fatorial(5),120,1);
	isEqual(fatorial(10),3628800,1);

	GRADEME();

	if (grade==maxgrade)
		return 0;
	else return grade;

}
