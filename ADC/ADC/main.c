#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

int main(void)
{
	int read;
	
	ADC_init(0);	//AD 변환기 초기화
	
    while (1) 
    {
		read = read_ADC();	//가변저항 읽기
    }
	return 0;	
}

void ADC_init(unsigned char channel)
{
	ADMUX |= (1 << REFS0);	// '0100 0000', '<<' = 시프트하라 ,AVCC 를 기준 전압으로 선택
	
	ADCSRA |= 0x07;	//분주비 설정
	ADCSRA |= (1 << ADEN);	//ADC 활성화
	ADCSRA |= (1 << ADFR);	// 프리러닝모드
	
	ADMUX = ((ADMUX & 0xE0) | channel);	//채널 선택
	ADCSRA |= (1 << ADSC);	//변환시작
}

int read_ADC(void)
{
	while(!(ADCSRA & (1 << ADIF)));	// 변환종료 대기
	
	return ADC;	// 10비트 값을 반환
}
// good