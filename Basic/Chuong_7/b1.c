#include <stdio.h>

typedef struct
{
   char ho[99];
   char dem[99];
   char ten[99];
} HoTen;
typedef struct 
{
   int toan;
   int ly;
   int hoa;
} Diem;
typedef struct 
{
   char xa[99];
   char huyen[99];
   char tinh[99];
} QueQuan;
typedef struct
{
    char truong[99];
    int tuoi;
   int sbd;
   HoTen hoten;
   Diem diem;
   QueQuan quequan;   
} Student;

int main(int argc, char const *argv[])
{
    Student student;
    printf("Nhap thong tin thi sinh: \n");
    printf("SBD: ");
    scanf("%d", &student.sbd);
    fflush(stdin);
    printf("Truong: ");
    gets(student.truong);
    printf("Tuoi: ");
    scanf("%d", &student.tuoi);
    fflush(stdin);
    printf("Ho: ");
    gets(student.hoten.ho);
    fflush(stdin);
    printf("Ten dem: ");
    gets(student.hoten.dem);
    fflush(stdin);
    printf("Ten: ");
    gets(student.hoten.ten);
    fflush(stdin);
    printf("Diem Toan: ");
    scanf("%d", &student.diem.toan);
    fflush(stdin);
    printf("Diem Ly: ");
    scanf("%d", &student.diem.ly);
    fflush(stdin);
    printf("Diem Hoa: ");
    scanf("%d", &student.diem.hoa);
    fflush(stdin);
    printf("Xa: ");
    gets(student.quequan.xa);
    fflush(stdin);
    printf("Huyen: ");
    gets(student.quequan.huyen);
    fflush(stdin);
    printf("Tinh: ");
    gets(student.quequan.tinh);
    printf("SBD     Truong              Tuoi        Ho va ten           Diem toan       Diem ly         Diem hoa        Dia chi\n");
    printf("%d      %s                  %d          %s %s %s             %d              %d              %d              %s %s %s", student.sbd, student.truong, student.tuoi, student.hoten.ho, student.hoten.dem, student.hoten.ten, student.diem.toan, student.diem.ly, student.diem.hoa, student.quequan.xa, student.quequan.huyen, student.quequan.tinh);
    return 0;
}