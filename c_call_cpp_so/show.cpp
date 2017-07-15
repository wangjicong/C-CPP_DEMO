#include <iostream>

using namespace std;

void myfunction()
{
		cout <<"this is from cpp so"<<endl;
}

#ifdef __cplusplus
extern "C" {  
#endif

  void m_myfunction()
  {
    myfunction();
  }

#ifdef __cplusplus
}
#endif