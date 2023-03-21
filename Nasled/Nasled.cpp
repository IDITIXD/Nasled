using namespace std;
#include <iostream>

class BAZ
{

protected:
	int ab;
	int bb;
public:
	int cb;
public:
	BAZ() { cout << "BAS" << endl; }
	BAZ(int a, int b, int c) { ab = a; bb = b; cb = c; }
	~BAZ() { cout << "~BAZ\n"; }

};
class DER : private BAZ
{
	int ad;
protected:
	int bd;
public:
	int cd;
	DER(int a, int b, int c, int cd, int ad, int bd) {
		cout << "DER" << endl;
		BAZ::ab = a;
		BAZ::bb = b;
		BAZ::cb = c;
		BAZ(a, b, c);
		DER::cd = cd;
		DER::ad = ad;
		DER::bd = bd;
	}
	~DER() { cout << "~DER\n"; }
	int getSum() { return (ab + bb + cb + cd + ad + bd); }
};

void main()
{
	setlocale(0, "");
	DER d(1, 2, 3, 4, 5, 6);
	cout << "Сумма всех элементов = " << d.getSum() << endl;
}
