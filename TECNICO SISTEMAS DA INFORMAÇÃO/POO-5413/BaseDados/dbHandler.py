import sqlite3

class dbHandler:
    def __init__(self, dbName:str):
        self.dbName = dbName

    def saveData(self, data:dict):
        conn = sqlite3.connect(self.dbName)
