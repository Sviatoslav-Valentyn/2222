#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.3/Vector3D.h"
#include "../lab 1.3/Vector3D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D z;
			z.Init(2, 3, 6);
			Assert::AreEqual(7., z.VectorLength());
		}
	};
}
