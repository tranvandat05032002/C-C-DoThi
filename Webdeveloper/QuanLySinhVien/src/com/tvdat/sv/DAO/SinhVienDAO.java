package com.tvdat.sv.DAO;
import java.sql.*;
import java.util.ArrayList;

import com.tv.sv.models.SinhVien;

public class SinhVienDAO {
	public ArrayList<SinhVien> getSinhVienToDatabase() {
		ArrayList<SinhVien> listSinhVien = new ArrayList<>();
		ResultSet rs = null;
		try(Connection cnn = DAOUtils.getSQLifeConnection()) {
			Statement stmt = cnn.createStatement();
			
			String query = "SELECT MaSinhVien, HoDem, Ten, MaNganh, GioiTinh FROM SinhVien";
			
			rs = stmt.executeQuery(query);
			while (rs.next()) {
				String maSinhVien = rs.getString("MaSinhVien");
				int nganhHoc = rs.getInt("MaNganh");
				String hoDem = rs.getString("HoDem");
				String ten = rs.getString("Ten");
				boolean gioiTinh = rs.getBoolean("GioiTinh");
				String ngaySinh = "05/03/2002";
				SinhVien newSinhVien = new SinhVien(maSinhVien, hoDem, ten, gioiTinh, nganhHoc, ngaySinh);
				listSinhVien.add(newSinhVien);
			}
			stmt.close();
		}
		catch(SQLException e) {
			e.printStackTrace();
		}
		return listSinhVien;
	}
}
