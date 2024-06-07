#define  F_CPU 16000000L
#include <avr/io.h>
#include <stdio.h>
#include <avr/delay.h>
// UCSR : 상태 설정
// 'BAUD RATE'를 설정하기 위해선 2개의 레지스터가 필요하다.,(UBRRn(n = H or L), UCSRnC(U2Xn, 2배속 설정))
void initUART0()
{	// 9600
	UBRR0H = 0;
	UBRR0L = 207; // BAUD RATE : 9600 설정(2배속)
	// UBRR0 에서 '0' = UART0 을 뜻한다.
	
	//UCSRnC('n' = A or B or C) 레지스터
	UCSR0A |= 1 << U2X0; // ' U2X0 == 1 == 0000 0010b ', '|' = set을 위한 기법
	UCSR0B |= (1 << RXEN0)|(1 << TXEN0);	
	//RX/TX Enable, 000(RXEN0) (TXEN0)000
	UCSR0C |= 0x06;
	// Data bit(UCSR0C, UCSZ0(1/0): x11x, stop bit : 0xxx
	// 패리티비트(UPM01,UPM00): 00
}

// UDR : 송수신 상태 저장, (TXB/RXB
// UCSR0A(8bit reg), data empty bit Test 블럭
void uPutc(char c)
{
	/*
	while(1) 
	// 아래 조건이 1이 될때 빠져나와라
	{
		if(UCSR0A & (1 << UDRE0) == 1) break;
	}  
	UDR0 = c; // send
	*/
	
	while(!(UCSR0A & (1 << UDRE0)));
	UDR0 = c;
	//생략된 코드와 위 코드는 같다
	
}

// printf의 종류 : printf, fprintf(파일), sprintf(버퍼)

void uPuts(char *str)	// "abcd" 눈으로만보면 abcd만 존재하지만 코드는 "abcd\0(nall)"로 존재한다. 
{
	while(*str) uPutc(*str++);
	/*
	while(1)
	{
		if(*str == 0 ) break;
		uPutc(*str); 
		str++;
	}
	*/
}

unsigned char buf[1024];

void bPrint()
{
	uPuts(buf);
}

int main(void)
{
	initUART0();	//초기화
	char a = '0';
	int i = 0;
	uPuts("ㅎㅇ? 김밥 한줄 ㄱㄱ! @)))))))))))\r\n");	
	// \r = 텍스트를 맨 앞으로 귀환(옛날에나 쓰는 것 이지만 터미널을 사용할때는 위 기능을 수동적으로 넣어줘야함)
	// \n 줄바꿈
    while (1) 
    {
		//uPutc(a++);
		sprintf(buf, "어이! 이건 터미널 출력 테스트다! 조심해!!!!!!!!!!!!! #%d\r\n", i++); bPrint();
		_delay_ms(1000);
		//if (a > '9' ) a = "0"; 
    }
}