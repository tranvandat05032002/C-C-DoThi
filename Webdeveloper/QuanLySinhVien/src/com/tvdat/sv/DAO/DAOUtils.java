package com.tvdat.sv.DAO;
import java.sql.*;

public class DAOUtils {
	static Connection getSQLifeConnection() throws SQLException {
		String url = "jdbc:sqlite:C:\\SQLife\\SQLife\\SinhVienDB.db";
		return DriverManager.getConnection(url);
	}
}