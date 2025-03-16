#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class RAM : public Komponen{
	private:
		int kapasitas_GB;
		string ddr;
	
	public:
		RAM(){
			
		}
		
		RAM(int kapasitas_GB, string ddr, string merk, string nama) : 
		Komponen(merk, nama)
		{
			this->kapasitas_GB = kapasitas_GB;
			this->ddr = ddr;
		}
		
		void setKapasitasGB(int kapasitas_GB){
			this->kapasitas_GB = kapasitas_GB;
		}
		
		void setDdr(string ddr){
			this->ddr = ddr;
		}
		
		int getKapasitasGB(){
			return this->kapasitas_GB;
		}
		
		string getDdr(){
			return this->ddr;
		}
		
		~RAM(){
			
		}
};