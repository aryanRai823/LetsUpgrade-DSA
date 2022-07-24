#include <iostream>
using namespace std;

int main(){



//				(Q 1)
//         -------------------------
	cout << "Question 1 (Pyramid with stars)--> " << endl;
	cout<<endl;
	int n;
	cout << "Enter the number of rows = ";
	cin >> n;
	int x = 1;
	for (int i = 1; i < n; i++){
		for (int j = 0; j < n-i; j++){
			cout << "  ";
		}
		for (int j = 0; j < x; j++){
			cout << "* ";		
		}
		x += 2;
		cout << endl;
	}
	
	cout << "-----------------------------------------------------"<<endl;
	cout << endl;



//				(Q 2)
//         ----------------------
	cout << "Question 2 (Half pyraamid with numbers)--> " << endl;
	cout<<endl;
	cout << "Enter the number of rows = ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	
	cout << "-----------------------------------------------------"<<endl;
	cout << endl;



//				(Q 3)
//         ----------------------
	cout << "Question 3 (Hollow rectangle)--> " << endl;
	cout<<endl;
	int m;
	cout << "Enter the number of rows = ";
	cin >> n;
	cout << "Enter  the number of columns = ";
	cin >> m;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
        }
        cout << endl;
    }



    return 0;
}