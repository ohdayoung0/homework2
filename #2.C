#include <stdio.h> // <stdio.h> 라이브러리를 포한한다는 뜻이다.
int main() // main함수를 시작한다.
{
    printf("----오다영 2023041090----\n");
 char charType; // 문자형 변수 charType을 선언한다.
 int integerType; // 정수형 변수 intergerType을 선언한다.
 float floatType; // 실수형 변수 floatType를 선언한다.
 double doubleType; // 실수형 변수(float보다는 범위가 넓은) doubleType를 선언한다.
 //초기화되지 않은 포인터의 값은 쓰레이값이다.

//각 변수가 가지는 데이터 타입의 크기를 알고 싶어서 만든 프로그램.
 printf("Size of char: %ld byte\n",sizeof(charType)); //charType의 데이터 크기를 byte단위로 출력한다.
 printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType의 데이터 크기를 byte단위로 출력한다.
 printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType의 데이터 크기를 byte단위로 출력한다.
 printf("Size of double: %ld bytes\n",sizeof(doubleType)); //doubleType의 데이터 크기를 byte단위로 출력한다.
 printf("-----------------------------------------\n"); // 구분선이다.(가독성이 좋게 하기 위해서 밑 코드와 구분될 수 있게 표시해준다.)
 printf("Size of char: %ld byte\n",sizeof(char)); // char 타입의 크기를 byte 단위로 출력한다.
 printf("Size of int: %ld bytes\n",sizeof(int)); // int 타입의 크기를 byte 단위로 출력한다.
 printf("Size of float: %ld bytes\n",sizeof(float)); // float 타입의 크기를 byte 단위로 출력한다.
 printf("Size of double: %ld bytes\n",sizeof(double)); // double 타입의 크기를 byte 단위로 출력한다.
 printf("-----------------------------------------\n"); // 구분선이다.(가독성이 좋게 하기 위해서 밑 코드와 구분될 수 있게 표시해준다.)
 printf("Size of char*: %ld byte\n",sizeof(char*)); // char 포인터의 크기를 byte 단위로 출력한다.
 printf("Size of int*: %ld bytes\n",sizeof(int*)); // int 포인터의 크기를 byte 단위로 출력한다.
 printf("Size of float*: %ld bytes\n",sizeof(float*)); // float 포인터의 크기를 byte 단위로 출력한다.
 printf("Size of double*: %ld bytes\n",sizeof(double*)); // double 포인터의 크기를 byte 단위로 출력한다.
 return 0; // main함수가 종료되고 0값을 반환한다.
}

#include <stdio.h> // <stdio.h> 라이브러리를 포한한다는 뜻이다.
int main() // main함수를 시작한다.
{
int i; // 정수형 변수 i를 선언한다.
int *ptr; // 정수형 포인터 변수 ptr를 선언한다.
int **dptr; // 정수형 이중 포인터 변수 dptr을 선언한다.
//초기화되지 않은 포인터의 값은 쓰레이값이다.

i = 1234; // 변수 i에 값 1234f를 할당한다.(i에 값 1234이 저장된다.)
printf("[checking values before ptr = &i] \n"); // 현재 변수의 값을 확인하기 위해 표시하는 말
// 뒤에 ptr의 주소를 i에 할당, ptr의 주소를 dptr에 할당할 건데, 할당 전 후의 차이를 알아보기 위함이다.

printf("value of i == %d\n", i); // 변수 i의 값을 출력한다.
printf("address of i == %p\n", &i); // 변수 i의 주소를 출력한다.
printf("value of ptr == %p\n", ptr); // 포인터 ptr이 가리키는 주소(i의 주소)값을 출력한다.
printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소를 출력한다.
ptr = &i; /* ptr is now holding the address of i */
//포인터 ptr에 변수 i의 주소를 할당한다는 뜻

printf("\n[checking values after ptr = &i] \n"); // 현재 변수의 값을 확인하기 위해 표시하는 말
printf("value of i == %d\n", i); // 변수 i의 값을 출력한다.
printf("address of i == %p\n", &i); // 변수 i의 주소를 출력한다.
printf("value of ptr == %p\n", ptr); // 포인터 ptr이 가리키는 주소(i의 주소)값을 출력한다.
printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소를 출력한다.
printf("value of *ptr == %d\n", *ptr); // 포인터 ptr이 가리키는 주소에 저장된 값(i의 값)을 출력한다.
dptr = &ptr; /* dptr is now holding the address of ptr */
//이중 포인터 dptr에 포인터 ptr의 주소를 할당한다는 뜻

printf("\n[checking values after dptr = &ptr] \n"); // 현재 변수의 값을 확인하기 위해 표시하는 말
printf("value of i == %d\n", i); // 변수 i의 값을 출력한다.
printf("address of i == %p\n", &i); // 변수 i의 주소를 출력한다.
printf("value of ptr == %p\n", ptr); // 포인터 ptr이 가리키는 주소(i의 주소)값을 출력한다.
printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소를 출력한다.
printf("value of *ptr == %d\n", *ptr); // 포인터 ptr이 가리키는 주소에 저장된 값(i의 값)을 출력한다.
printf("value of dptr == %p\n", dptr); // 이중 포인터 dptr이 가리키는 주소(ptr의 주소)값을 출력한다.
printf("address of dptr == %p\n", &dptr); // 이중 포인터 dptr의 주소를 출력한다.
printf("value of *dptr == %p\n", *dptr); // 이중 포인터 dptr이 가리키는 주소에 저장된 값(ptr의 값)을 출력한다.
printf("value of **dptr == %d\n", **dptr); // 이중 포인터 dptr이 가리키는 주소에 저장된 값이 가리키는 값(i의 값)을 출력한다.
*ptr = 7777; /* changing the value of *ptr */
//ptr의 값을 7777로 바꾸겠다는 뜻

printf("\n[after *ptr = 7777] \n"); // ptr의 값이 7777로 바뀐 후의 변화를 알아보기 위함
printf("value of i == %d\n", i); // 변수 i의 값을 출력한다.
printf("value of *ptr == %d\n", *ptr); // 포인터 ptr이 가리키는 주소에 저장된 값(i의 값)을 출력한다.
printf("value of **dptr == %d\n", **dptr); // 이중 포인터 dptr이 가리키는 주소에 저장된 값이 가리키는 값(i의 값)을 출력한다.
**dptr = 8888; /* changing the value of **dptr */ 
//dptr의 값을 8888로 바꾸겠다는 뜻

printf("\n[after **dptr = 8888] \n"); // dptr의 값이 8888로 바뀐 후의 변화를 알아보기 위함
printf("value of i == %d\n", i); // 변수 i의 값을 출력합니다.
printf("value of *ptr == %d\n", *ptr); // 포인터 ptr이 가리키는 주소에 저장된 값(i의 값)을 출력한다.
printf("value of **dptr == %d\n", **dptr); // 이중 포인터 dptr이 가리키는 주소에 저장된 값이 가리키는 값(i의 값)을 출력한다.
return 0; // main함수가 종료되고 0값을 반환한다.
}