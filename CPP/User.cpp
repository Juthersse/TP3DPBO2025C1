#pragma once
#include <iostream>
#include <string>
#include "Komputer.cpp"

using namespace std;

class User{
	private:
		string nama;
		string email;
		Komputer komputer;
	
	public:
		User(){
			
		}

		User(string nama, string email, Komputer komputer){
			this->nama = nama;
			this->email = email;
			this->komputer = komputer;
		}
		
		void setNama(string nama){
			this->nama = nama;
		}
		
		void setEmail(string email){
			this->email = email;
		}
		
		void setKomputer(Komputer komputer){
			this->komputer = komputer;
		}
		
		string getNama(){
			return this->nama;
		}
		
		string getEmail(){
			return this->email;
		}
		
		Komputer getKomputer(){
			return this->komputer;
		}
		
		~User(){
			
		}
};