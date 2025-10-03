/*name:frankline moni
ADM:PA106/G/28937/25
	DESCRIPTION:displaying of data purchased by customers
*/

#include<stdio.h>

main(){
	
	int choice;
	
	printf("1. 100mbs@50\n2. 500mbs@200\n3. 1GB@350\n4. 2GB@600");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
		printf("100mbs@50");
		break;	
	
	case 2:
		printf("500mbs@20");
		break;
	
	case 3:
		printf("1gb@350");
		break;
	
	case 4:
		printf("2GB@600");
		break;
	default:
	 printf("invalid");
	}

	
	
	
	
	return 0;

}
