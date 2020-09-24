#include<iostream>
#include"Summ.h"
#include"Dif.h"
#include"Mult.h"

using namespace std;

int main(){
	int a,b;
	cout<<"Enter a -> ";cin>>a;
	cout<<"Enter b -> ";cin>>b;
	Summ(a,b);
	Dif(a,b);
	Mult(a,b);
	system("Pause");
}

