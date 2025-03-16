from Komputer import Komputer
from User import User
from CPU import CPU
from RAM import RAM
from HardDrive import HardDrive
from Peripheral import Peripheral

def main():
    cpu1 = CPU(12, 3.6, "Intel", "Core i7")
    cpu2 = CPU(12, 3.7, "AMD", "Ryzen 9")
    ram1 = RAM(16, "DDR4", "Corsair", "Vengeance")
    ram2 = RAM(32, "DDR5", "G.Skill", "Trident")
    ram3 = RAM(8, "DDR4", "Kingston", "Fury")
    ram4 = RAM(16, "DDR5", "Crucial", "Ballistix")
    hard_drive1 = HardDrive(1024, "SSD", "Samsung", "EVO")
    hard_drive2 = HardDrive(2048, "HDD", "Seagate", "Barracuda")
    mouse = Peripheral("Mouse", "Wireless Bluetooth", "Logitech", "MX Master 3 Mouse")
    monitor = Peripheral("Monitor", "HDMI", "LG", "UltraFine 4k Monitor")
    keyboard = Peripheral("Keyboard", "Wireless Bluetooth", "Keychron", "K6 Mechanical Keyboard")
    speaker = Peripheral("Speaker", "AUX", "Bose", "Companion 2 Series III Speaker")
    
    PC1 = Komputer("PC1", cpu1, [ram1, ram4], hard_drive1, [mouse, monitor, keyboard, speaker])
    PC2 = Komputer("PC2", cpu2, [ram2], hard_drive2, [mouse, monitor, keyboard, speaker])
    PC2.add_ram(ram3)
    
    Alice = User("Alice Johnson", "alice@gmail.com", PC1)
    Bob = User("Bob Smith", "bob@gmail.com", PC2)
    
    print("Informasi Komputer:")
    print("--------------------------")
    
    print(f"Nama Pemilik: {Alice.get_nama()}")
    print(f"Email Pemilik: {Alice.get_email()}")
    print(f"Nama Komputer: {Alice.get_komputer().get_nama()}")
    print(f"CPU: {Alice.get_komputer().get_cpu().display()}")
    for ram in Alice.get_komputer().get_ram_list():
        print(f"RAM: {ram.get_merk()} {ram.get_nama()} ({ram.get_kapasitas_GB()} GB) {ram.get_ddr()}")
    print(f"Hard Drive: {Alice.get_komputer().get_hard_drive().display()}")
    for peripheral in Alice.get_komputer().get_peripheral_list():
        print(f"{peripheral.get_tipe()}: {peripheral.get_merk()} {peripheral.get_nama()} ({peripheral.get_jenis_koneksi()})")
    
    print("--------------------------")
    print(f"Nama Pemilik: {Bob.get_nama()}")
    print(f"Email Pemilik: {Bob.get_email()}")
    print(f"Nama Komputer: {Bob.get_komputer().get_nama()}")
    print(f"CPU: {Bob.get_komputer().get_cpu().display()}")
    for ram in Bob.get_komputer().get_ram_list():
        print(f"RAM: {ram.get_merk()} {ram.get_nama()} ({ram.get_kapasitas_GB()} GB) {ram.get_ddr()}")
    print(f"Hard Drive: {Bob.get_komputer().get_hard_drive().display()}")
    for peripheral in Bob.get_komputer().get_peripheral_list():
        print(f"{peripheral.get_tipe()}: {peripheral.get_merk()} {peripheral.get_nama()} ({peripheral.get_jenis_koneksi()})")

if __name__ == "__main__":
    main()
