#include <stdio.h>
#define MAX_MONTHS 12  

// Khai báo cấu trúc Weather để lưu thông tin thời tiết
struct Weather {
    float rainfall;   // Tổng lượng mưa
    float maxTemp;     // Nhiệt độ cao nhất
    float minTemp;     // Nhiệt độ thấp nhất
};

int main() {
    // Mảng 12 phần tử để lưu thông tin thời tiết của các tháng
    struct Weather yearlyWeather[12];

    



    FILE *file;
    char filename[] = "14.2.txt"; // Tên file chứa dữ liệu

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


    // Tính toán và in ra tổng lượng mưa, lượng mưa trung bình, nhiệt độ cao nhất và thấp nhất trong năm
    float totalRainfall = 0;
    float maxTemp = yearlyWeather[0].maxTemp;
    float minTemp = yearlyWeather[0].minTemp;

    for (int i = 0; i < MAX_MONTHS; i++) {
        totalRainfall += yearlyWeather[i].rainfall;

        if (yearlyWeather[i].maxTemp > maxTemp) {
            maxTemp = yearlyWeather[i].maxTemp;
        }

        if (yearlyWeather[i].minTemp < minTemp) {
            minTemp = yearlyWeather[i].minTemp;
        }
    }

    float avgRainfall = totalRainfall / MAX_MONTHS;

    printf("\nThong tin thoi tiet trong nam:\n");
    printf("Tong luong mua: %.2f mm\n", totalRainfall);
    printf("Luong mua trung binh: %.2f mm\n", avgRainfall);
    printf("Nhiet do cao nhat: %.2f do C\n", maxTemp);
    printf("Nhiet do thap nhat: %.2f do C\n", minTemp);

    return 0;
}



