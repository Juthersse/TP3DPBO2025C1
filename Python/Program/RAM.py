from Komponen import Komponen

class RAM(Komponen):
    def __init__(self, kapasitas_GB=0, ddr="", merk="", nama=""):
        super().__init__(merk, nama)
        self._kapasitas_GB = kapasitas_GB
        self._ddr = ddr

    def set_kapasitas_GB(self, kapasitas_GB):
        self._kapasitas_GB = kapasitas_GB

    def set_ddr(self, ddr):
        self._ddr = ddr

    def get_kapasitas_GB(self):
        return self._kapasitas_GB

    def get_ddr(self):
        return self._ddr