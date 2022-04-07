#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Vector3D::Init(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector3D::Read()
{
	int xx, yy, zz;
	cout << "x = ";
	cin >> xx;
	cout << endl;
	cout << "y = ";
	cin >> yy;
	cout << endl;
	cout << "z = ";
	cin >> zz;
	Init(xx, yy, zz);
	cout << endl;
}

void Vector3D::Display()
{
	cout << endl;
	cout << "[ " << x << " , " << y << " , " << z << " ]" << endl;
	cout << endl;
}

//переназвати---------------------------------------------------
Vector3D Vector3D::ScalMultiplay(int value)
{
	Vector3D a;

	a.x = this->x * value;
	a.y = this->y * value;
	a.z = this->z * value;

	return a;
}

double Vector3D::VectorLength()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

string Vector3D::toString()
{
	stringstream sout;

	sout << "x = " << x << " , y = " << y << " , z = " << z << endl;

	return sout.str();
}


bool Equal(Vector3D l, Vector3D r)
{
	return l.VectorLength() == r.VectorLength();
}

bool NEqual(Vector3D l, Vector3D r)
{
	return !(l.VectorLength() == r.VectorLength());
}

bool Compare(Vector3D l, Vector3D r)
{
	return (l.x == r.x && l.y == r.y && l.z == r.z);
}

//все переназвати----------------------------------------------------------------------------

bool Less(Vector3D l, Vector3D r)
{
	return l.VectorLength() < r.VectorLength();
}

bool NLess(Vector3D l, Vector3D r)
{
	return !(l.VectorLength() < r.VectorLength());
}

bool Greate(Vector3D l, Vector3D r)
{
	return l.VectorLength() > r.VectorLength();
}

bool NGreate(Vector3D l, Vector3D r)
{
	return !(l.VectorLength() > r.VectorLength());
}