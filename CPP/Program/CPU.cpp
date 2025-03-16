#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class CPU : public Komponen{
	private:
		int jumlah_core;
		float kecepatan_GHz;
		
	public:
		CPU(){
			
		}
		
		CPU(int jumlah_core, float kecepatan_GHz, string merk, string nama) : 
		Komponen(merk, nama){
			this->jumlah_core = jumlah_core;
			this->kecepatan_GHz = kecepatan_GHz;
		}
		
		void setJumlahCore(int jumlah_core){
			this->jumlah_core = jumlah_core;
		}
		
		void setKecepatanGHz(float kecepatan_GHz){
			this->kecepatan_GHz = kecepatan_GHz;
		}
		
		int getJumlahCore(){
			return this->jumlah_core;
		}
		
		float getKecepatanGHz(){
			return this->kecepatan_GHz;
		}
		
		string display(){
			return getMerk() + ' ' + getNama() + " (" + to_string(getJumlahCore()) + " Core) ~" + to_string(getKecepatanGHz()) + "GHz";
		}
		
		~CPU(){
			
		}
};