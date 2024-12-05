#include<stdio.h>

int main(){
	int arr[100];
	int currentLength;
	int position;
	int found;
	int choice;
	int giaTri;
	do{
		printf("\n------MENU------\n");
		printf("1. Nhap so phan tu va gia tri cho mang.\n");
		printf("2. In ra gia tri cac phan tu trong mang theo dang arr[0]=1, arr[1]=5...\n");
		printf("3. Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la cac so co tong cac uoc bang chinh no.\n");
		printf("4. Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang.\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien trong mang , phan tu moi them vao va vi tri them vao phai do nguoi dung nhap vao.\n");
		printf("6. Xoa phan tu tai mot vi tri cu the.\n");
		printf("7. Sap xep mang theo thu tu tang dan.\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong.\n");
		printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan duong truoc, so le dung sau.\n");
		printf("10. Dao nguoc thu tu cua cac phan tu co trong mang.\n");
		printf("11.\n----THOAT----\n");
		printf("\nLua chon cua ban la: \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu cua mang.\n");
	 			
	 			if(currentLength <= 0 || currentLength > 100){
	 				printf("So phan tu khong hop le.\n");
	 				currentLength=0;
				 }else{
				 	printf("Gia tri cua mang la: ");
				 	scanf("%d", &currentLength);
				 }
				 break;
	 			
				
			case 2:
				 for(int i=0; i<currentLength; i++){
			 		printf("Phan tu thu arr[%d]: ", i+1);
			 		scanf("%d", &arr[i]);
				 }
				 printf("\n");
				 break;
			 
				 
			case 5:
				printf("Moi ban nhap vi tri muon them vao mang: ");
		 		scanf("%d", &position);
		 		printf("Moi ban nhap gia tri muon them vao mang: ");
		 		scanf("%d", &giaTri);
		 	
		 		if(position < 1 || position > currentLength + 1){
		 			printf("Vi tri khong hop le.\n");
			 }else{
			 		for(int i = currentLength; i >= position; i--){
			 			arr[i]=arr[i-1];
				 }	
				 arr[position-1]= giaTri;
				 currentLength++;
				 printf("\nMang sau khi them vao phan tu la: \n");
				 for(int i=0; i<currentLength; i++){
				 	printf("%d", arr[i]);
				 }
				 printf("\n");
				 break;
			 }
			case 6: 
				fflush(stdin);
		 		printf("Nhap vi tri muon xoa: ");
		 		scanf("%d", &position);
		 	
		 		if(position < 0 || position > currentLength){
		 			printf("Vi tri khong hop le.\n");
			 }else{
			 		for(int i = position - 1; i <= currentLength; i++){
			 			arr[i]= arr[i + 1];
				 }
				 currentLength--;
				 printf("Phan tu da duoc xoa thanh cong.\n");
			 }
			 printf("Mang sau khi duoc xoa la: ");
			 for(int i=0; i<currentLength; i++){
			 	printf("%d", arr[i]);
			 }
			 printf("\n"); 
             break;
             
            case 7:
				fflush(stdin);
				for(int i=0; i<currentLength; i++){
					for(int j=0; j<currentLength; j++){
						if(arr[j] > arr[j + 1]){
							int temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp; 
						} 
					} 
				}
				printf("\n Mang sau khi sap xep tang dan la: \n");
				for(int i=0; i<currentLength; i++){
					printf("%d", arr[i]);
				}
				printf("\n");
				break; 
			case 8:
				int numbers;
		 		printf("Nhap phan tu can tim kiem: ");
		 		scanf("%d", &numbers);
		 	
		 		for(int i=0; i<currentLength; i++){
		 			if(arr[i] == numbers){
		 				printf("Phan tu co trong mang nam o vi tri index thu %d\n: ",i);
		 				found = 1;
		 				break;
				 }
			 }
			 if(found != 1){
			 	printf("Mang khong chua phan tu can tim.\n");
			 	printf("\n");
			 	break;
			 }
			case 11: 
				printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        } 
				
		
				
		}while(choice != 11);
	
	return 0;
}
