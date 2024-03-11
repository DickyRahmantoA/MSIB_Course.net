CREATE DATABASE KM_DatabaseSystem  

-- DROP DATABASE KM_DatabaseSystem

CREATE TABLE MsBurger( 
	BurgerID CHAR(5) PRIMARY KEY,
	Nama VARCHAR(100) NOT NULL,
	QTY INT NOT NULL,
	Price INT NOT NULL
)

-- DROP TABLE MsBurger

CREATE TABLE MsExtra(
	ExtraID CHAR(5) NOT NULL,
	Nama VARCHAR(100) NOT NULL,
	Price INT NOT NULL
)

-- DROP TABLE MsExtra

-- kalau kolom nullable, harus ganti jadi not null dulu
ALTER TABLE MsExtra 
ALTER COLUMN ExtraID CHAR(5) NOT NULL

-- cara 1 untuk add PK
ALTER TABLE MsExtra
ADD PRIMARY KEY (ExtraID)

-- cara 2 untuk add PK
ALTER TABLE MsExtra
ADD CONSTRAINT PK_ExtraID PRIMARY KEY (ExtraID)

-- cek detail table
sp_help MsExtra

CREATE TABLE TrTransaction (
	TransaksiID CHAR(5),
	BurgerID CHAR(5) FOREIGN KEY REFERENCES MsBurger(BurgerID),
	QTY INT,
	ExtraID CHAR(5),
	TotalPrice INT

	PRIMARY KEY (TransaksiID),
	CONSTRAINT FK_TransactionExtra FOREIGN KEY (ExtraID)
	REFERENCES MsExtra(ExtraID)
)

-- DML (DATA MANIPULATION LANGUAGE)

-- tarik data
SELECT * FROM MsBurger

INSERT INTO MsBurger VALUES
('BG001', 'Cheese Burger', 1000, '10000'),
('BG002', 'Beef Burger', 1000, '20000'),
('BG003', 'Chicken Burger', 1000, '20000')

INSERT INTO MsBurger VALUES 
('BG004', 'Fish Burger', 1000, '15000')

UPDATE MsBurger 
SET Nama = 'Double Cheese Burger', QTY = 50, Price = 25000
WHERE BurgerID = 'BG001'

DELETE FROM MsBurger 
WHERE BurgerID = 'BG004'

BEGIN TRANSACTION
DELETE FROM MsBurger

COMMIT -- ok
ROLLBACK -- balikin lagi ke sebelum transaksi

TRUNCATE TABLE MsBurger
