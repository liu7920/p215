#include <iostream>
#include <string>
using namespace std;
#include "CoffeeVendingMachine.h"

void CoffeeVendingMachine::run(){
	int i;

	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while(1){
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기, 6:종료) >> " << endl;
		cin >> i;

		if(i==1){
			if(this->tong[0].getSize() < 1 || this->tong[1].getSize() < 1){
				cout << "원료가 부족합니다." << endl;
			}
			else{
				cout << "에스프레소 드세요" << endl;
				selectEpresso();
			}
		}
		else if(i==2){
			if(this->tong[0].getSize() < 1 || this->tong[1].getSize() < 2){
				cout << "원료가 부족합니다." << endl;
			}
			else{
				cout << "아메리카노 드세요" << endl;
				selectAmericano();
			}
		}
		else if(i==3){
			if(this->tong[0].getSize() < 1 || this->tong[1].getSize() < 2 || this->tong[2].getSize() < 1){
				cout << "원료가 부족합니다." << endl;
			}
			else{
				cout << "설탕커피 드세요" << endl;
				selectSugarCoffee();
			}
		}
		else if(i==4){
			show();
		}
		else if(i==5){
			fill();
			show();
		}
		else if(i==6){
			cout << ">>종료<<" << endl;
			break;
		}
		else{
			cout << ">>잘못된 입력<<" << endl;
		}
	}
}
void CoffeeVendingMachine::fill(){

	for(int i=0;i<3;i++){
		this->tong[i].fill();
	}

}
void CoffeeVendingMachine::selectEpresso(){

	this->tong[0].consum();
	this->tong[1].consum();

}
void CoffeeVendingMachine::selectAmericano(){

	this->tong[0].consum();
	this->tong[1].consum();
	this->tong[1].consum();

}
void CoffeeVendingMachine::selectSugarCoffee(){

	this->tong[0].consum();
	this->tong[1].consum();
	this->tong[1].consum();
	this->tong[2].consum();

}
void CoffeeVendingMachine::show(){
	cout << "커피 " << this->tong[0].getSize() << " 물 " << this->tong[1].getSize() << " 설탕 " << this->tong[2].getSize() << endl;
}
