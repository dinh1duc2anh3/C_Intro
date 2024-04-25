#include <stdio.h>

#define MAX_MONTHS 12
typedef struct Data{
    int rainFall;
    int maxTemp;
    int minTemp;
    float avgTemp = (maxTemp + minTemp) /2;
} Data;

Data weatherData[12];

Data dataInput(){
    printf("nhap")
}



int main(){
    FILE *file;
    char filename[] = "14.2.txt"; // Tên file chứa dữ liệu
    struct Weather yearlyWeather[MAX_MONTHS];

    file = fopen(filename, "r"); // Mở file để đọc
    if (file == NULL) {
        fprintf(stderr, "Khong the mo file %s de doc.\n", filename);
        return 1;
    }

    // Đọc dữ liệu từ file
    for (int i = 0; i < MAX_MONTHS; i++) {
        fscanf(file, "%f %f %f", &yearlyWeather[i].rainfall, &yearlyWeather[i].maxTemp, &yearlyWeather[i].minTemp);
    }

    // Đóng file sau khi đọc xong
    fclose(file);

    // In thông tin thời tiết từ dữ liệu đã đọc
    for (int i = 0; i < MAX_MONTHS; i++) {
        printf("Thang %d:\n", i + 1);
        printf("- Tong luong mua: %.2f mm\n", yearlyWeather[i].rainfall);
        printf("- Nhiet do cao nhat: %.2f do C\n", yearlyWeather[i].maxTemp);
        printf("- Nhiet do thap nhat: %.2f do C\n", yearlyWeather[i].minTemp);
        printf("\n");
    }


    return 0;
}