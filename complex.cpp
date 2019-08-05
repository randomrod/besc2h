#include <iostream>

using namespace std;

class complex {
	private:
		int real;
		int img;
	
	public:
		complex() {
		}
		
		complex(int x) {
			real = x;
			img = 0;
		}
		
		complex(int x, int y) {
			real = x;
			img = y;
		}
		
		void display() {
			cout << real << " + " << img << "i" << endl;
		}
		
		void add(complex z1, complex z2) {
			real = z1.real + z2.real;
			img = z1.img + z2.img;
		}
		
		void mul(complex z1, complex z2) {
			real = z1.real*z2.real - z1.img*z2.img;
			img = z1.real*z2.img + z2.real*z1.img;
		}
};

int main() {
	complex z1, z2, z3;
	z1 = complex(1, 2);
	z2 = complex(2);
	
	z1.display();
	z2.display();
	
	z3.add(z1, z2);
	z3.display();
}
