#include<stdio.h>
int main(){
	int arr[100];
	int choice;
	int size;
	int index;
	int check=1;
	int n;
	do{
	   printf("---MENU---\n");
	   printf("1.nhap so phan tu va gia tri cho mang\n");
	   printf("2.in ra cac gia tri cac phan tu trong mang\n");
	   printf("3.so luong cac so hoan hao co trong mang\n");
	   printf("4.gia tri thu 2 trong mang\n");
	   printf("5.them phan tu vao mang\n");
	   printf("6.xoa phan tu\n");
	   printf("7.sap xep mang theo thu tu tang dan\n");
	   printf("8.kiem tra phan tu co ton tai khong\n");
	   printf("9.sap xep mang so le dung truoc,so chan dung sau\n");
	   printf("10.kiem tra mang tang dan hay khong\n");
	   printf("11.thoat chuong trinh\n");
	   printf("moi ban nhap lua chon ");
	   scanf("%d",&choice);
	   switch(choice){
	   	case 1:
	   		printf("moi ban nhap so phan tu cua mang ");
	   		scanf("%d",&size);
	   		printf("moi ban nhap gia tri ");
	   		scanf("%d",&size);
	   		for(int i=0;i<size;i++){
	   			printf("phan tu arr[%d] :",i);
	   			scanf("%d",&arr[i]);
			   }
			   printf("\n");
	   	          break;
	   	 
	   	 case 2:
	   	 	for(int i=0;i<size;i++){
	   	 		printf("%d\t",arr[i]);
				}
				printf("\n");
				    break;
		case 5:
			if(check == 0){
					printf("\nBan chua them phan tu vao mang");
				}
				printf("\nNhap vi tri can them phan tu: ");
				scanf("%d", &index);
				if(index > n){
					printf("\nVi tri ban nhap vuot qua do dai mang");
				}
				else{
					for(int i = n; i >= index; i--){
						arr[i] = arr[i-1];
					}
				}
				scanf("%d", &arr[index]);
				break;
		case 7:
			for(int i = 0;i < size ; i++ ){
        		int key = arr[i];
        		int j = i -1;
        		while ( j>= 0 && arr[j]>=key ){
        			arr[j+1] = arr[j];
        			j = j-1;
				}
				     arr[j+1]=key;
			}
               printf("thu tu tang dan la : ");
          	for(int i = 0;i < size ; i++ ){
          		printf("%d", arr[i]);
			  }
		  printf ("\n");
		     break; 
	 case 8:
	 	 int so,a;
			printf ("nhap phan tu ");
        	scanf("%d",&so);
        	for(int i = 0 ;i < size ;i++){
        		if (so == arr[i]){
        			a=1;
        			break;
				}else{
					a=0;
					 break;
				}
		    }
				if(a==1){
        	   	     printf(" co phan tu trong mang ");
			    }else if( a==0) {
				     printf (" ko co phan tu trong mang ");
		        }
		        printf("\n");
                break;
	    
	    case 11:
	    	printf("\nthoat chuong trinh");
	    	break;
				
	   		
	   			
	   		
			   
	   	        
	   	
	   	
	   	
	   	
	   	
	   }//do while
	   
	
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}while(choice !=11);//do
	
	
	return 0;
}
