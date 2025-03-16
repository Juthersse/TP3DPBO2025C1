#pragma once
#include <iostream>
#include <string>

using namespace std;

class Komponen{
	private:
		string merk;
		string nama;
	
	public:
		Komponen(){
			
		}

		Komponen(string merk, string nama){
			this->merk = merk;
			this->nama = nama;
		}
		
		void setMerk(string merk){
			this->merk = merk;
		}
		
		void setNama(string nama){
			this->nama = nama;
		}
		
		string getMerk(){
			return this->merk;
		}
		
		string getNama(){
			return this->nama;
		}
		
		~Komponen(){
			
		}
};