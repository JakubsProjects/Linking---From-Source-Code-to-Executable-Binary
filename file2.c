
//Jakub Glebocki

#include <stdio.h>


extern int file1Global, file1GlobalArray[19], *file1GlobalPtr,
file1InitGlobal, file1InitGlobalArray[19], *file1InitGlobalPtr;

char file2Hello[] = "Hello", *file2World = "World";
int file2Global, file2GlobalArray[19], *file2GlobalPtr,
file2InitGlobal = 19, file2InitGlobalArray[19] = { 19 },
*file2InitGlobalPtr = &file2InitGlobal;
static int file2StaticGlobal, file2StaticGlobalArray[19],
*file2StaticGlobalPtr,
file2StaticInitGlobal = 19,
file2StaticInitGlobalArray[19] = { 19 },
*file2StaticInitGlobalPtr = &
file2StaticInitGlobal;




static double func3(int   func3_arg1, int  * func3_arg2) {

	int func3Local = 19, func3LocalArray[19], *func3LocalPtr = &func3Local,
		func3InitLocal = 19, func3InitLocalArray[19] = { 19 },
		*func3InitLocalPtr = &func3InitLocal;
	static char func3StaticLocal = 19, func3StaticLocalArray[19],
		*func3StaticLocalPtr = &func3StaticLocal,
		func3StaticInitLocal = 19,
		func3StaticInitLocalArray[19] = { 19 },
		*func3StaticInitLocalPtr = &
		func3StaticInitLocal;

	//printf("\n\n %s %s from func3\n", file2Hello, file2World);



	//file1glbal doesnt add anything
	file2Global = 19;
	file2StaticGlobal = 19;
	//file2InitGlobal = 19;
	file2GlobalPtr = &file1Global;
	file1GlobalPtr = &file1Global;
	file2StaticGlobalPtr = &file1Global;

	//gloval file2
	file2Global = 19;

	double total = 0;

	int a = 0;
	for (a = 0; a < 19; a++) {
		func3LocalArray[a] = 19;
		func3StaticLocalArray[a] = 19;
		file2GlobalArray[a] = 19;
		file2StaticGlobalArray[a] = 19;
		file1GlobalArray[a] = 19;

	}

	int b = 0;
	for (b = 0; b < 19; b++) {

		total = total + func3LocalArray[b] + func3StaticLocalArray[b] + file2GlobalArray[b] + file2StaticGlobalArray[b] + file1GlobalArray[b];
	}



	total = total + func3Local + *func3LocalPtr + func3InitLocal + func3InitLocalArray[0] + *func3InitLocalPtr + (double)func3StaticLocal + (double)*func3StaticLocalPtr + (double)func3StaticInitLocal +
		(double)func3StaticInitLocalArray[0] + (double)*func3StaticInitLocalPtr + *file2GlobalPtr + file2Global + file2InitGlobal + *file2InitGlobalPtr + file2InitGlobalArray[0]
		+ file2StaticInitGlobal + *file2StaticGlobalPtr + file2StaticInitGlobalArray[0] + *file2StaticInitGlobalPtr + file1InitGlobalArray[0] + file1Global + *file1GlobalPtr
		+ file1InitGlobal + *file1InitGlobalPtr + file2StaticGlobal + func3_arg1 + *func3_arg2;

	 printf("\n\n %s %s from func3\n", file2Hello, file2World);

	printf("Total: %lf fun3\n\n", total);

	return total;

}

double func2(int  func2_arg1, int  * func2_arg2) {
	

	int func2Local = 19, func2LocalArray[19], *func2LocalPtr = &func2Local,
		func2InitLocal = 19, func2InitLocalArray[19] = { 19 },
		*func2InitLocalPtr = &func2InitLocal;
	static char func2StaticLocal = 19, func2StaticLocalArray[19],
		*func2StaticLocalPtr = &func2StaticLocal,
		func2StaticInitLocal = 19,
		func2StaticInitLocalArray[19] = { 19 },
		*func2StaticInitLocalPtr = &
		func2StaticInitLocal;

	//printf("\n\n %s %s from func2\n", file2Hello, file2World);



	//file1glbal doesnt add anything
	file2Global = 19;
	file2StaticGlobal = 19;
	//file2InitGlobal = 19;
	file2GlobalPtr = &file1Global;
	file1GlobalPtr = &file1Global;
	file2StaticGlobalPtr = &file1Global;

	//gloval file2
	file2Global = 19;

	double total = 0;

	int a = 0;
	for (a = 0; a < 19; a++) {
		func2LocalArray[a] = 19;
		func2StaticLocalArray[a] = 19;
		file2GlobalArray[a] = 19;
		file2StaticGlobalArray[a] = 19;
		file1GlobalArray[a] = 19;

	}

	int b = 0;
	for (b = 0; b < 19; b++) {

		total = total + func2LocalArray[b] + func2StaticLocalArray[b] + file2GlobalArray[b] + file2StaticGlobalArray[b] + file1GlobalArray[b];
	}


	total = total + func2Local + *func2LocalPtr + func2InitLocal + func2InitLocalArray[0] + *func2InitLocalPtr + (double)func2StaticLocal + (double)*func2StaticLocalPtr + (double)func2StaticInitLocal +
		(double)func2StaticInitLocalArray[0] + (double)*func2StaticInitLocalPtr + *file2GlobalPtr + file2Global + file2InitGlobal + *file2InitGlobalPtr + file2InitGlobalArray[0]
		+ file2StaticInitGlobal + *file2StaticGlobalPtr + file2StaticInitGlobalArray[0] + *file2StaticInitGlobalPtr + file1InitGlobalArray[0] + file1Global + *file1GlobalPtr
		+ file1InitGlobal + *file1InitGlobalPtr + file2StaticGlobal + func2_arg1 + *func2_arg2;

	
	
	double func3Val = func3(file2Global, &file2Global);
	total = total + func3Val;

	printf("\n\n %s %s from func2\n", file2Hello, file2World);
	printf("Total: %lf fun2\n\n", total);
	return total;
}

