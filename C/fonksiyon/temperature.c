#include <stdio.h>
#include <stdlib.h>

float celsius(float fahrenheit){
	return (fahrenheit-32)/1.8;
}
float fahrenheit(float celsius){
	return celsius*1.8+32;
}


int main() {	
	float celsiusder;
	float fahrenheitder;
	
	printf("celsiusu fahrenheit a donusturmek icin deger giriniz...\n");
	scanf("%f",&celsiusder);
	printf("%.2f celsius %.2f fahrenheit a esittir...\n\n",celsiusder,fahrenheit(celsiusder));
	
	printf("fahrenheit i celsius a  donusturmek icin deger giriniz...\n");
	scanf("%f",&fahrenheitder);
	printf("%.2f fahrenheit %.2f celsius a esittir...\n",fahrenheitder,celsius(fahrenheitder));	
	
	return 0;
}
