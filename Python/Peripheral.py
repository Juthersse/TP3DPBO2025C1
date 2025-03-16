from Komponen import Komponen

class Peripheral(Komponen):
    def __init__(self, tipe="", jenis_koneksi="", merk="", nama=""):
        super().__init__(merk, nama)
        self._tipe = tipe
        self._jenis_koneksi = jenis_koneksi

    def set_tipe(self, tipe):
        self._tipe = tipe

    def set_jenis_koneksi(self, jenis_koneksi):
        self._jenis_koneksi = jenis_koneksi

    def get_tipe(self):
        return self._tipe

    def get_jenis_koneksi(self):
        return self._jenis_koneksi