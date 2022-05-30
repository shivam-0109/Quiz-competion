#include <stdio.h>

int main()
{
	int age1,age2,age3;
	printf("Emter the elder age first :-");
	scanf("%d %d %d",&age1,&age2,&age3);
	int a=0,b=0;
	if(age1==age2){
		a++;
	}else if(age2=age3){
		b++;

	}else{
		printf("All age are differnet , Hence elder one get more amount ");
	}
	int p1,p2,p3;
	printf("Enter the reward get by all 3 :- ");
	scanf("%d %d %d",&p1,&p2,&p3);
	if(a==1){
		if(p1==p2 & p2>p3){
			printf("Fair distrinution");
		}else{
			printf("Unfair disatribution");
		}
	}else if(b==1){
		if(p2==p3 & p1>p2){
			printf("Fair distribution");
		}else{
			printf("Unfair disatribution");
		}

	}else if(p1>p2 && p2>p3){
		printf("Fair distrubtion");
	}else {
		printf("Unfair distrinution");
	}
  return 0;
}
