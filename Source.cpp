#include <iostream> 
using namespace std; 
int min(int a, int b){
	if (a < b)
	{
		return a; 
	}
	return b;
}
int jumpsearch(int arr[], int sopt, int num){
	// khai bao bc nhay. 
	int step = sqrt(sopt);
	//khai bao bien dem pre. 
	int previous = 0;
	while (arr[min(step, sopt) -1 ] < num)
	{
		previous = step; 
		step += sqrt(sopt);
		if (previous > num)
		{
			return -1; 
		}
	}
	// dung linear seach. 
	while (arr[previous] < num)
	{
		previous++; 
		if (previous == min(step, sopt))
		{
			return -1; 
		}
	}
	if (arr[previous] == num)
	{
		return previous; 
	}
	return -1 ; 
}
int main(){
	int arr[100], i, sopt; 
	cout << "Nhap so phan tu mang: "; cin >> sopt; 
	for (i = 0; i < sopt; i++)
	{
		cin >> arr[i];
	}
	int x; 
	cout << "nhap so can tim: "; cin >> x; 
	int location = jumpsearch(arr, sopt, x); 
	if (location == -1 )
	{
		cout << x << " khong thuoc mang arr" << "\n";
	}
	else
	{
		cout << x << " thuoc mang arr, co vitri la: " << location << "\n";
	}
	return 0; 
}