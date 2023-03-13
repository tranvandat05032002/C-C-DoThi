package com.tvdat.sv.DAO;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;

import com.tv.sv.models.NganhHoc;

public class NganhDAO {
	public ArrayList<NganhHoc> getNganhHocToDatabase() {
		ArrayList<NganhHoc> listNganhHoc = new ArrayList<>();
		ResultSet rs = null;
		try(Connection cnn = DAOUtils.getSQLifeConnection()) {
			Statement stmt = cnn.createStatement();
			
			String query = "SELECT MaNganh, TenNganh FROM NganhDaoTao";
			
			rs = stmt.executeQuery(query);
			while (rs.next()) {
				int maNganhHoc = rs.getInt("MaNganh");
				String tenNganh = rs.getString("TenNganh");
				NganhHoc newNganhHoc = new NganhHoc(maNganhHoc, tenNganh);
				listNganhHoc.add(newNganhHoc);
			}
			stmt.close();
		}
		catch(SQLException e) {
			e.printStackTrace();
		}
		return listNganhHoc;
	}
}
