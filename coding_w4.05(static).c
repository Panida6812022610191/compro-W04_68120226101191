#include<stdio.h>

void conutCall() {
    static int counter = 0;                                    //ประกาศค่าแค่ครั้งแรก และคงค่าต่อ
    counter++;                                                // Increment the counter each time the function is called
    printf("Call Function: Counter = %d\n", counter);        // Print the number of times the function has been called

}

int main() {
    printf("Starting function calls...\n");       //printf Identifier
    conutCall();                                    //นับครั้งที่1
    printf("After first call:\n");                //printf Identifier
    conutCall();                                  //นับครั้งที่2
    
    return 0;
 }                                  // การใช้ static การนับ ครั้งแรกจะได้ 1 และครั้งที่สองจะได้ 2 เพราะการนับจะไม่เริ่มใหม่เสมอ แต่จะคงค่าไว้
