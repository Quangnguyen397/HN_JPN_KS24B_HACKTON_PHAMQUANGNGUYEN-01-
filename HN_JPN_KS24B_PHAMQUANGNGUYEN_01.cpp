#include  <stdio.h>
int main(){
	int choice,size,Sohoanhao;
	int arr[100];
	int phanTuMoi;
	do{
		printf("\n\tMENU\n");
		printf("1.nhap phan tu va gia tri\n");
		printf("2.in ra cac gia tri trong mang\n");
		printf("3.so luong so hoan hao\n");
		printf("4.gia tri nho thu 2 trong mang\n");
		printf("5.them phan tu vao vi tri dau tien cua mang\n");
		printf("6.xoa phan tu tai vi tri : \n");
		printf("7.sap xep mang theo thu tu tang dan\n");
		printf("8.tim kiem phan tu trong mang\n");
		printf("9.sap xep va hien thi (so le dung truoc, so chan dung sau)\n");
		printf("10.dao nguoc thu tu cac phan tu va in ra toan bo mang\n");
		printf("11.thoat\n");		
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("kich thuoc mang : ");
				scanf("%d",&size);
				
				for(int i=0;i<size;i++){
					printf("arr[%d]: ",i);
					scanf("%d",&arr[i]);
				}
			break;	
			case 2:
				for(int i=0;i<size;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
			break;
			case 3:
			    for (int i=0;i<size;i++) {
			        int sum=0; 
			        for (int j=1;j<=arr[i]/2;j++) { //check xem co phai so hoan hao khong
			            if (arr[i]%j == 0) {
			                sum += j; 
			            }
			        }
			        if (sum==arr[i]&&arr[i]>1) {
			          Sohoanhao++; 
			        }
			    }
			    printf("so luong so hoan hao la : %d",Sohoanhao);
			break;
			case 11: 
				printf("Thoat khoi chuong trinh\n");
			break;
			default:
				printf("Vui long lua chon lai\n");
		}
	}while(choice!=11);
	return 0;
}
