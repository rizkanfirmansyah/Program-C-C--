#include<stdio.h>
#include<math.h>
// #include<cmath>

int main(){
	int menu, pilih, r, Ls, Lp, K, V, p, l, t; 
	float r1, Ls1, Lp1, K1, V1, p1, l1, t1, Dr, L, LT, la, lt, ls, d1, VT;
	
	printf("			 RUMUS-RUMUS BANGUN RUANG			\n\n\n");
	printf("1. Kubus \n");
	printf("2. Balok  \n");
	printf("3. Bola  \n");
	printf("4. Tabung  \n");
	printf("5. Kerucut  \n");
	printf("Pilih bangun ruang : ");
	scanf("%d",&menu);
	
	if(menu==1){
		printf("\n1. Kubus \n\n");
		printf("Pilih Rumus : \n");
		printf("	1. Luas sisi kubus \n");
		printf("	2. Luas Permukaan kubus \n");
		printf("	3. Keliling kubus \n");
		printf("	4. Volume kubus \n");
		
		printf("Pilih	: ");
		scanf("%d",&menu);
			
		if(menu==1){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
			
			if(pilih==1){
			printf("\n1. Luas sisi kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%d",&r);
			Ls = r * r;
			printf("Luas sisi kubus tersebut adalah \n= %d",Ls);
			
			}else if(pilih==2){
			printf("\n1. Luas sisi kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%f",&r1);
			Ls1 = r1 * r1;
			printf("Luas sisi kubus tersebut adalah \n= %f",Ls1);

		}else{
			printf("Tidak ada rumus lain \n");
		}
		
		}else if(menu==2){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
			
			if(pilih==1){
			printf("\n2. Luas permukaan kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%d",&r);
			Lp = 6 * r * r;
			printf("Luas permukaan kubus tersebut adalah \n= %d",Lp);
			
			}else if(pilih==2){
			printf("\n2. Luas permukaan kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%f",&r1);
			Lp1 = 6 * r1 * r1;
			printf("Luas permukaan kubus tersebut adalah \n= %f",Lp1);

		}else{
			printf("Tidak ada rumus lain \n");
		}
		}else if(menu==3){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
			
			if(pilih==1){
			printf("\n3. Keliling kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%d",&r);
			K = 12 * r;
			printf("Keliling kubus tersebut adalah \n= %d",K);
			
			}else if(pilih==2){
			printf("\n3. Keliling kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%f",&r1);
			K1 = 12 * r1;
			printf("Keliling kubus tersebut adalah \n= %f",K1);

		}else{
			printf("Tidak ada rumus lain \n");
			}
		}else if(menu==4){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
			
			if(pilih==1){
			printf("\n4. Volume kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%d",&r);
			V = r * r * r;
			printf("Volume kubus tersebut adalah \n= %d",V);
			
			}else if(pilih==2){
			printf("\n4. Volume kubus \n");
			printf("Diketahui : rusuk = ");
			scanf("%f",&r1);
			V1 = r1 * r1 * r1;
			printf("Volume kubus tersebut adalah \n= %f",V1);

		}else{
			printf("Tidak ada rumus lain \n");
		}
		
		}else{
			printf("Tidak ada rumus lain \n");
		}
		
	}else if(menu==2){
		printf("\n2. Balok \n\n");
		printf("Pilih Rumus : \n");
		printf("	1. Luas Permukaan kubus \n");
		printf("	2. Diagonal ruang kubus \n");
		printf("	3. Keliling kubus \n");
		printf("	4. Volume kubus \n");
		
		printf("Pilih	: ");
		scanf("%d",&menu);
			
		if(menu==1){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
		
			if(pilih==1){
			printf("\n1. Luas Permukaan Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%d",&p);
			printf("Lebar = ");
			scanf("%d",&l);
			printf("Tinggi = ");
			scanf("%d",&t);
			Lp = 2 * ((p*l) + (l*t) + (p*t));
			printf("Luas Permukaan kubus tersebut adalah \n= %d",Lp);

			}else if(pilih==2){
			printf("\n1. Luas Permukaan Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%f",&p1);
			printf("Lebar = ");
			scanf("%f",&l1);
			printf("Tinggi = ");
			scanf("%f",&t1);
			Lp1 = 2 * ((p1*l1) + (l1*t1) + (p1*t1));
			printf("Luas Permukaan kubus tersebut adalah \n= %f",Lp1);
			
			}else{
					printf("Tidak ada rumus lain \n");
			}
			
		}else if(menu==2){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
		
			if(pilih==1){
			printf("\n1. Diagonal Ruang Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%d",&p);
			printf("Lebar = ");
			scanf("%d",&l);
			printf("Tinggi = ");
			scanf("%d",&t);
			float Dr = sqrtf((p*p) + (l*l) + (t*t));
			printf("Diagonal Ruang kubus tersebut adalah \n= %f",Dr);
	
		}else if(pilih==2){
			printf("\n1. Diagonal Ruang Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%f",&p1);
			printf("Lebar = ");
			scanf("%f",&l1);
			printf("Tinggi = ");
			scanf("%f",&t1);
			float Dr = sqrtf((p1*p1) + (l1*l1) + (t1*t1));
			printf("Diagonal Ruang kubus tersebut adalah \n= %f",Dr);
		
		}else{
					printf("Tidak ada rumus lain \n");
					
			}
	}else if(menu==3){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
		
			if(pilih==1){
			printf("\n3. Keliling Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%d",&p);
			printf("Lebar = ");
			scanf("%d",&l);
			printf("Tinggi = ");
			scanf("%d",&t);
			K = 4 * (p + l + t);
			printf("Keliling kubus tersebut adalah \n= %d",K);
	
		}else if(pilih==2){
			printf("\n3. Keliling Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%f",&p1);
			printf("Lebar = ");
			scanf("%f",&l1);
			printf("Tinggi = ");
			scanf("%f",&t1);
			K1 = 4 * (p1 + l1 + t1);
			printf("Keliling kubus tersebut adalah \n= %f",K1);
			
		}else{
					printf("Tidak ada rumus lain \n");
		}
							
	}else if(menu==4){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
		
			if(pilih==1){
			printf("\n4. Volume Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%d",&p);
			printf("Lebar = ");
			scanf("%d",&l);
			printf("Tinggi = ");
			scanf("%d",&t);
			V = p * l * t;
			printf("Volume kubus tersebut adalah \n= %d",V);
	
		}else if(pilih==2){
			printf("\n4. Volume Balok \n");
			printf("Diketahui :\nPanjang = ");
			scanf("%f",&p1);
			printf("Lebar = ");
			scanf("%f",&l1);
			printf("Tinggi = ");
			scanf("%f",&t1);
			V1 = p1 * l1 * t1;
			printf("Volume kubus tersebut adalah \n= %f",V1);
			
		}else{
					printf("Tidak ada rumus lain \n");
			}
		
	}else{
					printf("Tidak ada rumus lain \n");
		}
	
	}else if(menu==3){
		printf("\n3. Bola \n\n");
		printf("Pilih Rumus : \n");
		printf("	1. Luas Bola \n");
		printf("	2. Volume Bola \n");
		
		printf("Pilih	: ");
		scanf("%d",&menu);
		
			if(menu==1){
			printf("\n1. Luas Bola \n");
			printf("Diketahui : jari-jari = ");
			scanf("%f",&r1);
			L = 4 * (22 * r1 * r1 / 7);
			printf("Luas Bola tersebut adalah \n= %f",L);
			
		}else if(menu==2){
			printf("\n2. Volume Bola \n");
			printf("Diketahui : jari-jari = ");
			scanf("%f",&r1);
			V1 = 4 * (22 * r1 * r1 * r1  / 7) / 3;
			printf("Luas Bola tersebut adalah \n= %f",V1);
			
		}else{
					printf("Tidak ada rumus lain \n");
		}
		
	}else if(menu==4){
		printf("\n4. Tabung \n\n");
		printf("Pilih Rumus : \n");
		printf("	1. Luas Tabung \n");
		printf("	2. Volume Tabung \n");
		
		printf("Pilih	: ");
		scanf("%d",&menu);
		
		
		if(menu==1){
			printf("\n1. Luas Tabung \n");
			printf("	1. Diketahui Alas \n");
			printf("	2. Diketahui Jari-jari \n");
		
			printf("Pilih : ");
			scanf("%d",&pilih);
			
			if(pilih==1){
			printf("\nDiketahui : \nLuas Alas = ");
			scanf("%f",&la);
			printf("Luas Tutup = ");
			scanf("%f",&lt);
			printf("Luas Selimut = ");
			scanf("%f",&ls);
			LT = la + lt + ls;
			printf("Luas Tabung tersebut adalah \n= %f",LT);
			
			}else if(pilih==2){
				printf("\nDiketahui : \nr = ");
				scanf("%f",&r1);
				printf("d = ");
				scanf("%f",&d1);
				printf("t = ");
				scanf("%f",&t1);
				LT = (2 *(22 * r1 * r1 / 7) + 22 * d1 * t1 / 7);
				printf("Luas Tabung tersebut adalah \n= %f",LT);

		}else{
			printf("Tidak ada rumus lain \n");
		}
			
		}else if(menu==2){
			printf("\nPilih Rumus : \n");
			printf("1.Nilai Bilangan bulat \n");
			printf("2.Nilai Bilangan decimal \n");
			printf("Pilih : ");
			scanf("%d",&pilih);
			
			if(pilih==1){
			printf("\n2. Volume Tabung \n");
			printf("Diketahui :\nLuas alas/Luas lingkaran = ");
			scanf("%d",&l);
			printf("Tinggi = ");
			scanf("%d",&t);
			V = l * t ;
			printf("Volume Tabung tersebut adalah \n= %d",V);
	
		}else if(pilih==2){
			printf("\n2. Volume Tabung \n");
			printf("Diketahui :\nLuas alas/Luas lingkaran = ");
			scanf("%f",&la);
			printf("Tinggi = ");
			scanf("%f",&t1);
			V1 = la * t1 ;
			printf("Volume Tabung tersebut adalah \n= %f",V1);
		
		}else{
			printf("Tidak ada rumus lain \n");
		}
		
			}else{
			printf("Tidak ada rumus lain \n");
		}	
		}else if(menu==5){
		printf("\n5. Kerucut \n\n");
		printf("Pilih Rumus : \n");
		printf("	1. Luas Kerucut \n");
		printf("	2. Volume Kerucut \n");
		
		printf("Pilih : ");
		scanf("%d",&pilih);
			
			if(pilih==1){
				printf("\n1. Luas Kerucut ");
			printf("\nDiketahui : \nLuas Alas = ");
			scanf("%f",&la);
			printf("Luas Selimut = ");
			scanf("%f",&ls);
			LT = la + ls;
			printf("Luas Tabung tersebut adalah \n= %f",LT);
		
		}else if(pilih==2){
	   	printf("\n2. Volume Kerucut ");
			printf("\nDiketahui : \nJari-jari = ");
			scanf("%f",&r1);
			printf("Tinggi = ");
			scanf("%f",&t1);
			VT = 1 *(22 * r1 * r1 * t1 /7)/3;
			printf("Volume Tabung tersebut adalah \n= %f",VT);
			
				}else{
			printf("Tidak ada rumus lain \n");
		}
			
			}else{
			printf("Tidak ada rumus Bangun Ruang lain \n");
		}
	}

