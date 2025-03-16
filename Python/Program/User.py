from Komputer import Komputer

class User:
    def __init__(self, nama="", email="", komputer=None):
        self._nama = nama
        self._email = email
        self._komputer = komputer if komputer else Komputer()

    def set_nama(self, nama):
        self._nama = nama

    def set_email(self, email):
        self._email = email

    def set_komputer(self, komputer):
        self._komputer = komputer

    def get_nama(self):
        return self._nama

    def get_email(self):
        return self._email

    def get_komputer(self):
        return self._komputer