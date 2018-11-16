#include <stdio.h>
#include <string.h>

int main(){
	int T, people, kinds, limits;
	int i, j;
	int want[20], totalPrice, coffeePrice, coffee;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		printf("Case #%d\n",i+1);
		scanf("%d %d %d",&people, &kinds, &limits);
		memset(want, 0, sizeof(want));
		for(j=0;j<people;j++){
			scanf("%d",&coffee);
			want[coffee-1]++;
		}
		totalPrice=0;
		for(j=0;j<kinds;j++){
			scanf("%d",&coffeePrice);
			totalPrice+=want[j]*coffeePrice;
		}
		if(totalPrice<=limits){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}
	return 0;
}
