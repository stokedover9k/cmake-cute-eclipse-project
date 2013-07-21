#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"

void thisIsATest() {
	ASSERTM("start writing tests", false);	
}

void anotherTest() {
	ASSERT(true);
}

void runSuite(){
	cute::suite s;
	//TODO add your test here
	s.push_back(CUTE(thisIsATest));
	s.push_back(CUTE(anotherTest));
	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "The Suite");
}

int main(){
    runSuite();
    return 0;
}



