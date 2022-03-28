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
    Student student[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Nhap thong tin thi sinh: \n");
        printf("SBD: ");
        scanf("%d", &student[i].sbd);
        fflush(stdin);
        printf("Truong: ");
        gets(student[i].truong);
        printf("Tuoi: ");
        scanf("%d", &student[i].tuoi);
        fflush(stdin);
        printf("Ho: ");
        gets(student[i].hoten.ho);
        fflush(stdin);
        printf("Ten dem: ");
        gets(student[i].hoten.dem);
        fflush(stdin);
        printf("Ten: ");
        gets(student[i].hoten.ten);
        fflush(stdin);
        printf("Diem Toan: ");
        scanf("%d", &student[i].diem.toan);
        fflush(stdin);
        printf("Diem Ly: ");
        scanf("%d", &student[i].diem.ly);
        fflush(stdin);
        printf("Diem Hoa: ");
        scanf("%d", &student[i].diem.hoa);
        fflush(stdin);
        printf("Xa: ");
        gets(student[i].quequan.xa);
        fflush(stdin);
        printf("Huyen: ");
        gets(student[i].quequan.huyen);
        fflush(stdin);
        printf("Tinh: ");
        gets(student[i].quequan.tinh);
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (student[i].diem.toan + student[i].diem.ly + student[i].diem.hoa < student[j].diem.toan + student[j].diem.ly + student[j].diem.hoa)
            {
                Student sv = student[i];
                student[i] = student[j];
                student[j] = sv;
            }
            
        }
    
    }
    for (int i = 0; i < 20; ++i)
    {
        printf("SBD     Truong              Tuoi        Ho va ten           Diem toan       Diem ly         Diem hoa        Dia chi\n");
        printf("%d      %s                  %d          %s %s %s             %d              %d              %d              %s %s %s", student[i].sbd, student[i].truong, student[i].tuoi, student[i].hoten.ho, student[i].hoten.dem, student[i].hoten.ten, student[i].diem.toan, student[i].diem.ly, student[i].diem.hoa, student[i].quequan.xa, student[i].quequan.huyen, student[i].quequan.tinh);
    }
    return 0;
}