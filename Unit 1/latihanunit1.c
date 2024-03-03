#include <stdio.h>

float jarak, kecepatan, waktu;
float masukanjarak, masukankecepatan, masukanwaktu;

float hitungkecepatan(float s, float t){
    return s/t;
}

float hitungjarak(float v, float t){
    return v*t;
}

float hitungwaktu(float s, float v){
    return s/v;
}

int main(){
    scanf("%f %f\n", &masukanjarak, &masukanwaktu);
    kecepatan = hitungkecepatan(masukanjarak, masukanwaktu);
    scanf("%f %f\n", &masukankecepatan, &masukanwaktu);
    jarak = hitungjarak(masukankecepatan, masukanwaktu);
    scanf("%f %f", &masukanjarak, &masukankecepatan);
    waktu = hitungwaktu(masukanjarak, masukankecepatan);

    printf("%.2f\n", kecepatan);
    printf("%.2f\n", jarak);
    printf("%.2f", waktu);
}
