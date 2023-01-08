/***************************************
* EECS2031M – Lab3 *
* Author: Li, Bryan *
* Email: bryan712@my.yorku.ca *
* eecs_username: bryan712 *
* York Student #: 216426744
****************************************/
#include <stdio.h>

float fun_IF(int, char, float);
float fun_FF(float, char, float);
float fun_II(int, char, int);


main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;
 
 float a = 9/2;
 float b = 9*1.0/2;  // force 9 to be converted before /
 float c = 9/2*1.0;  // force 2 to be converted before /, but not working
 float c2 = 9/(2*1.0); // force 2 to be converted before /  
 float d = (float)9/2;  // cast 9 before /
 float e =  9/(float)2; // cast 2 before /
 float f = (float) (9/2); // cast after /, not working
 printf("9/2=%f  9*1.0/2=%f  9/2*1.0=%f   9/(2*1.0)=%f\n\n", a, b, c, c2);
 printf("(float)9/2=%f  9/(float)2=%f  (float)(9/2)=%f\n\n", d, e, f);
  
 // conversion in arithemetic
 printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n\n", 3.0*9/2/4, 9/2*3.0/4, 9/2*3.0/4);
 
 // conversion in assignment
 float f2  = 3.96;
 float f3 = 3.03;
 int i = f2; int j = f3;
 printf("i: %d  j: %d\n", i, j);

 //---------------------------------------
// .....
    i = 1;
	char op;
	f = 0;
	printf("Enter operand_1 operator operand_2 separated by blanks>");
	scanf("%d %c %f", &i, &op, &f);

	while(i != -1 && f != -1){
		printf("Your input '%d %c %f' results in\n%f (fun_IF)\n%f (fun_II)\n%f (fun_FF)\n\n",i,op,f, fun_IF(i,op,f),fun_II(i,op,f),fun_FF(i,op,f));
		printf("Enter operand_1 operator operand_2 separated by blanks>");
		scanf("%d %c %f", &i, &op, &f);
	}	
	return 0;
}
 

float fun_IF(int op1, char op, float op2){
	if(op == '+'){
		return op1 + op2;
	}
	else if(op == '-'){
		return op1 - op2;
	}
	else if(op == '*'){
		return op1 * op2;
	}
	else if(op == '/'){
		return op1 / op2;
	}
	return 0;
}

float fun_II(int op1, char op, int op2){
	if(op == '+'){
		return op1 + op2;
	}
	else if(op == '-'){
		return op1 - op2;
	}
	else if(op == '*'){
		return op1 * op2;
	}
	else if(op == '/'){
		return op1 / op2;
	}
}

float fun_FF(float op1, char op, float op2){
	if(op == '+'){
		return op1 + op2;
	}
	else if(op == '-'){
		return op1 - op2;
	}
	else if(op == '*'){
		return op1 * op2;
	}
	else if(op == '/'){
		return op1 / op2;
	}
}
