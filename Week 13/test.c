#include <stdio.h>
#define MAX_MONTHS 12  

// Khai báo cấu trúc Weather để lưu thông tin thời tiết
struct Weather {
    float rainfall;   // Tổng lượng mưa
    float maxTemp;     // Nhiệt độ cao nhất
    float minTemp;     // Nhiệt độ thấp nhất
    float avgTemp = (minTemp + maxTemp)/2;     // Nhiệt độ trung bình
};

int main() {
    // Mảng 12 phần tử để lưu thông tin thời tiết của các tháng
    struct Weather yearlyWeather[12];

    // // Nhập thông tin thời tiết cho từng tháng
    // for (int i = 0; i < 12; i++) {
    //     printf("Nhap thong tin thoi tiet cho thang %d:\n", i + 1);
        
    //     // Nhập lượng mưa
    //     printf("Nhap tong luong mua (mm): ");
    //     scanf("%f", &yearlyWeather[i].rainfall);

    //     // Nhập nhiệt độ cao nhất
    //     do {
    //         printf("Nhap nhiet do cao nhat (tu -40 den 50 do C): ");
    //         scanf("%f", &yearlyWeather[i].maxTemp);
    //     } while (yearlyWeather[i].maxTemp < -40 || yearlyWeather[i].maxTemp > 50);

    //     // Nhập nhiệt độ thấp nhất
    //     do {
    //         printf("Nhap nhiet do thap nhat (tu -40 den 50 do C): ");
    //         scanf("%f", &yearlyWeather[i].minTemp);
    //     } while (yearlyWeather[i].minTemp < -40 || yearlyWeather[i].minTemp > 50);

    //     // Tính toán và lưu nhiệt độ trung bình
    //     yearlyWeather[i].avgTemp = (yearlyWeather[i].maxTemp + yearlyWeather[i].minTemp) / 2;
    // }



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
        printf("- Nhiet do trung binh: %.2f do C\n", yearlyWeather[i].avgTemp);
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



