--comment -> ctrl + k + c
-- uncomment -> ctrl + k + u

CREATE DATABASE KM_DatabaseSystem;

-- DROP DATABASE KM_DatabaseSystem
USE KM_DatabaseSystem;

--DROP TABLE TrTransactionDetail
--DROP TABLE TrTransaction
--DROP TABLE MsBurger
--DROP TABLE MsExtra

CREATE TABLE MsBurger (
	BurgerID CHAR(5) PRIMARY KEY,
	Nama VARCHAR(100) NOT NULL,
	QTY INT NOT NULL,
	Price INT NOT NULL
)

CREATE TABLE MsExtra (
	ExtraID CHAR(5) PRIMARY KEY,
	Nama VARCHAR(100) NOT NULL,
	Price INT NOT NULL
)

CREATE TABLE TrTransaction (
	TransaksiID CHAR(5) PRIMARY KEY,
	TanggalTransaksi DATETIME,
	TotalPembayaran INT
)

CREATE TABLE TrTransactionDetail (
	TransaksiDetailID CHAR(5) PRIMARY KEY,
	TransaksiID CHAR(5) FOREIGN KEY REFERENCES TrTransaction(TransaksiID),
	BurgerID CHAR(5) FOREIGN KEY REFERENCES MsBurger(BurgerID) NOT NULL,
	QTY INT NOT NULL,
	ExtraID CHAR(5) FOREIGN KEY REFERENCES MsExtra(ExtraID) NULL
)

INSERT INTO MsBurger VALUES
('BG001', 'Cheese Burger', 100, '15000'),
('BG002', 'Beef Burger', 100, '20000'),
('BG003', 'Chicken Burger', 100, '20000'),
('BG004', 'Fish Burger', 100, '15000'),
('BG005', 'Double Cheese Burger', 50, '20000'),
('BG006', 'Double Beef Burger', 50, '35000'),
('BG007', 'Double Chicken Burger', 50, '35000'),
('BG008', 'Double Fish Burger', 50, '25000')

INSERT INTO MsExtra VALUES
('EX001', 'Bacon Gravy', 2300),
('EX002', 'Chicken Strips', 2500),
('EX003', 'Liquid Cheese', 1700),
('EX004', 'Mozza Cheese', 2000),
('EX005', 'Onion Rings', 1900)

INSERT INTO TrTransaction VALUES
('TR001', '2023-10-11 12:45', 30000),
('TR002', '2023-10-11 13:00', 37000),
('TR003', '2023-10-12 14:00', 85700)

INSERT INTO TrTransactionDetail VALUES
('TD001', 'TR001', 'BG001', 2, NULL),
('TD002', 'TR002', 'BG001', 1, NULL),
('TD003', 'TR002', 'BG005', 1, 'EX004'),
('TD004', 'TR003', 'BG002', 1, 'EX003'),
('TD005', 'TR003', 'BG002', 1, NULL),
('TD006', 'TR003', 'BG003', 2, 'EX004')

SELECT * FROM TrTransaction a
JOIN TrTransactionDetail b on b.TransaksiID = a.TransaksiID

SELECT * FROM MsBurger
SELECT * FROM MsExtra
SELECT * FROM TrTransaction
SELECT * FROM TrTransactionDetail
