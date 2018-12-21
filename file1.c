
// JAkub Glebocki

#include <stdio.h>
#include "Header.h"
extern int file2Global, file2GlobalArray[19], *file2GlobalPtr, 
file2InitGlobal, file2InitGlobalArray[19], *file2InitGlobalPtr;

char file1Hello[] = "Hello", *file1World = "World";
int file1Global, file1GlobalArray[19], *file1GlobalPtr,
file1InitGlobal = 19, file1InitGlobalArray[19] = { 19 },
*file1InitGlobalPtr = &file1InitGlobal;
static int file1StaticGlobal, file1StaticGlobalArray[19],
*file1StaticGlobalPtr,
file1StaticInitGlobal = 19,
file1StaticInitGlobalArray[19] = { 19 },
*file1StaticInitGlobalPtr = &
file1StaticInitGlobal;




double func1(int func1_arg1, int * func1_arg2) {

	int func1Local = 19, func1LocalArray[19], *func1LocalPtr = &func1Local,
		func1InitLocal = 19, func1InitLocalArray[19] = { 19 },
		*func1InitLocalPtr = &func1InitLocal;
	static char func1StaticLocal = 19, func1StaticLocalArray[19],
		*func1StaticLocalPtr = &func1StaticLocal,
		func1StaticInitLocal = 19,
		func1StaticInitLocalArray[19] = { 19 },
		*func1StaticInitLocalPtr = &
		func1StaticInitLocal;


	//printf(" %s %s from func1\n", file1Hello, file1World);


	file1GlobalPtr = &file1Global;
	file2GlobalPtr = &file1Global;
	file1StaticGlobalPtr = &file1Global;

	//gloval file2
	file2Global = 19;

	double total = 0;

	int a = 0;
	for (a = 0; a < 19; a++) {
		func1LocalArray[a] = 19;
		func1StaticLocalArray[a] = 19;
		file1GlobalArray[a] = 19;
		file1StaticGlobalArray[a] = 19;
		file2GlobalArray[a] = 19;

	}

	int b = 0;
	for (b = 0; b < 19; b++)  {

		total = total + func1LocalArray[b] + func1StaticLocalArray[b] + file1GlobalArray[b] + file1StaticGlobalArray[b] + file2GlobalArray[b];
	}



	total = total + func1Local + *func1LocalPtr + func1InitLocal + func1InitLocalArray[0] + *func1InitLocalPtr + (double)func1StaticLocal + (double)(*func1StaticLocalPtr) + (double)func1StaticInitLocal +
		(double)func1StaticInitLocalArray[0] + (double)*func1StaticInitLocalPtr + *file1GlobalPtr + file1Global + file1InitGlobal + *file1InitGlobalPtr + file1InitGlobalArray[0]
		+ file1StaticInitGlobal + *file1StaticGlobalPtr + file1StaticInitGlobalArray[0] + *file1StaticInitGlobalPtr + file2InitGlobalArray[0] + file2Global + *file2GlobalPtr
		+ file2InitGlobal + *file2InitGlobalPtr + file1StaticGlobal + func1_arg1 + *func1_arg2;

	printf(" %s %s from func1\n", file1Hello, file1World);
	printf("Total: %lf func1", total);

	return total;
}





int main(int argc, char **argv) {

	printf("Jakub Glebocki, jglebo2 \n");


	int mainLocal = 19, mainLocalArray[19], *mainLocalPtr = &mainLocal,
		mainInitLocal = 19, mainInitLocalArray[19] = { 19 },
		*mainInitLocalPtr = &mainInitLocal;
	static char mainStaticLocal = 19, mainStaticLocalArray[19],
		*mainStaticLocalPtr = &mainStaticLocal,
		mainStaticInitLocal = 19,
		mainStaticInitLocalArray[19] = { 19 },
		*mainStaticInitLocalPtr = &
		mainStaticInitLocal;
		
	//printf(" %s %s -From main \n", file1Hello, file1World);



	//file1glbal doesnt add anything
	file1Global = 19;
	file1StaticGlobal = 19;
	//file2InitGlobal = 19;
	file1GlobalPtr = &file1Global;
	file2GlobalPtr = &file1Global;
	file1StaticGlobalPtr = &file1Global;

	//gloval file2/
	file2Global = 19;

	double total = 0;

	int a = 0;
	for(a = 0; a < 19; a++) {
		mainLocalArray[a] = 19;
		mainStaticLocalArray[a] = 19;
		file1GlobalArray[a] = 19;
		file1StaticGlobalArray[a] = 19;
		file2GlobalArray[a] = 19;
		
	}
	
	int b = 0;
	for (b = 0; b < 19; b++) {

		total = total + mainLocalArray[b] + mainStaticLocalArray[b] + file1GlobalArray[b] + file1StaticGlobalArray[b] + file2GlobalArray[b];
	}
		
	
	total = total + mainLocal + *mainLocalPtr + mainInitLocal + mainInitLocalArray[0] + *mainInitLocalPtr + (double)mainStaticLocal + (double)*mainStaticLocalPtr + (double)mainStaticInitLocal +
		(double)mainStaticInitLocalArray[0] + (double)*mainStaticInitLocalPtr + *file1GlobalPtr + file1Global + file1InitGlobal + *file1InitGlobalPtr + file1InitGlobalArray[0]
		+ file1StaticInitGlobal + *file1StaticGlobalPtr + file1StaticInitGlobalArray[0] + *file1StaticInitGlobalPtr + file2InitGlobalArray[0] + file2Global + *file2GlobalPtr
		+ file2InitGlobal + *file2InitGlobalPtr + file1StaticGlobal;

	

	double func1val = func1(file1Global, &file1Global);
	double func2val = func2(file1Global, &file1Global);

	total = total + func1val + func2val;
	
	printf(" %s %s -From main \n", file1Hello, file1World);
	printf("Total: %lf --main\n\n", total);
}



