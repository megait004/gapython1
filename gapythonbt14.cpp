#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a ;
	int sum =0;
	if(a%2!=0){
		cout << " toi khong tinh tong le bye bye ";
	}
	if(a%2==0){		// nếu là số chẵn thì mới thực hiện câu lệnh bên dưới 
		for(int i=0;i<=a;i++){
			if(i%2!=0){ 	// nếu mà i là số lẻ thì continue bỏ qua các giá tị lẻ 
			continue;
		}
			sum+=i; // hcir tính tổng chăn 
		}
		cout << sum;
	}

	return 0;
}