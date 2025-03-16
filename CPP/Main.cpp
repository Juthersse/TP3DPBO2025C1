#include <bits/stdc++.h>
#include "CPU.cpp"
#include "RAM.cpp"
#include "HardDrive.cpp"
#include "Peripheral.cpp"
#include "Komputer.cpp"
#include "User.cpp"

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie();
	
	CPU cpu1(12, 3.6, "Intel", "Core i7");
	CPU cpu2(12, 3.7, "AMD", "Ryzen 9");
	RAM ram1(16, "DDR4", "Corsair", "Vengeance");
	RAM ram2(32, "DDR5", "G.Skill", "Trident");
	RAM ram3(8, "DDR4", "Kingston", "Fury");
	RAM ram4(16, "DDR5", "Crucial", "Ballistix");
	HardDrive hard_drive1(1024, "SSD", "Samsung", "EVO");
	HardDrive hard_drive2(2048, "HDD", "Seagate", "Barracuda");
	Peripheral mouse("Mouse", "Wireless Bluetooth", "Logitech", "MX Master 3 Mouse");
	Peripheral monitor("Monitor", "HDMI", "LG", "UltraFine 4k Monitor");
	Peripheral keyboard("Keyboard", "Wireless Bluetooth", "Keychron", "K6 Mechanical Keyboard");
	Peripheral speaker("Speaker", "AUX", "Bose", "Companion 2 Series III Speaker");
	
	Komputer PC1("PC1", cpu1, {ram1, ram4}, hard_drive1, {mouse, monitor, keyboard, speaker});
	Komputer PC2("PC2", cpu2, {ram2}, hard_drive2, {mouse, monitor, keyboard, speaker});
	PC2.addRam(ram3);
	
	User Alice("Alice Johnson", "alice@gmail.com", PC1);
	User Bob("Bob Smith", "bob@gmail.com", PC2);
	
	cout << "Informasi Komputer:" << endl;
	cout << "--------------------------" << endl;
	
	cout << "Nama Pemilik: " << Alice.getNama() << endl;
	cout << "Email Pemilik: " << Alice.getEmail() << endl;
	cout << "Nama Komputer: " << Alice.getKomputer().getNama() << endl;
	cout << "CPU: " << Alice.getKomputer().getCpu().display() << endl;
	for(RAM& ram : Alice.getKomputer().getRamList()){
		cout << "RAM: ";
			cout << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
	}
	cout << "Hard Drive: " << Alice.getKomputer().getHardDrive().display() << endl;
	for(Peripheral& peripheral : Alice.getKomputer().getPeripheralList()){
		cout << peripheral.getTipe() << ": ";
			cout << peripheral.getMerk() << ' ' << peripheral.getNama() << " (" << peripheral.getJenisKoneksi() << ") " << endl;
	}
	
	cout << "--------------------------" << endl;
	cout << "Nama Pemilik: " << Bob.getNama() << endl;
	cout << "Email Pemilik: " << Bob.getEmail() << endl;
	cout << "Nama Komputer: " << Bob.getKomputer().getNama() << endl;
	cout << "CPU: " << Bob.getKomputer().getCpu().display() << endl;
	for(RAM& ram : Bob.getKomputer().getRamList()){
		cout << "RAM: ";
			cout << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
	}
	cout << "Hard Drive: " << Bob.getKomputer().getHardDrive().display() << endl;
	for(Peripheral& peripheral : Bob.getKomputer().getPeripheralList()){
		cout << peripheral.getTipe() << ": ";
			cout << peripheral.getMerk() << ' ' << peripheral.getNama() << " (" << peripheral.getJenisKoneksi() << ") " << endl;
	}
}
