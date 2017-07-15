#include <iostream>
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif
	void myfunction();

#ifdef __cplusplus
}
#endif


int main()
{
	myfunction();
	return 0;
}