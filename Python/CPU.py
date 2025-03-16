from Komponen import Komponen

class CPU(Komponen):
    def __init__(self, jumlah_core=0, kecepatan_GHz=0.0, merk="", nama=""):
        super().__init__(merk, nama)
        self._jumlah_core = jumlah_core
        self._kecepatan_GHz = kecepatan_GHz

    def set_jumlah_core(self, jumlah_core):
        self._jumlah_core = jumlah_core

    def set_kecepatan_GHz(self, kecepatan_GHz):
        self._kecepatan_GHz = kecepatan_GHz

    def get_jumlah_core(self):
        return self._jumlah_core

    def get_kecepatan_GHz(self):
        return self._kecepatan_GHz

    def display(self):
        return f"{self.get_merk()} {self.get_nama()} ({self.get_jumlah_core()} Core) ~ {self.get_kecepatan_GHz()} GHz"