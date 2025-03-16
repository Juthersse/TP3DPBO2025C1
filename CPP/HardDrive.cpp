#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class HardDrive : public Komponen{
	private:
		int kapasitas_GB;
		string tipe_drive;
	
	public:
		HardDrive(){
			
		}
		
		HardDrive(int kapasitas_GB, string tipe_drive, string merk, string nama) : 
		Komponen(merk, nama)
		{
			this->kapasitas_GB = kapasitas_GB;
			this->tipe_drive = tipe_drive;
		}
		
		void setKapasitasGB(int kapasitas_GB){
			this->kapasitas_GB = kapasitas_GB;
		}
		
		void setTipeDrive(string tipe_drive){
			this->tipe_drive = tipe_drive;
		}
		
		int getKapasitasGB(){
			return this->kapasitas_GB;
		}
		
		string getTipeDrive(){
			return this->tipe_drive;
		}
		
		string display(){
			return getTipeDrive() + ' ' + getMerk() + ' ' + getNama() + " (" + to_string(getKapasitasGB()) + " GB) ";
		}
		
		~HardDrive(){
			
		}
};