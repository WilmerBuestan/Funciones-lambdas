#include "pch.h"
#include "CppUnitTest.h"
#include "../Lambda/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			lambda1();
			cout << "Numeros Pares" << endl;
			lambda2();
			lambda3();
			lambda4();
		}
	};
}
