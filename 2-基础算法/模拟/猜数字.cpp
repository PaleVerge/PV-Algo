#include<stdio.h>
#include<iostream>
#include<ctime>

int main(){
	srand(time(0));
	int secretNumber=rand()%100+1;
	int guess;
	int attempts=0;
	
	std::cout<<"猜数字游戏！"<<std::endl;
	do{
	    std::cout<<"请输入你的猜测：";
		std::cin>>guess;
		attempts++;
		if(guess>secretNumber){
			std::cout<<"太大了！"<<std::endl;
		}else if(guess<secretNumber){
			std::cout<<"太小了！"<<std::endl;
		}else{
			std::cout<<"恭喜你，猜对了！"<<std::endl;
			std::cout<<"你用了"<<attempts<<"次尝试"<<std::endl;
		}
	}while(guess !=secretNumber);
	return 0;
	getchar();
}
