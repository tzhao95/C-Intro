#include <cstdlib>
#include "List.h"

using namespace std;

int main(int argc, char** argv) {
	List test;
	test.AddNode(1);
	test.AddNode(2);
	test.PrintList();
}