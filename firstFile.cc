#include<iostream>
#include<algorithm>

int main(int cnt, char* args[])
{
	if(cnt > 1){
		std::cout << cnt <<" params were passed and they are : \n";
		std::for_each(args,args+cnt,
			[](decltype(args[0]) &param){
				std::cout << param<<'\n';
			});
	}
}