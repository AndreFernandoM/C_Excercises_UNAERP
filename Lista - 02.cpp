#include <stdio.h>

float media(float x1, float x2, float x3, char letra) {
	float m;
	
	if(letra == 'a' || letra == 'A') {
		m = (x1 + x2 + x3)/3;
		return m;
	}
	else if (letra == 'p' || letra == 'P') {
		m = (x1*5 + x2*3 + x3*2)/10;
		return m;
	}
	else if (letra == 'h' || letra == 'H') {
		m = 3/(1/x1 + 1/x2 + 1/x3);
		return m;
	}
}

int main() {
	float num_1, num_2, num_3;
	char op;
	
	printf("Digite as 3 notas e uma letra: ");
	scanf("%f %f %f %c", &num_1, &num_2, &num_3, &op);
	
	printf("Media: %.2f", media(num_1, num_2, num_3, op));
	
	return 0;
}

