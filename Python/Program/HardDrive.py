from Komponen import Komponen

class HardDrive(Komponen):
    def __init__(self, kapasitas_GB=0, tipe_drive="", merk="", nama=""):
        super().__init__(merk, nama)
        self._kapasitas_GB = kapasitas_GB
        self._tipe_drive = tipe_drive

    def set_kapasitas_GB(self, kapasitas_GB):
        self._kapasitas_GB = kapasitas_GB

    def set_tipe_drive(self, tipe_drive):
        self._tipe_drive = tipe_drive

    def get_kapasitas_GB(self):
        return self._kapasitas_GB

    def get_tipe_drive(self):
        return self._tipe_drive

    def display(self):
        return f"{self.get_tipe_drive()} {self.get_merk()} {self.get_nama()} ({self.get_kapasitas_GB()} GB)"