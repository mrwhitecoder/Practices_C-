#include<cstdio>

namespace na{
	int num1 = 10;
	
}

void show_record(){
	
	printf("Num1 : %d\n", na::num1);
	
}

void print_record(){
	printf("Num1 : %d\n", na::num1);
	
}

void display_record(){
	printf("Num1 : %d\n", na::num1);
	
}

int main( void ){
	::show_record();
	
	::print_record();
	::display_record();
	return 0;
}