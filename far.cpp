#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

main ()
{
  class
  {
  public:
    char nim[8], nama[20];
    int semester, j;
  } mahasiswa;

  class
  {
  public:
    char *grade, matkul[20];
    long sks, absen, tugas, uts, uas, akhir, mutu, jumlah;
  } nilai[100];

  int i;
  float totalmutu = 0, totalsks = 0, ips;
  system ("cls");
  cout << " Universitas Pamulang" << endl;
  cout << "--------------------------------------------------" << endl;
  cout << " dibuat oleh FAZRI ACHYAR ROZAQ" << endl;
  cout << " NIM : 211011400210" << endl;
  cout << " Kelas : 02TPLM001" << endl;
  cout << "--------------------------------------------------" << endl;
  cout << "Pengolahan Data KHS Mahasiswa" << endl;
  cout << "Nomor Induk Mahasiswa : ";
  gets (mahasiswa.nim);
  cout << "Nama Mahasiswa : ";
  gets (mahasiswa.nama);
  cout << "Semester : ";
  cin >> mahasiswa.semester;
  cout << "Jumlah Mata Kuliah : ";
  cin >> mahasiswa.j;
  cout << "--------------------------------------------------" << endl;
  for (i = 1; i <= mahasiswa.j; i++)
    {
      cout << "Data Mahasiswa Ke - " << i << endl;
      cout << "Nama Mata Kuliah : ";
      cin >> nilai[i].matkul;
      cout << "Jumlah SKS : ";
      cin >> nilai[i].sks;
      cout << "Nilai Absen : ";
      cin >> nilai[i].absen;
      cout << "Nilai Tugas : ";
      cin >> nilai[i].tugas;
      cout << "Nilai UTS : ";
      cin >> nilai[i].uts;
      cout << "Nilai UAS : ";
      cin >> nilai[i].uas;
      cout << "---------------------------------------------------" << endl;
      nilai[i].akhir =
	(0.1 * nilai[i].absen) + (0.2 * nilai[i].tugas) +
	(0.3 * nilai[i].uts) + (0.4 * nilai[i].uas);
      if (nilai[i].akhir >= 80)
	{
	  nilai[i].grade = "A";
	  nilai[i].mutu = 4;
	}
      else if (nilai[i].akhir >= 70)
	{
	  nilai[i].grade = "B";
	  nilai[i].mutu = 3;
	}
      else if (nilai[i].akhir >= 60)
	{
	  nilai[i].grade = "C";
	  nilai[i].mutu = 2;
	}
      else if (nilai[i].akhir >= 50)
	{
	  nilai[i].grade = "D";
	  nilai[i].mutu = 1;
	}
      else
	{
	  nilai[i].grade = "E";
	  nilai[i].mutu = 0;
	}


      nilai[i].jumlah = nilai[i].sks + nilai[i].mutu;
      totalmutu = totalmutu + nilai[i].jumlah;
      totalsks = totalsks + nilai[i].sks;
    }

  ips = totalmutu / totalsks;

  system ("cls");
  cout << " Universitas Pamulang" << endl;
  cout << " Kartu Hasil Studi (KHS)" << endl;
  cout <<
    "-------------------------------------------------------------------------"
    << endl;
  cout << "Nomor Induk Mahasiswa : " << mahasiswa.nim << endl;
  cout << "Nama Mahasiswa : " << mahasiswa.nama << endl;
  cout << "Semester : " << mahasiswa.semester << endl;
  cout << "Jumlah Mata Kuliah : " << mahasiswa.j << endl;
  cout <<
    "-------------------------------------------------------------------------"
    << endl;
  cout << "No Nama Mata Kuliah SKS Nilai Akhir Grade Nilai Mutu Jumlah Mutu"
    << endl;
  cout <<
    "-------------------------------------------------------------------------"
    << endl;
  for (i = 1; i <= mahasiswa.j; i++)
    {
      cout << setiosflags (ios::left) << setw (4) << i;
      cout << setiosflags (ios::left) << setw (18) << nilai[i].matkul;
      cout << setiosflags (ios::left) << setw (15) << nilai[i].sks;
      cout << setiosflags (ios::left) << setw (10) << nilai[i].akhir;
      cout << setiosflags (ios::left) << setw (10) << nilai[i].grade;
      cout << setiosflags (ios::left) << setw (10) << nilai[i].mutu;
      cout << setiosflags (ios::left) << setw (20) << nilai[i].jumlah << endl;
    }
  cout <<
    "-------------------------------------------------------------------------"
    << endl;
  cout << " Total Mutu : " << totalmutu << endl;
  cout << " Total SKS : " << totalsks << endl;
  cout << " Indeks Prestasi Semester (IPS) : " << ips << endl;
  getch ();
}

