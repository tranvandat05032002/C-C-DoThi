package com.tvdat.sv.ui;

import java.util.ArrayList;

import com.tv.sv.models.NganhHoc;
import com.tv.sv.models.SinhVien;
import com.tvdat.sv.DAO.NganhDAO;
import com.tvdat.sv.DAO.SinhVienDAO;

public class ChuongTrinh {
	static void getSVCNTTT() {
		SinhVienDAO svDAO = new SinhVienDAO();
		ArrayList<SinhVien> listSVDAO= svDAO.getSinhVienToDatabase();
		System.out.println("STT" + "\t" + "MaSinhVien" + "\t" + "Ho va Ten" + "\t" + "GioiTinh" + "\t" + "NgaySinh");
		for(int i = 0; i < listSVDAO.size(); i++) {
			SinhVien x = listSVDAO.get(i);
			if(x.getManganhHoc() == 102) {
				System.out.println((i + 1) + "\t" + x.getThongTin());
			}
		}
	}
	static void getNganhDaoTao() {
		NganhDAO nganhDAO = new NganhDAO();
		ArrayList<NganhHoc> listNganhDAO= nganhDAO.getNganhHocToDatabase();
		System.out.println("STT" + "\t" + "Ma nganh DT" + "\t" + "TenNganhDaoTao");
		for(int i = 0; i < listNganhDAO.size(); i++) {
			NganhHoc x = listNganhDAO.get(i);
			System.out.println((i + 1) + "\t" + x.getThongTin());
		}
	}
	static void getThongKeSinhVienTheoNganh() {
		SinhVienDAO svDAO = new SinhVienDAO();
		NganhDAO nganhDAO = new NganhDAO();
		ArrayList<SinhVien> listSV = svDAO.getSinhVienToDatabase();
		ArrayList<NganhHoc> listNganhDAO = nganhDAO.getNganhHocToDatabase();
		System.out.println("STT" + "\t" + "Ma nganh DT" + "\t" + "TenNganhDaoTao" + "\t" + "So Sinh Vien");
		for(int i = 0; i < listNganhDAO.size(); i++) {
			NganhHoc nganhHoc = listNganhDAO.get(i);
			int countSV = 0;
			for(int j = 0; j < listSV.size(); j++) {
				SinhVien svJ = listSV.get(j);
				if(nganhHoc.getMaNganh() == svJ.getManganhHoc()) {
					countSV++;
				}
			}
			System.out.println((i + 1) + "\t" + nganhHoc.getThongTin() + "\t\t" + countSV);
		}
	}
	public static void main(String[] args) {
		getSVCNTTT();
		getNganhDaoTao();
		getThongKeSinhVienTheoNganh();
	}

}
