
--CREATE DATABASE KM_DatabaseSystem;
--USE KM_DatabaseSystem;

CREATE TABLE MsProduct (
	ProductID CHAR(5) PRIMARY KEY,
	Name VARCHAR(100) NOT NULL,
	Price INT NOT NULL
)

CREATE TABLE MsCustomer (
	CustomerID CHAR(5) PRIMARY KEY,
	Name VARCHAR(100) NOT NULL,
	POB VARCHAR(100) NULL,
	DOB DATE NULL
)

CREATE TABLE TrTransaction (
	TransactionID CHAR(5) PRIMARY KEY,
	CustomerID CHAR(5) NOT NULL FOREIGN KEY REFERENCES MsCustomer(CustomerID),
	Tanggal DATETIME NOT NULL,
	TotalPrice INT NOT NULL
)

CREATE TABLE TrTransactionDetail (
	TransactionID CHAR(5) NOT NULL,
	ProductID CHAR(5) NOT NULL,
	QTY INT NOT NULL

	PRIMARY KEY(TransactionID, ProductID),
	CONSTRAINT FK_TransactionID_TrTransaction FOREIGN KEY (TransactionID) REFERENCES TrTransaction(TransactionID),
	CONSTRAINT FK_ProductID_MsProduct FOREIGN KEY (ProductID) REFERENCES MsProduct(ProductID)
)


INSERT MsProduct VALUES
('PR001', 'Pulpen', 1000),
('PR002', 'Penghapus', 500),
('PR003', 'Buku', 2000),
('PR004', 'Correction Pen', 5000)

INSERT MsCustomer VALUES
('CT001', 'Ani', 'Jakarta', '2000-10-01'),
('CT002', 'Budi', 'Bogor', '2001-11-21'),
('CT003', 'Caca', 'Bandung', '2000-03-13')

--INSERT MsCustomer (CustomerID, Name) VALUES
--('CT001', 'Ani'),
--('CT002', 'Budi'),
--('CT003', 'Caca')

INSERT TrTransaction VALUES
('TR001', 'CT001', '2024-01-01', 100000),
('TR002', 'CT002', '2024-01-20', 50000),
('TR003', 'CT002', '2024-02-15', 75000)

INSERT TrTransactionDetail VALUES
('TR001', 'PR001', 50),
('TR001', 'PR002', 10),
('TR002', 'PR004', 10),
('TR002', 'PR003', 50),
('TR003', 'PR004', 10)

UPDATE TrTransaction
SET TransactionID = 'TR004'
WHERE TransactionID = 'TR001'

SELECT NEWID()

SELECT * FROM MsProduct
SELECT * FROM MsCustomer
SELECT * FROM TrTransaction
SELECT * FROM TrTransactionDetail




-- Tarik data penjualan
SELECT DISTINCT c.*
FROM TrTransaction tr
JOIN TrTransactionDetail td on td.TransactionID = tr.TransactionID
JOIN MsCustomer c on c.CustomerID = tr.CustomerID
JOIN MsProduct pr on pr.ProductID = td.ProductID


-- Cari harga total pembelian
SELECT tb.CustomerID, tb.Name, TotalPrice = SUM(tb.TotalPrice)
FROM (
	SELECT DISTINCT tr.CustomerID, c.Name, tr.TransactionID, tr.TotalPrice
	FROM TrTransaction tr
	JOIN TrTransactionDetail td on td.TransactionID = tr.TransactionID
	JOIN MsCustomer c on c.CustomerID = tr.CustomerID
) as tb
GROUP BY tb.CustomerID, tb.Name

-- tarik data yang pembeliannya lebih dari 1x
SELECT tb.CustomerID, tb.Name
FROM (
	SELECT DISTINCT c.CustomerID, c.Name, tr.TransactionID
	FROM TrTransaction tr
	JOIN TrTransactionDetail td on td.TransactionID = tr.TransactionID
	JOIN MsCustomer c on c.CustomerID = tr.CustomerID
) tb
GROUP BY tb.CustomerID, tb.Name
HAVING COUNT(tb.TransactionID) > 1


--SELECT
--FROM
--WHERE
--GROUP BY
--HAVING
--ORDER BY






