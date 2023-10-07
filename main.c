#include <stdio.h>
#include <stdlib.h>

int firstQ(int trueAnswer) {
	int answer1;
	printf("What does HTML stand for\n1.Hyper Trainer Marking Language \n2.Hyper Text Marketing Language \n3.Hyper Text Markup Language \n4.Hyper Text Markup Leveler\n");
	printf("Answer: ");
	scanf("%d",&answer1);
	if(answer1 == 3){
		printf("You answered correctly\n");
	} else if(answer1 == 1){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 2){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 4){
		printf("Your answer is wrong\n");
	}  else {
		printf("Please choose an option between 1-4\n");
	}
	return trueAnswer;
}


int secondQ(int trueAnswer) {
	int answer1;
	printf("What is correct syntax to outpt hello world in python\n1.print('hello world);\n2.print('hello world')\n3.printer('hello world');\n4.printing('hello world)\n");
	printf("Answer: ");
	scanf("%d",&answer1);
	if(answer1 == 2){
		printf("You answered correctly\n");
	} else if(answer1 == 1){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 2){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 4){
		printf("Your answer is wrong\n");
	}  else {
		printf("Please choose an option between 1-4\n");
	}
	return trueAnswer;
}

int thirdQ(int trueAnswer) {
	int answer1;
	printf("Any c program: \n1.Must contain at least one function\n2.Need not contain any function\n3.Needs input data\n4.None of above\n");
	printf("Answer: ");
	scanf("%d",&answer1);
	if(answer1 == 2){
		printf("You answered correctly\n");
	} else if(answer1 == 1){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 2){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 4){
		printf("Your answer is wrong\n");
	}  else {
		printf("Please choose an option between 1-4\n");
	}
	return trueAnswer;
}


int fourthQ(int trueAnswer) {
	int answer1;
	printf("1st Object Orientd language is_____ \n1.Java\n2.C++\n3.Simula 67\n4.Javascript\n");
	printf("Answer: ");
	scanf("%d",&answer1);
	if(answer1 == 3){
		printf("You answered correctly\n");
	} else if(answer1 == 1){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 2){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 4){
		printf("Your answer is wrong\n");
	}  else {
		printf("Please choose an option between 1-4\n");
	}
	return trueAnswer;
}

int fifthQ(int trueAnswer) {
	int answer1;
	printf("1st ever language used on a electronic compting device \n1.Fortran\n2.Auto-Coden3.Java\n4.Short-code\n");
	printf("Answer: ");
	scanf("%d",&answer1);
	if(answer1 == 2){
		printf("You answered correctly\n");
	} else if(answer1 == 1){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 3){
		printf("Your answer is wrong\n");
	} 
	else if(answer1 == 4){
		printf("Your answer is wrong\n");
	}  else {
		printf("Please choose an option between 1-4\n");
	}
	return trueAnswer;
}


int main() {
	
	int option;
	printf("Welcome to the quiz game.\n");
	printf("You need to answer 5 questions.\n");
	printf("Do you want to start?(1.yes 2.no)\n");
	scanf("%d",&option);
	if(option == 1){
		printf("1. Question is:\n");
		firstQ();
		printf("2. Question is:\n");
		secondQ();
		printf("3. Question is:\n");
		thirdQ();
		printf("4. Question is:\n");
		fourthQ();
		printf("5. Question is:\n");
		fifthQ();
		printf("You finished the test");
	} else if(option == 2) {
		printf("Okay lets not start");
	}
	return 0;
}
