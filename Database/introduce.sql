-- sql query ialah skrip komputer untuk menyimpan, mengubah dan mengambil data yang disimpan pada database.

-- siapa yang perlu sql
-- 1. database admin
-- 2. sistem analyst
-- 3. programmer
-- 4. web developer
-- 5. data scientist
-- 6. business analyst

-- fakta sql query
-- 1. bukan bahasa pemrograman
-- 2. mudah dipahami dan dipelajari
-- 3. bisa mengolah data untuk kebutuhan bisnis yang kompleks

-- siapa pendukung sql
-- 1. mariadb
-- 2. microsoft access
-- 3. oracle
-- 4. mysql
-- 5. postgresql
-- 6. sqlite
-- 7. sql server

-- mari kita pelajari
-- pengenalan database dan tabel
-- data definition language
-- data manipulation language

-- DBMS vs Database
-- DBMS (database management system)
-- ialah perangkat lunak dirancang untuk menjelaskan, mengubah dan mengelola data pada database

-- skema ialah pengelompokan tabel tabel yang sejenis

-- struktur tabel

-- |   |  |   | -> kolom, atribut, field
-- |   |
-- |   | -> baris,row, tuple, record

-- primary key dan Foreign key
-- primary key (kunci utama) adalah atribut unik pada tabel untuk membedakan tiap record, serta menghubungkannya ke table
-- yang lain (foreign key/kunci asing)

-- jenis tabel
-- 1. master (jarang berubah)
-- menyimpan informasi non-transaksi (nama, jenis barang, tanggal lahir, keterangan produk, deskripsi, dll).
-- data terkini, paling muktahir.
-- 2. transaksi
-- menyimpan informasi transaksi (tanggal kejadian, jumlah barang yang dibeli, harga jual, dll).
-- data historikal

-- dasar dasar perintah sql
-- 1. ddl -> perintah untuk mengelola database, tabel dan skema
-- contoh : create, alter, drop, truncate
-- 2. dml -> perintah untuk melakukan penarikan dan pengubahan data
-- contoh : select, insert, update, delete