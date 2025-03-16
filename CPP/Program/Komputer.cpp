#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "CPU.cpp"
#include "RAM.cpp"
#include "HardDrive.cpp"
#include "Peripheral.cpp"

using namespace std;

class Komputer{
	private:
		string nama;
		CPU cpu;
		vector<RAM> ram_list;
		HardDrive hard_drive;
		vector<Peripheral> peripheral_list;
		
	public:
		Komputer(){
			
		}
		
		Komputer(string nama, CPU cpu, vector<RAM> ram_list, HardDrive hard_drive, vector<Peripheral> peripheral_list){
			this->nama = nama;
			this->cpu = cpu;
			this->ram_list = ram_list;
			this->hard_drive = hard_drive;
			this->peripheral_list = peripheral_list;
		}
		
		void setNama(string nama){
			this->nama = nama;
		}
		
		void setCpu(CPU cpu){
			this->cpu = cpu;
		}
		
		void setRam(vector<RAM> ram_list){
			this->ram_list = ram_list;
		}
		
		void addRam(RAM ram){
			this->ram_list.push_back(ram);
		}
		
		void setHardDrive(HardDrive hard_drive){
			this->hard_drive = hard_drive;
		}
		
		void setPeripheral(vector<Peripheral> peripheral_list){
			this->peripheral_list = peripheral_list;
		}
		
		void addPeripheral(Peripheral peripheral){
			this->peripheral_list.push_back(peripheral);
		}
		
		string getNama(){
			return this->nama;
		}
		
		CPU getCpu(){
			return this->cpu;
		}
		
		vector<RAM> getRamList(){
			return this->ram_list;
		}
		
		HardDrive getHardDrive(){
			return this->hard_drive;
		}
		
		vector<Peripheral> getPeripheralList(){
			return this->peripheral_list;
		}
		
		~Komputer(){
			
		}
};