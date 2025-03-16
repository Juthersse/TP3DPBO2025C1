#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Peripheral : public Komponen{
	private:
		string tipe;
		string jenis_koneksi;
	
	public:
		Peripheral(){
			
		}
		
		Peripheral(string tipe, string jenis_koneksi, string merk, string nama) : 
		Komponen(merk, nama)
		{
			this->tipe = tipe;
			this->jenis_koneksi = jenis_koneksi;
		}
		
		void setTipe(string tipe){
			this->tipe = tipe;
		}
		
		void setJenisKoneksi(string jenis_koneksi){
			this->jenis_koneksi = jenis_koneksi;
		}
		
		string getTipe(){
			return this->tipe;
		}
		
		string getJenisKoneksi(){
			return this->jenis_koneksi;
		}
		
		~Peripheral(){
			
		}
};