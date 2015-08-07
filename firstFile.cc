#include<iostream>
#include<algorithm>

int main(int cnt, char* args[])
{
	if(cnt > 1){
		std::cout << cnt <<" params were passed and they are : \n";
		std::for_each(std::begin(args),std::end(args+cnt),
			[](decltype(args[0]) &param){
										std::cout <<"lambda\n";
										std::cout << param;
									});
	}
}