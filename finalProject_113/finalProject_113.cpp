#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }


	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}

	void setActivity(float nilai) {
		this->activity = nilai;
	}
	float getActivity() {
		return; activity;
	}

	void setExercise(float nilai) {
		this->exercise = nilai;
	}
	float getExercise(float nilai) {
		return; exercise;
	}

	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getTugasAkhir(float nilai) {
		return; tugasAkhir;

	};

	class Pemrograman : public MataKuliah {
	public:
		presensi(int a) :
			NilaiAkhir() {
			cout << "Nilai presensi dibuat\n" << endl;
			cout << "Masukkan nilai presensi" << endl;
		}
		activity(int a) :
			NilaiAkhir() {
			cout << "Nilai activity dibuat\n" << endl;
			cout << "NMasukkan  nilai activity" << endl;
		}
		exercise(int a) :
			NilaiAkhir() {
			cout << "Nilai exercise dibuat\n" << endl;
			cout << "Masukkan nilai exercise\n" << endl;
		}
		tugasAkhir(int a) :
			NilaiAkhir() {
			cout << "Nilai tugasAkhir dibuat\n" << endl;
			cout << "Masukkan nilai exercise\n" << endl;
		}
	};

	int main() {
		nilaiAkhir Presensi;
		int a;
		Presensi.input();
		Presensi.setP(90);
		cout << "NilaiPresensi: " << Presensi.Nilai << endl;
		cout << Presensi.Total << endl;
		Presensi.getP();

		nilaiAkhir Activity;
		int a;
		Activity.input();
		Activity.setA(80);
		cout << "NilaiActivity: " << Activity.Nilai << endl;
		cout << Activity.Total << endl;
		Activity.getA();

		nilaiAkhir Exercise;
		int a;
		Exercise.input();
		Exercise.setE(60);
		cout << "NilaiExercise: " << Exercise.Nilai << endl;
		cout << Exercise.Total << endl;
		Exercise.getE();

		nilaiAkhir TugasAkhir;
		int a;
		TugasAkhir.input();
		TugasAkhir.setUA(75);
		cout << "NilaiTugasAkhir: " << TugasAkhir.Nilai << endl;
		cout << TugasAkhir.Total << endl;
		TugasAkhir.getUA();


		return 0;
	}
};