from CPU import CPU
from RAM import RAM
from HardDrive import HardDrive
from Peripheral import Peripheral

class Komputer:
    def __init__(self, nama="", cpu=None, ram_list=None, hard_drive=None, peripheral_list=None):
        self._nama = nama
        self._cpu = cpu if cpu else CPU()
        self._ram_list = ram_list if ram_list else []
        self._hard_drive = hard_drive if hard_drive else HardDrive()
        self._peripheral_list = peripheral_list if peripheral_list else []

    def set_nama(self, nama):
        self._nama = nama

    def set_cpu(self, cpu):
        self._cpu = cpu

    def set_ram_list(self, ram_list):
        self._ram_list = ram_list

    def add_ram(self, ram):
        self._ram_list.append(ram)

    def set_hard_drive(self, hard_drive):
        self._hard_drive = hard_drive

    def set_peripheral_list(self, peripheral_list):
        self._peripheral_list = peripheral_list

    def add_peripheral(self, peripheral):
        self._peripheral_list.append(peripheral)

    def get_nama(self):
        return self._nama

    def get_cpu(self):
        return self._cpu

    def get_ram_list(self):
        return self._ram_list

    def get_hard_drive(self):
        return self._hard_drive

    def get_peripheral_list(self):
        return self._peripheral_list